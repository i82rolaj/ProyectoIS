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
			return true;
		
	}
	f.close();
	return false;
}

bool Paciente::anadir_paciente(){
	if (buscar_paciente(nombreapellidos_)==false)
	{
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
	else
	{
		cout<<"ERROR. Ese paciente ya existe.\n";
	
	}
}