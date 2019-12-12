#include "paciente.h"
#include <fstream>
#include <cstring>
#include <iostream>
using namespace std;

Paciente::Paciente(string nombreapellidos,string sexo,string fechanacimiento,int telefono,string domicilio,string procedencia){
	nombreapellidos_=nombreapellidos;
	sexo_=sexo;
	fechanacimiento_=fechanacimiento;
	telefono_=telefono;
	domicilio_=domicilio;
	procedencia_=procedencia;
}

bool buscar_paciente(string nombreapellidos){
	ifstream f("pacientes.txt"); //abre fichero con lectura
	char NOMAP[30],SEX[10],FECHA[20],TEL[20],DOM[30],PROC[20];	
	Paciente aux("Paciente Auxiliar","H","00/00/00",0000); 
	while(f.getline(NOMAP,30,','))
	{
		f.getline(SEX,10,',');
		f.getline(FECHA,20,',');
		f.getline(TEL,20,',');
		f.getline(DOM,30,',');
		f.getline(PROC,20,'\n');
		
		if (string(NOMAP).compare(nombreapellidos)==0)
			return true; //EXISTE
	}
	f.close();
	return false; //NO EXISTE
}

bool Paciente::anadir_paciente(){
	if (buscar_paciente(nombreapellidos_)==false)
	{
		fstream f("pacientes.txt",ios::in);
		if (!f)
		{
			cout<<"ERROR. No se pudo añadir el paciente.\n";
			return false; //No existe el fichero
		}
		else
		{
			f.close();
			fstream f("pacientes.txt",ios::out|ios::app);
			f<<nombreapellidos_<<","<<sexo_<<","<<fechanacimiento_<<","<<telefono_<<","<<domicilio_<<","<<procedencia_<<"\n";
			f.close();
		}
		return true;
	}
	else
	{
		cout<<"ERROR. Ese paciente ya existe.\n";
	}
	return false;
}

bool Paciente::borrar_paciente(string nombrecompleto){
	if (buscar_paciente(nombrecompleto)==true) //el paciente a borrar existe
	{
		ofstream nuevo("aux.txt",ios::trunc); //crea fichero auxiliar
		fstream viejo("pacientes.txt",ios::in); //abre con lectura el antiguo
		
		char NOMAP[30],SEX[10],FECHA[20],TEL[20],DOM[30],PROC[20];			
		while(viejo.getline(NOMAP,30,','))
		{
			viejo.getline(SEX,10,',');
			viejo.getline(FECHA,20,',');
			viejo.getline(TEL,20,',');
			viejo.getline(DOM,30,',');
			viejo.getline(PROC,20,'\n');
			
			if (string(NOMAP).compare(nombrecompleto)!=0) //No es el paciente a borrar > SE COPIA			
				nuevo<<string(NOMAP)<<","<<string(SEX)<<","<<string(FECHA)<<","<<string(TEL)<<","<<string(DOM)<<","<<string(PROC)<<"\n";
		}
		remove("pacientes.txt");
		rename("aux.txt","pacientes.txt");
		cout<<"Paciente borrado con éxito.\n";
		return true;
	}
	else //No existe
	{
		cout<<"ERROR. Ningún paciente con ese nombre.\n";
	}
	return false;
}

