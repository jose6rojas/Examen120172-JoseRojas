// DisenoArquitectonico.h

#include <string>
#include "Obra.h"

using namespace std;

#ifndef ARQUI_H
#define ARQUI_H

class Arqui : public Obra
{
	private:
		string terreno; // tipo en el que esta disenado
	public:
		Arqui();
		Arqui(string, string, string, string, string);
		// id, nombre, autor, fechaIngreso, terreno
		
		string getID();
                string getNombre();
                string getAutor();
                string getFechaIngreso();
};

#endif
