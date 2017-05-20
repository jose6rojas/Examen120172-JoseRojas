// Pintura.cpp

#include "Pintura.h"

Pintura::Pintura() : Obra()
{
	material = "";
	tecnica = "";
}

Pintura::Pintura(string id, string nombre, string autor, string fechaIngreso, string material, string tecnica) : Obra(id, nombre, autor, fechaIngreso)
{
	this -> material = material;
	this -> tecnica = tecnica;
}

string Pintura::getID()
{
	return id;
}
string Pintura::getNombre()
{
	return nombre;
}
string Pintura::getAutor()
{
	return autor;
}
string Pintura::getFechaIngreso()
{
	return fechaIngreso;
}
