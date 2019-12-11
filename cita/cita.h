#ifndef CITA_H
#define CITA_H
#include <string>

using namespace std;

class Cita{
private:
	string nombrepaciente_c_;
	string fecha_;
	int hora_;
	string motivo_consulta_;
public:
	Cita(string nombrepaciente_c, string fecha, int hora, string motivo_consulta);
	bool anadir_cita();
	bool borrar_cita(string nombrecompleto);
	bool modificar_cita(strig nombrecompleto);
	bool mostrar_cita_paciente(string nombrecompleto);
	bool listar_citas_hoy(string nombrecompleto);
}

#endif
