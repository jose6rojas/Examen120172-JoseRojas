// Obra.h

#include <string>

using namespace std;

#ifndef OBRA_H
#define OBRA_H

class Obra
{
	protected:
		string id;
		string nombre;
		string autor; // o artista
		string fechaIngreso;
	public:
		Obra();
		Obra(string, string, string, string);
		// id, nombre, autor, fechaIngreso
};

#endif
