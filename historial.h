#ifndef HISTORIAL_H
#define HISTORIAL_H

#include <string>
using namespace std;
class Historial
{
	private:
		
		string observaciones_;
		string fecha_;
		
	public:
		Historial(string observaciones="",string fecha="");
		bool anadir_historial(string nombrecompleto);
	
				
};

#endif