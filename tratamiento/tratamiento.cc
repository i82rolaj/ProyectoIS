#include <fstream>
#include <string>
#include <cstring>
#include <iostream>
#include <sstream>
#include "tratamiento.h"
#include "paciente.h"

using namespace std;

Tratamiento::Tratamiento(int en_curso,string nombrepaciente_t,string diagnostico,string medicacion,string fecha_inicio,string fecha_fin,string observaciones)
{
	en_curso_=en_curso;
	nombrepaciente_t_=nombrepaciente_t;
	diagnostico_=diagnostico;
	medicacion_=medicacion;
	fecha_inicio_=fecha_inicio;
	fecha_fin_=fecha_fin;
	observaciones_=observaciones;
}

bool Tratamiento::anadir_tratamiento()
{
		fstream f("tratamientos.txt",ios::in);
		if(!f)
		{
			cout<<"ERROR, no se pudo abrir el fichero\n";
			return false;
		}
		else
		{
			f.close();
			fstream f("tratamientos.txt",ios::out|ios::app);
			f<<en_curso_<<","<<nombrepaciente_t_<<","<<diagnostico_<<","<<medicacion_<<","<<fecha_inicio_<<","<<fecha_fin_<<","<<observaciones_<<endl;
			f.close();
			cout<<"Tratamiento del paciente añadido"<<endl;
		}
		return true;
}


bool Tratamiento::modificar_tratamiento(string nombrep)
{
	char NOMPT[30],DIAG[60],MED[30],INI[10],FIN[10],OBS[100],ENC[5];
	if(buscar_paciente(nombrep)==false)
	{
		cout<<"ERROR, no se ha encontrado el paciente en la base de datos"<<endl;
		return false;
	}
	else
	{
		cout<<"Introduce los nuevos datos del tratamiento"<<endl;
		cout<<"DIAGNOSTICO: ";
		cin.ignore();
		getline(cin,diagnostico_);
		cout<<"EN CURSO (1) O CERRADO(0): ";
		cin>>en_curso_;
		cout<<"MEDICACION: ";
		cin.ignore();
		getline(cin,medicacion_);
		cout<<"FECHA INICIO: ";
		cin>>fecha_inicio_;
		cout<<"FECHA FIN: ";
		cin>>fecha_fin_;
		cout<<"OBSERVACIONES: ";
		cin.ignore();
		getline(cin,observaciones_);
		fstream viejo("tratamientos.txt");
		ofstream nuevo("aux.txt");
		if(!nuevo||!viejo)
		{
			cout<<"ERROR, no se pudo abrir el fichero"<<endl;
			return false;
		}
		else
		{
			while(viejo.getline(ENC,5,','))
			{
				viejo.getline(NOMPT,30,',');
				viejo.getline(DIAG,60,',');
				viejo.getline(MED,30,',');
				viejo.getline(INI,10,',');
				viejo.getline(FIN,10,',');
				viejo.getline(OBS,100,'\n');
				if((atoi(ENC)==1)&&(string(NOMPT).compare(nombrep)==0))
				{				
					nuevo<<en_curso_<<","<<nombrep<<","<<diagnostico_<<","<<medicacion_<<","<<fecha_inicio_<<","<<fecha_fin_<<","<<observaciones_<<endl;
				}
				else
				{
				nuevo<<string(ENC)<<","<<string(NOMPT)<<","<<string(DIAG)<<","<<string(MED)<<","<<string(INI)<<","<<string(FIN)<<","<<string(OBS)<<"\n";
				}
			}
			viejo.close();
			nuevo.close();
			remove("tratamientos.txt");
			rename("aux.txt","tratamientos.txt");
		}
	}
	cout<<"Tratamiento modificado"<<endl;
	return true;
}