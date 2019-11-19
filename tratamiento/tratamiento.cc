#include <iostream>
#include <string>
#include <fstream>

void Tratamiento::anadir_Tratamiento(string nombre)
{
	fstream f("tratamientos.txt",ios::out|ios::app);
	f<<nombre<<","<<diagnostico_<<","<<medicacion_<<","<<fecha_inicio_<<","<<fecha_fin_<<","<<observaciones_<<endl;
	f.close();
}