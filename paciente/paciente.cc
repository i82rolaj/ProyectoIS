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

bool Paciente::anadir_paciente(){
	fstream f("pacientes.txt",ios::in);
	if (!f)
	{
		cout<<"ERROR. No se pudo añadir el paciente.\n";
		return false;
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
