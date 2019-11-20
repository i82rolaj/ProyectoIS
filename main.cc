#include "paciente.h"
#include "historial.h"
#include "tratamiento.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	cout<<"Creando paciente..\n";
	//Paciente p1("Pepe Sanchez","Hombre","09/04/00",6666778);
	Paciente p2("Juanfran Romero","Hombre","01/12/98",627085701,"Ronda Ronda 34");
	//p1.anadir_paciente();
	p2.anadir_paciente();
	

	string nombre="Juanfran Romero";
	Historial h1("29/11/19","asma leve","operacion del corazon","false","false");
	h1.anadir_historial(nombre);
	
	cout<<"Creando tratamiento..\n";
	Tratamiento t1("Juanfran Romero","Muela con infeccion","Amoxicilina y Enantym","19/11/2019","5/12/2019","Quiste en una muela del paladar superior");
	t1.anadir_tratamiento();
}
