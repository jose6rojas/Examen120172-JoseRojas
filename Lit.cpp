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

string Lit::getID()
{
	return id;
}
string Lit::getNombre()
{
	return nombre;
}
string Lit::getAutor()
{
	return autor;
}
string Lit::getFechaIngreso()
{
	return fechaIngreso;
}
