#include <fstream>
#include <string>
#include <iostream>
#include "tratamiento.h"
#include "paciente.h"

using namespace std;

Tratamiento::Tratamiento(string nombrepaciente_t,string diagnostico,string medicacion,string fecha_inicio,string fecha_fin,string observaciones)
{
	nombrepaciente_t_=nombrepaciente_t;
	diagnostico_=diagnostico;
	medicacion_=medicacion;
	fecha_inicio_=fecha_inicio;
	fecha_fin_=fecha_fin;
	observaciones_=observaciones;
}

bool Tratamiento::anadir_tratamiento()
{
	if(buscar_paciente(nombrepaciente_t_)==true)
	{
		fstream f("tratamientos.txt",ios::in);
		if(!f)
		{
			cout<<"ERROR, no se pudo añadir el tratamiento\n";
			return false;
		}
		else
		{
			f.close();
			fstream f("tratamientos.txt",ios::out|ios::app);
			f<<nombrepaciente_t_<<","<<diagnostico_<<","<<medicacion_<<","<<fecha_inicio_<<","<<fecha_fin_<<","<<observaciones_<<endl;
			f.close();
			cout<<"Tratamiento del paciente añadido"<<endl;
		}
		return true;
	}
	else
	{
	cout<<"ERROR,no se ha encontrado el paciente en la base de datos"<<endl;
	}
}