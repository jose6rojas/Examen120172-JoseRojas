// Escultura.h

#include <string>
#include "Obra.h"

using namespace std;

#ifndef ESCULTURA_H
#define ESCULTURA_H

class Escultura : public Obra
{
	private:
		double peso;
		string material;
	public:
		Escultura();
		Escultura(string, string, string, string, double, string);
		// id, nombre, autor, fechaIngreso, peso, material
};

#endif
