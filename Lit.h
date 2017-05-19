// Literatura.h

#include <string>
#include "Obra.h"

using namespace std;

#ifndef LIT_H
#define LIT_H

class Lit : public Obra
{
	private:
		string genero;
		string epoca;
	public:
		Lit();
		Lit(string, string, string, string, string, string);
		// id, nombre, autor, fechaIngreso, genero, epoca
};

#endif
