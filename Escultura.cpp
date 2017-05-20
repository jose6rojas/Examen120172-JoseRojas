// Escultura.cpp

#include "Escultura.h"

Escultura::Escultura() : Obra()
{
	peso = 0.0;
	material = "";
}

Escultura::Escultura(string id, string nombre, string autor, string fechaIngreso, double peso, string material) : Obra(id, nombre, autor, fechaIngreso)
{
	this -> peso = peso;
	this -> material = material;
}

string Escultura::getID()
{
	return id;
}
string Escultura::getNombre()
{
	return nombre;
}
string Escultura::getAutor()
{
	return autor;
}
string Escultura::getFechaIngreso()
{
	return fechaIngreso;
}
