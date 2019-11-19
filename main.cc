#include "paciente.h"
#include "historial.h"
#include <iostream>
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
}