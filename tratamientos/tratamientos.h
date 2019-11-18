#ifndef TRATAMIENTOS_H
#define TRATAMIENTOS_H

#include <string>

class Tratamiento{
private:
	Paciente paciente_;
	string diagnostico_;
	string medicacion_;
	string fecha_inicio_;
	string fecha_fin_;//formato: 01/01/1900
	string observaciones_;
public:
	inline Tratamiento(const Paciente &p,string diagnostico,string medicacion,string fecha_inicio="",string fecha_fin="",string observaciones=""): paciente_(p){
		diagnotico_=diagnostico;
		medicacion_=medicacion;
		fecha_inicio_=fecha_inicio;
		fecha_fin_=fecha_fin;
		observaciones_=observaciones;
	}
	void anadirTratamiento();
}
