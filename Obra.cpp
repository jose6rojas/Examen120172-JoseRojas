// Obra.cpp

#include "Obra.h"

Obra::Obra()
{
	id = "";
	nombre = "";
	autor = "";
	fechaIngreso = "";
}

Obra::Obra(string id, string nombre, string autor, string fechaIngreso)
{
	this -> id = id;
	this -> nombre = nombre;
	this -> autor = autor;
	this -> fechaIngreso = fechaIngreso;
}
