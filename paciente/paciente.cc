#include "paciente.h"
#include <fstream>
#include <string>
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
