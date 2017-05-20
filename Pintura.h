// Pintura.h

#include <string>
#include "Obra.h"

using namespace std;

#ifndef PINTURA_H
#define PINTURA_H

class Pintura : public Obra
{
	private:
		string material; // del lienzo
		string tecnica; // que se utilizo
	public:
		Pintura();
		Pintura(string, string, string, string, string, string);
		// id, nombre, autor, fechaIngreso, material, tecnica
		
		string getID();
                string getNombre();
                string getAutor();
                string getFechaIngreso();
};

#endif
