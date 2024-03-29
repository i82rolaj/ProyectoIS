#include "paciente.h"
#include "historial.h"
#include "tratamiento.h"
#include "cita.h"
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main(){
	Paciente p("Aux","M","00/00/00",666666666);
	Tratamiento t(1,"aux","D","M","00/00/00","00/00/00","O");
	Historial h("M","00/00/00");
	Cita c;
	
	int opcion=0;
	while(opcion!=12)
	{
		cout<<"Elige una opción:\n";
		cout<<"1. Añadir paciente.\n";
		cout<<"2. Borrar paciente.\n";
		cout<<"3. Añadir tratamiento.\n";
		cout<<"4. Modificar tratamiento.\n";
		cout<<"5. Añadir historial.\n";
		cout<<"6. Mostrar lista pacientes.\n";
		cout<<"7. Anadir cita.\n";
		cout<<"8. Citas de hoy.\n";
		cout<<"9. Modificar paciente.\n";
		cout<<"10. Borrar cita.\n";
		cout<<"11. Mostrar cita paciente.\n";
		cout<<"12. Salir.\n";

		cin>>opcion;
		switch(opcion)
		{
			case 1:
			{
				//char nombreapellidos[100],sexo[1],fecha[10],domicilio[30],procedencia[30];
				int telefono;
				string nombreapellidos,sexo,fecha,domicilio,procedencia;
				
				cout<<"NOMBRE y APELLIDOS: ";
				cin.ignore();
				getline(cin,nombreapellidos);
				cout<<"\nSEXO: ";
				cin>>sexo;
				cout<<"\nFECHA: ";
				cin.ignore();
				getline(cin,fecha);
				cout<<"\nTELEFONO: ";
				cin>>telefono;
				cout<<"\nDOMICILIO: ";
				cin.ignore();
				getline(cin,domicilio);
				cout<<"\nPROCEDENCIA: ";
				cin>>procedencia;
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

			case 3:
			{
				string nombrepaciente_t,diagnostico,medicacion,fecha_inicio,fecha_fin,observaciones;
				int en_curso;
				cout<<"NOMBRE y APELLIDOS: ";
				cin.ignore();
				getline(cin,nombrepaciente_t);
				if(buscar_paciente(nombrepaciente_t)==false)
				{
					cout<<"ERROR, el paciente no está en la base de datos."<<endl;
					break;
				}
				cout<<"EN CURSO (1) O CERRADO(0): ";
				cin>>en_curso;
				cout<<"DIAGNOSTICO: ";
				cin>>diagnostico;
				cout<<"MEDICACION: ";
				cin.ignore();
				cin>>medicacion;
				cout<<"FECHA INICIO: ";
				cin.ignore();
				getline(cin,fecha_inicio);
				cout<<"FECHA FIN: ";
				cin>>fecha_fin;
				cout<<"OBSERVACIONES: ";
				cin.ignore();
				getline(cin,observaciones);

				Tratamiento t1(en_curso,nombrepaciente_t,diagnostico,medicacion,fecha_inicio,fecha_fin,observaciones);
				t1.anadir_tratamiento();
			}
			break;

			case 4:
			{
				string tacmod;
				cout<<"NOMBRE: ";
				cin.ignore();
				getline(cin, tacmod);
				t.modificar_tratamiento(tacmod);
			}
			break;

			case 5:
			{
				string nombre, observaciones, fecha;
				cout<<"NOMBRE y APELLIDOS: ";
				cin.ignore();
				getline(cin,nombre);
				cout<<"OBSERVACIONES: ";
				
				getline(cin,observaciones);
				cout<<"FECHA: ";
				cin>>fecha;
				
				Historial h1(observaciones,fecha);
				h1.anadir_historial(nombre);
			}
			break;

			case 6:
				p.listar_pacientes();
			break;
				
			case 7:
			{
				int dia,hora;
				string nombrec;
				cout<<"DIA: ";
				cin>>dia;
				cout<<"\nHORA: ";
				cin>>hora;
				cout<<"\nPACIENTE A ASIGNAR: ";
				cin.ignore();
				getline(cin,nombrec);
				
				if (c.anadir_cita(dia,hora,nombrec)==false)
					cout<<"ERROR. No se pudo completar la acción.\n";
			}
			break;
			
			case 8:
				c.listar_citas_hoy();
			break;
			
			case 9:
			{
				string nombrecompleto;
				cout<<"Introduce el nombre del paciente a modificar\n";
				cin.ignore();
				getline(cin,nombrecompleto);
				p.modificar_paciente(nombrecompleto);		
			}
			break;
				
			case 10:
			{
				string nombrecompleto;
				cout<<"Introduce el nombre del paciente para borrar su cita\n";
				cin.ignore();
				getline(cin,nombrecompleto);
				if(c.borrar_cita(nombrecompleto)==false)
				{
					cout<<"ERROR. No se pudo borrar la cita.\n";
				}
			}
			break;
			
			case 11:
			{
				string nombrecompleto;
				cout<<"Introduce el nombre del paciente para buscar su cita\n";
				cin.ignore();
				getline(cin,nombrecompleto);
				if(c.mostrar_cita_paciente(nombrecompleto)==false)
				{
					cout<<"ERROR,No tiene ninguna cita o no se encuentra el paciente registrado\n";
				}				
			}
			break;
		}
	}
	cout<<"¡Hasta la proxima!\n";	
}
