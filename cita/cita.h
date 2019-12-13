#ifndef CITA_H
#define CITA_H
#include <cstring>
#include <string>

using namespace std;

class Cita{
private:
	string nombrepaciente_c_;
	string fecha_;
	int hora_;
	string motivo_consulta_;
public:
	Cita(){};
	bool anadir_cita(int dia,int hora,string paciente);
	bool borrar_cita(string nombrecompleto);
	bool modificar_cita(string nombrecompleto);
	bool mostrar_cita_paciente(string nombrecompleto);
	void listar_citas_hoy();
};

#endif
