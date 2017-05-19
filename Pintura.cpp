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
