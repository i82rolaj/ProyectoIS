#ifndef PACIENTES_H
#define PACIENTES_H
#include <string>

using namespace std;

class Paciente{
private:
	string nombreapellidos_;
	string sexo_;
	string fechanacimiento_;
	string domicilio_;
	int telefono_;
	string procedencia_;
public:
	Paciente(string nombreapellidos,string sexo,string fechanacimiento,int telefono,string domicilio="",string procedencia="");
	bool anadir_paciente();
	bool borrar_paciente();
	bool modificar_paciente();
	void listar_pacientes();


};
bool buscar_paciente(string nombreapellidos);

#endif