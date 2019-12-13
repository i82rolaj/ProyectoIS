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
