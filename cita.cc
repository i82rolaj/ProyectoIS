#include "cita.h"
#include "paciente.h"
#include <string>
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdio>

bool Cita::anadir_cita(int dia,int hora,string paciente){
	//comprobación de paciente
	if (buscar_paciente(paciente)==false)
		return false;
	else
	{
		string fecha="dia"+to_string(dia);
		
		//dia y hora ocupados
		string diaocupado="";
		string horaocupado="";
		
		ifstream f("calendario.txt"); //abre fichero con lectura

		char DIA[30],H9[30],H10[30],H11[30],H12[30],H17[30],H18[30],H19[30];	
		while(f.getline(DIA,30,','))
		{
			f.getline(H9,30,',');
			f.getline(H10,30,',');
			f.getline(H11,30,',');
			f.getline(H12,30,',');
			f.getline(H17,30,',');
			f.getline(H18,30,',');
			f.getline(H19,30,'\n');
			
			switch(hora)
			{
			case 9:
				if (string(DIA).compare(fecha)==0 && string(H9).size()>2)
				{
					diaocupado=fecha;
					horaocupado=(string(H9));
					return false;
				}
			break;
			
			case 10:
				if (string(DIA).compare(fecha)==0 && string(H10).size()>2)
				{
					diaocupado=fecha;
					horaocupado=(string(H10));
					return false;
				}
			break;
			
			case 11:
				if (string(DIA).compare(fecha)==0 && string(H11).size()>2)
				{
					diaocupado=fecha;
					horaocupado=(string(H11));				
					return false;
				}
			break;
			
			case 12:
				if (string(DIA).compare(fecha)==0 && string(H12).size()>2)
				{
					diaocupado=fecha;
					horaocupado=(string(H12));				
					return false;
				}
			break;
			
			case 17:
				if (string(DIA).compare(fecha)==0 && string(H17).size()>2)
				{
					diaocupado=fecha;
					horaocupado=(string(H17));	
					return false;
				}
			break;
			
			case 18:
				if (string(DIA).compare(fecha)==0 && string(H18).size()>2)
				{
					diaocupado=fecha;
					horaocupado=(string(H18));				
					return false;
				}
			break;
			
			case 19:
				if (string(DIA).compare(fecha)==0 && string(H19).size()>2)
				{
					diaocupado=fecha;
					horaocupado=(string(H19));				
					return false;
				}
			break;
			}
		}
		f.close();
		
		ifstream viejo("calendario.txt");
		ofstream nuevo("aux.txt");
		while(viejo.getline(DIA,30,','))
		{
			viejo.getline(H9,30,',');
			viejo.getline(H10,30,',');
			viejo.getline(H11,30,',');
			viejo.getline(H12,30,',');
			viejo.getline(H17,30,',');
			viejo.getline(H18,30,',');
			viejo.getline(H19,30,'\n');

			if (string(DIA).compare(fecha)==0)
			{
				switch(hora)
				{
				case 9:
						nuevo<<string(DIA)<<","<<string(H9)+paciente<<","<<string(H10)<<","<<string(H11)<<","<<string(H12)<<","<<string(H17)<<","<<string(H18)<<","<<string(H19)<<"\n";
						cout<<"EXITO. Cita reservada.\n";
					
				break;
				
				case 10:

					{
						nuevo<<string(DIA)<<","<<string(H9)<<","<<string(H10)+paciente<<","<<string(H11)<<","<<string(H12)<<","<<string(H17)<<","<<string(H18)<<","<<string(H19)<<"\n";
						cout<<"EXITO. Cita reservada.\n";
					}
				break;
				
				case 11:

					{
						nuevo<<string(DIA)<<","<<string(H9)<<","<<string(H10)<<","<<string(H11)+paciente<<","<<string(H12)<<","<<string(H17)<<","<<string(H18)<<","<<string(H19)<<"\n";
						cout<<"EXITO. Cita reservada.\n";
					}
				break;
				
				case 12:

					{
						nuevo<<string(DIA)<<","<<string(H9)<<","<<string(H10)<<","<<string(H11)<<","<<string(H12)+paciente<<","<<string(H17)<<","<<string(H18)<<","<<string(H19)<<"\n";
						cout<<"EXITO. Cita reservada.\n";
					}
				break;
				
				case 17:

					{
						nuevo<<string(DIA)<<","<<string(H9)<<","<<string(H10)<<","<<string(H11)<<","<<string(H12)<<","<<string(H17)+paciente<<","<<string(H18)<<","<<string(H19)<<"\n";
						cout<<"EXITO. Cita reservada.\n";
					}
				break;
				
				case 18:

					{
						nuevo<<string(DIA)<<","<<string(H9)<<","<<string(H10)<<","<<string(H11)<<","<<string(H12)<<","<<string(H17)<<","<<string(H18)+paciente<<","<<string(H19)<<"\n";
						cout<<"EXITO. Cita reservada.\n";
					}
				break;
				
				case 19:

					{
						nuevo<<string(DIA)<<","<<string(H9)<<","<<string(H10)<<","<<string(H11)<<","<<string(H12)<<","<<string(H17)<<","<<string(H18)<<","<<string(H19)+paciente<<"\n";
						cout<<"EXITO. Cita reservada.\n";
					}
				break;
				}
			}
			else
				nuevo<<string(DIA)<<","<<string(H9)<<","<<string(H10)<<","<<string(H11)<<","<<string(H12)<<","<<string(H17)<<","<<string(H18)<<","<<string(H19)<<"\n";
		}
		
		nuevo.close();
		viejo.close();
		remove("calendario.txt");
		rename("aux.txt","calendario.txt");
		return true;
	}

}

