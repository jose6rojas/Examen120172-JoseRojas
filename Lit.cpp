// Literatura.cpp

#include "Lit.h"

Lit::Lit() : Obra()
{
	genero = "";
	epoca = "";
}

Lit::Lit(string id, string nombre, string autor, string fechaIngreso, string genero, string epoca) : Obra(id, nombre, autor, fechaIngreso)
{
	this -> genero = genero;
	this -> epoca = epoca;
}
