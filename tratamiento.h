#ifndef TRATAMIENTOS_H
#define TRATAMIENTOS_H

#include <string>

using namespace std;

class Tratamiento{
private:
	int en_curso_;
	string nombrepaciente_t_;
	string diagnostico_;
	string medicacion_;
	string fecha_inicio_;
	string fecha_fin_;//formato: 01/01/1900
	string observaciones_;
public:
	Tratamiento(int en_curso,string nombrepaciente_t,string diagnostico,string medicacion,string fecha_inicio,string fecha_fin,string observaciones);
	bool anadir_tratamiento();
	bool modificar_tratamiento(string nombrep);
};

#endif