void Paciente::listar_pacientes()
{
	char nombre[50],sexo[10],domicilio[20],telefono[10],fechanacimiento[15], observaciones[100],fecha[10];
	char nombreaux[50],nombreaux2[50],fechaInicio[10],fechaFin[10],observacionesT[20],medicacion[30],diagnostico[50];
	
	ifstream fichPaciente("pacientes.txt");
	if(fichPaciente.fail())
	{
		cout<<"No se pudo abrir el fichero"<<endl;
		exit(-1);
	}
	

	while(fichPaciente.getline(nombre,50,','))
	{
		
		fichPaciente.getline(sexo,10,',');
		fichPaciente.getline(fechanacimiento,15,',');
		fichPaciente.getline(telefono,10,',');
		fichPaciente.getline(domicilio,20,'\n');
		

			ifstream fichTratamiento("tratamiento.txt");
		if(fichTratamiento.fail())
		{
			cout<<"Error al abrir el fichero del historial"<<endl;
			exit(-1);
		}
		while(!fichTratamiento.eof())
		{	
			fichTratamiento.getline(nombreaux2,50,',');
			fichTratamiento.getline(diagnostico,50,',');
			fichTratamiento.getline(medicacion,30,',');
			fichTratamiento.getline(fechaInicio,10,',');
			fichTratamiento.getline(fechaFin,10,',');
			fichTratamiento.getline(observacionesT,20,'\n');
			if(strcmp(nombre,nombreaux2)==0)
			{
				cout<<"-------------------------------"<<endl;
				cout<<"DATOS PERSONALES DEL PACIENTE:"<<endl;
				cout<<"Nombre: "<<string(nombre)<<endl;
				cout<<"Sexo: "<<string(sexo)<<endl;
				cout<<"Fecha nacimiento: "<<string(fechanacimiento)<<endl;
				cout<<"Telefono: "<<string(telefono)<<endl;
				cout<<"Domicilio: "<<string(domicilio)<<endl;
				cout<<"\nTRATAMIENTO DEL PACIENTE:"<<endl;
				cout<<"Diagnostico: "<<string(diagnostico)<<endl;
				cout<<"Medicacion: "<<string(medicacion)<<endl;
				cout<<"Fecha de inicio de la medicacion: "<<string(fechaInicio)<<endl;
				cout<<"Fecha fin de la medicacion: "<<string(fechaFin)<<endl;
				cout<<"observaciones: "<<string(observacionesT)<<endl;
			}

	
		}	
		fichTratamiento.close();
						
		ifstream fichHistorial("historial.txt");
		if(fichHistorial.fail())
		{
			cout<<"Error al abrir el fichero del historial"<<endl;
			exit(-1);
		}

		while(!fichHistorial.eof())
		{				fichHistorial.getline(nombreaux,50,',');
						fichHistorial.getline(observaciones,100,',');
						fichHistorial.getline(fecha,10,'\n');		

			if(strcmp(nombre,nombreaux)==0)
				{
						
						cout<<"\nHISTORIAL DEL PACIENTE:"<<endl;
						cout<<"Observaciones: "<<string(observaciones)<<endl;
						cout<<"Fecha: "<<string(fecha)<<endl;

				}

					
		}	
		fichHistorial.close();

	
		}
		fichPaciente.close();

}

bool Paciente::modificar_paciente(string nombrecompleto)
{
	char nombre[50],sexo[10],fechanaci[10],domicilio[20],telefono[10],procedencia[15];
	
	if(buscar_paciente(nombrecompleto)==false)
	{
		cout<<"ERROR, no se ha encontrado el paciente en la base de datos"<<endl;
		return false;
	}
	else
	{
		cout<<"Introduce los nuevos datos del paciente"<<endl;
		cout<<"SEXO: ";
		cin.ignore();
		getline(cin,sexo_);
		cout<<"FECHA NACIMIENTO: ";
		cin.ignore();
		getline(cin,fechanacimiento_);
		cout<<"DOMICILIO: ";
		cin.ignore();
		getline(cin,domicilio_);
		cout<<"TELEFONO:";
		cin>>telefono_;
		cout<<"PROCEDENCIA: ";
		cin.ignore();
		getline(cin,procedencia_);
		fstream viejo("pacientes.txt",ios::in);
		ofstream nuevo("aux.txt",ios::trunc);

		if(!nuevo||!viejo)
		{
			cout<<"ERROR,no se pudo abrir el fichero"<<endl;
			return false;
		}
		else
		{
			while(viejo.getline(nombre,50,','))
			{
				
				
				viejo.getline(sexo,10,',');
				viejo.getline(fechanaci,10,',');
				viejo.getline(telefono,10,',');
				viejo.getline(domicilio,10,',');
				viejo.getline(procedencia,15,'\n');

				if(string(nombre).compare(nombrecompleto)==0)
				{
					
					nuevo<< nombrecompleto<<", "<< sexo_<<", "<< fechanacimiento_<<", "<< telefono_<<", "<< domicilio_<<", "<< procedencia_<< "\n";
					
				}
				else
				{
					nuevo<< string(nombre)<<", "<< string(sexo)<<", "<< string(fechanaci)<<", "<< string(telefono)<<", "<< string(domicilio)<<", "<< string(procedencia)<<" \n";
				}
				
				
			}
			viejo.close();
			nuevo.close();
			remove("pacientes.txt");
			rename("aux.txt","pacientes.txt");


		}
	}
	cout<<"Paciente modificado"<<endl;
	return true;
}
