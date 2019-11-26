#include "paciente.h"
#include "historial.h"
#include "tratamiento.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	Paciente p("Aux","M","00/00/00",666666666);
	
	int opcion=0;
	while(opcion!=3)
	{
		cout<<"Elige una opción:\n";
		cout<<"1. Añadir paciente.\n";
		cout<<"2. Borrar paciente.\n";
		cout<<"3. Salir\n";

		cin>>opcion;
		switch(opcion)
		{
			case 1:
			{
				string nombreapellidos,sexo,fecha,domicilio,procedencia;
				int telefono;
				
				cout<<"NOMBRE y APELLIDOS: ";
				cin.ignore();
				getline(cin,nombreapellidos);
				cout<<"\nSEXO: ";
				cin>>sexo;
				cout<<"\nFECHA: ";
				cin>>fecha;
				cout<<"\nTELEFONO: ";
				cin>>telefono;
				cout<<"\nDOMICILIO: ";
				cin.ignore();
				getline(cin,domicilio);
				cout<<"\nPROCEDENCIA: ";
				cin.ignore();
				getline(cin,procedencia);
				cout<<"\n";
				
				Paciente p1(nombreapellidos,sexo,fecha,telefono,domicilio,procedencia);
				p1.anadir_paciente();
			}
			break;

			case 2:
			{
				string pacbor;
				cout<<"\nNOMBRE: ";
				cin.ignore();
				getline(cin,pacbor);
				p.borrar_paciente(pacbor);
			}
			break;
		}
	}	
}