void Cita::listar_citas_hoy(){
	time_t tiempo = time(0);
    struct tm *tlocal = localtime(&tiempo);
    char output[128];
    strftime(output,128,"%d",tlocal);
    
    string diaactual="dia"+string(output);
    
	ifstream f("calendario.txt");
	char DIA[30],H9[30],H10[30],H11[30],H12[30],H17[30],H18[30],H19[30];	
	while(f.getline(DIA,30,','))
	{
		f.getline(H9,30,',');
		f.getline(H10,30,',');
		f.getline(H11,30,',');
		f.getline(H12,30,',');
		f.getline(H17,30,',');
		f.getline(H18,30,',');
		f.getline(H19,30,'\n');
	
		if (string(DIA).compare(diaactual)==0)
		{
			cout<<"----------------------------\nCITAS DE HOY\n---------------------------\n";
			cout<<"A las "<<string(H9)<<"\n";
			cout<<"A las "<<string(H10)<<"\n"; 
			cout<<"A las "<<string(H11)<<"\n"; 
			cout<<"A las "<<string(H12)<<"\n"; 
			cout<<"A las "<<string(H17)<<"\n"; 
			cout<<"A las "<<string(H18)<<"\n"; 			
			cout<<"A las "<<string(H19)<<"\n"; 
		}
	} 
}

bool Cita::borrar_cita(string nombrecompleto)
{
	if(buscar_paciente(nombrecompleto)==true)
	{
		ofstream nuevo("aux.txt",ios::trunc);
		fstream viejo("calendario.txt");
		char DIA[30],H9[30],H10[30],H11[30],H12[30],H17[30],H18[30],H19[30];
		string nh9,nh10,nh11,nh12,nh17,nh18,nh19;
		while(viejo.getline(DIA,30,','))
		{
			viejo.getline(H9,30,',');
			viejo.getline(H10,30,',');
			viejo.getline(H11,30,',');
			viejo.getline(H12,30,',');
			viejo.getline(H17,30,',');
			viejo.getline(H18,30,',');
			viejo.getline(H19,30,'\n');
			nuevo<<string(DIA)<<",";
			nh9=string(H9);
			nh10=string(H10);
			nh11=string(H11);
			nh12=string(H12);
			nh17=string(H17);
			nh18=string(H18);
			nh19=string(H19);
			string hora;
			if(nh9.find(nombrecompleto)==string::npos)
			{
				nuevo<<string(H9)<<",";
			}
			else
			{
				hora=nh9.substr(0,1);
				nuevo<<hora<<",";
			}
			if(nh10.find(nombrecompleto)==string::npos)
			{
				nuevo<<string(H10)<<",";
			}
			else
			{
				hora=nh10.substr(0,2);
				nuevo<<hora<<",";
			}
			if(nh11.find(nombrecompleto)==string::npos)
			{
				nuevo<<string(H11)<<",";
			}
			else
			{
				hora=nh11.substr(0,2);
				nuevo<<hora<<",";
			}
			if(nh12.find(nombrecompleto)==string::npos)
			{
				nuevo<<string(H12)<<",";
			}
			else
			{
				hora=nh12.substr(0,2);
				nuevo<<hora<<",";
			}
			if(nh17.find(nombrecompleto)==string::npos)
			{
				nuevo<<string(H17)<<",";
			}
			else
			{
				hora=nh17.substr(0,2);
				nuevo<<hora<<",";
			}
			if(nh18.find(nombrecompleto)==string::npos)
			{
				nuevo<<string(H18)<<",";
			}
			else
			{
				hora=nh18.substr(0,2);
				nuevo<<hora<<",";
			}
			if(nh19.find(nombrecompleto)==string::npos)
			{
				nuevo<<string(H19)<<"\n";
			}
			else
			{
				hora=nh19.substr(0,2);
				nuevo<<hora<<"\n";
			}
		}
		remove("calendario.txt");
		rename("aux.txt","calendario.txt");
		cout<<"Cita borrada con éxito.\n";
		return true;
	}
	else
	{
		cout<<"ERROR. Ningún paciente con ese nombre.\n";
		return false;
	}
}

