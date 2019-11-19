#include <iostream>
#include "historial.h"
#include <string>
#include <fstream>
#include "paciente.h"

using namespace std;
Historial::Historial(string observaciones,string fecha,string alergias,string operaciones_realizadas,bool problemas_respiratorios,bool problemas_cardiacos)
{
	observaciones_=observaciones;
	fecha_=fecha;
	alergias_=alergias;
	operaciones_realizadas_=operaciones_realizadas;
	problemas_respiratorios_=problemas_respiratorios;
	problemas_cardiacos_=problemas_cardiacos_;

}

bool Historial::anadir_historial(string nombreapellidos)
{
	if(buscar_paciente(nombreapellidos)==true)
	{
		fstream fich("historial.txt",ios::in);
		if(!fich)
		{
			cout<<"ERROR,no se puedo añadir el historial del paciente\n"<<endl;
			return false;
		}
		else
		{

			fich.close();
			fstream fich("historial.txt",ios::out|ios::app);
			fich<<nombreapellidos<<","<<observaciones_<<","<<fecha_<<","<<operaciones_realizadas_<<","<<problemas_respiratorios_<<","<<problemas_cardiacos_<<endl;
			fich.close();
			cout<<"Historial del paciente añadido"<<endl;
		}
		return true;
	}
	else
	{
		cout<<"ERROR,no se ha encontrado el paciente en la base de datos"<<endl;

		exit(EXIT_FAILURE);
	}

}