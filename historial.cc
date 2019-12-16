#include <iostream>
#include "historial.h"
#include <string>
#include <fstream>
#include "paciente.h"

using namespace std;
Historial::Historial(string observaciones,string fecha)
{
	observaciones_=observaciones;
	fecha_=fecha;
	
}

bool Historial::anadir_historial(string nombreapellidos)
{
	if(buscar_paciente(nombreapellidos)==true)
	{
		fstream fich("historiales.txt",ios::in);
		if(!fich)
		{
			cout<<"ERROR,no se puedo añadir el historial del paciente\n"<<endl;
			return false;
		}
		else
		{

			fich.close();
			fstream fich("historiales.txt",ios::out|ios::app);
			fich<<nombreapellidos<<","<<observaciones_<<","<<fecha_<<endl;
			fich.close();
			cout<<"Historial del paciente añadido"<<endl;
		}
		return true;
	}
	else
	{
		cout<<"ERROR,no se ha encontrado el paciente en la base de datos"<<endl;

		
	}

}
