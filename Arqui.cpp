// DisenoArquitectonico.cpp

#include "Arqui.h"

Arqui::Arqui() : Obra()
{
	terreno = "";
}

Arqui::Arqui(string id, string nombre, string autor, string fechaIngreso, string terreno) : Obra(id, nombre, autor, fechaIngreso)
{
	this -> terreno = terreno;
}

string Arqui::getID()
{
	return id;
}
string Arqui::getNombre()
{
	return nombre;
}
string Arqui::getAutor()
{
	return autor;
}
string Arqui::getFechaIngreso()
{
	return fechaIngreso;
}
