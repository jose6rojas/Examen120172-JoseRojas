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