bool Cita::mostrar_cita_paciente(string nombrecompleto)
{
	if(buscar_paciente(nombrecompleto)==true)
	{
		char DIA[30],H9[30],H10[30],H11[30],H12[30],H17[30],H18[30],H19[30]; //variables para leer fichero
	string nh9,nh10,nh11,nh12,nh17,nh18,nh19; //variables para guardar los char
	int pos9,pos10,pos11,pos12,pos17,pos18,pos19; //variables para la posicion donde encuentra el nombre
	string h9,h10,h11,h12,h17,h18,h19; //variables para hora
	string nombre9,nombre10,nombre11,nombre12,nombre17,nombre18,nombre19; //variables para nombre
	string dia;
	ifstream fichero("calendario.txt");
		if(!fichero)
		{
			cout<<"ERROR,no se ha podido abrir el fichero"<<endl;
			return 0;
		}
		while(fichero.getline(DIA,30,','))
		{
			fichero.getline(H9,30,',');
			fichero.getline(H10,30,',');
			fichero.getline(H11,30,',');
			fichero.getline(H12,30,',');
			fichero.getline(H17,30,',');
			fichero.getline(H18,30,',');
			fichero.getline(H19,30,'\n');

			dia=string(DIA);
			nh9=string(H9);
			nh10=string(H10);
			nh11=string(H11);
			nh12=string(H12);
			nh17=string(H17);
			nh18=string(H18);
			nh19=string(H19);
			if((pos9=nh9.find(nombrecompleto))!=-1)
			{
				 h9=nh9.substr(0,2);
				 nombre9=nh9.substr(pos9,',');
				cout<<"\n"<<dia;
				cout<<"\nHora:"<<h9;
				cout<<"\nPaciente: "<<nombre9;
			}
			if((pos10=nh10.find(nombrecompleto))!=-1)
			{
				 h10=nh10.substr(0,2);
				string nombre10=nh10.substr(pos10,',');
				cout<<"\n"<<dia;
				cout<<"\nHora:"<<h10;
				cout<<"\nPaciente: "<<nombre10;
			}
			if((pos11=nh11.find(nombrecompleto))!=-1)
			{
				 h11=nh11.substr(0,2);
				 nombre11=nh11.substr(pos11-1,',');
				cout<<"\n"<<dia;
				cout<<"\nHora:"<<h11;
				cout<<"\nPaciente: "<<nombre11;
			}
			if((pos12=nh12.find(nombrecompleto))!=-1)
			{
				 h12=nh12.substr(0,2);
				 nombre12=nh12.substr(pos12,',');
				cout<<"\n"<<dia;
				cout<<"\nHora:"<<h12;
				cout<<"\nPaciente: "<<nombre12;

			}
			if((pos17=nh17.find(nombrecompleto))!=-1)
			{
				 h17=nh17.substr(0,2);
				 nombre17=nh17.substr(pos17,',');
				cout<<"\n"<<dia;
				cout<<"\nHora:"<<h17;
				cout<<"\nPaciente: "<<nombre17;
				
			}
			if((pos18=nh18.find(nombrecompleto))!=-1)
			{
				 h18=nh18.substr(0,2);
				 nombre18=nh18.substr(pos18,',');
				cout<<"\n"<<dia;
				cout<<"\nHora:"<<h18;
				cout<<"\nPaciente: "<<nombre18;
			
			}
			if((pos19=nh19.find(nombrecompleto))!=-1)
			{
				 h19=nh19.substr(0,2);
				nombre19=nh19.substr(pos19,',');
				cout<<"\n"<<dia;
				cout<<"\nHora:"<<h19;
				cout<<"\nPaciente: "<<nombre19;
				

			}


				
			 	
	 	}
	 	return true;
	 	fichero.close();
	}
	else
	{
		return false;
	}
}