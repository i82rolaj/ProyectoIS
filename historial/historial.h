#ifndef HISTORIAL_H
#define HISTORIAL_H

#include <string>
using namespace std;
class Historial
{
	private:
		
		string observaciones_;
		string fecha_;
		string alergias_;
		string operaciones_realizadas_;
		bool problemas_respiratorios_;
		bool problemas_cardiacos_;

	public:
		Historial(string observaciones,string fecha, string alergias="",string operaciones_realizadas="",bool problemas_respiratorios="",bool problemas_cardiacos="");
		bool anadir_historial(string nombrecompleto);
	
				
};

#endif