// viernes, 19 de mayo de 2017
// Examen I - Programacion III

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <ctime>
#include <stdlib.h>
// #include <type_info>
#include "Obra.h"
#include "Lit.h"
#include "Escultura.h"
#include "Pintura.h"
#include "Arqui.h"

using namespace std;

int main()
{
	vector<Obra*> principal;
	vector<Obra*> secundario;
	
	int opcion = 0;
	while(opcion != 6)
	{
		cout << "Menu Principal" << endl;
		cout << "1. Agregar" << endl;
		cout << "2. Elimnar" << endl;
		cout << "3. Transferir" << endl;
		cout << "4. Reporte" << endl;
		cout << "5. Busqueda" << endl;
		cout << "6. Salir" << endl;
		cout << "Escoja una opcion: ";
		cin >> opcion;
		if(opcion == 1) // Agregar
		{
			string id, nombre, autor, fechaIngreso;
			
			// id
			string ss = "";
			int random;
			// if(principal.empty())
			// {
				for(int i = 0; i < 5; i++)
				{
					random = rand()%16;
					if(random == 0)
						ss += "0";
					if(random == 1)
						ss += "1";
					if(random == 2)
						ss += "2";
					if(random == 3)
						ss += "3";
					if(random == 4)
						ss += "4";
					if(random == 5)
						ss += "5";
					if(random == 6)
						ss += "6";
					if(random == 7)
						ss += "7";
					if(random == 8)
						ss += "8";
					if(random == 9)
						ss += "9";
					if(random == 10) // A
						ss += "A";
					if(random == 11) // B
						ss += "B";
					if(random == 12) // C
						ss += "C";
					if(random == 13) // D
						ss += "D";
					if(random == 14) // E
						ss += "E";
					if(random == 15) // F
						ss += "F";
				}
				id = ss;				
			// }
			// ============
			/* else // !principal.empty()
			{
				bool valido = false;
				
                                for(int i = 0; i < 5; i++)
                                {
                                	srand(time(0));
                                        int random;
					random = rand()% 16;
                                        if(random >= 10)
                                        {
                                                if(random == 10) // A
                                                        ss << 'A';
                                                else if(random == 11) // B
                                                        ss << 'B';
                                                else if(random == 12) // C
                                                        ss << 'C';
                                                else if(random == 13) // D
                                                        ss << 'D';
                                                else if(random == 14) // E
                                                        ss << 'E';
                                                else if(random == 15) // F
                                                        ss << 'F';
                                        }
                                        else
                                                ss << random;
                                }
				id = ss.str();
				
				// Revisa
				for(int i = 0; i < principal.size(); i++)
				{
					if(principal[i] -> getID() == id)
						valido = true;
				}
				
				while(valido == false)
				{
					stringstream ss1;
					for(int i = 0; i < 5; i++)
                                	{
                                        	srand(time(0));
                                        	int random;
						random = rand()% 16;
                                        	if(random >= 10)
                                        	{
                                                	if(random == 10) // A
                                                        	ss1 << 'A';
                                                	else if(random == 11) // B
                                                        	ss1 << 'B';
                                                	else if(random == 12) // C
                                                        	ss1 << 'C';
                                                	else if(random == 13) // D
                                                        	ss1 << 'D';
                                                	else if(random == 14) // E
                                                        	ss1 << 'E';
                                                	else if(random == 15) // F
                                                        	ss1 << 'F';
                                        	}
                                        else
                                                ss1 << random;
                                	}
                                	id = ss1.str();
					
					// Revisa
					for(int i = 0; i < principal.size(); i++)
                                	{
                                        	if(principal[i] -> getID() == id)
                                                	valido = true;
                                	}
				}
			} */
			cout << id << endl;
			
			// id (2)
			/* char digitos[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
			if(principal.empty())
			{
			}
			else
			{
			} */
			
			// nombre
			cout << endl << "Ingrese el nombre: ";
			cin >> nombre;
			// autor
			cout << "Ingrese el autor: ";
			cin >> autor;
			// fechaIngreso
			cout << "Ingrese la fecha de ingreso (MM/dd/YY): ";
			cin >> fechaIngreso;
			
			int op1 = 0;
			cout << endl << "Tipo" << endl;
			cout << "1. Literatura" << endl;
			cout << "2. Escultura" << endl;
			cout << "3. Pintura" << endl;
			cout << "4. Diseno Arquitectonico" << endl;
			cout << "Escoja una opcion: ";
			cin >> op1;
			if(op1 == 1) // Literatura
			{
				string genero, epoca;
				
				// genero
				cout << endl << "Ingrese el genero: ";
				cin >> genero;
				// epoca
				cout << "Ingrese la epoca: ";
				cin >> epoca;
				
				Lit* L = new Lit(id, nombre, autor, fechaIngreso, genero, epoca);
				principal.push_back(L);
				cout << endl << "Obra de Literatura agregada correctamente" << endl << endl;
			}
			else if(op1 == 2) // Escultura
			{
				double peso;
				string material;

                                // peso
                                cout << endl << "Ingrese el peso: ";
                                cin >> peso;
                                // material
                                cout << "Ingrese el material: ";
                                cin >> material;

                                Escultura* E = new Escultura(id, nombre, autor, fechaIngreso, peso, material);
                                principal.push_back(E);
                                cout << endl << "Escultura agregada correctamente" << endl << endl;
			}
			else if(op1 == 3) // Pintura
			{
				string material, tecnica;

                                // material
                                cout << endl << "Ingrese el material: ";
                                cin >> material;
                                // tecnica
                                cout << "Ingrese la tecnica: ";
                                cin >> tecnica;

                                Pintura* P = new Pintura(id, nombre, autor, fechaIngreso, material, tecnica);
                                principal.push_back(P);
                                cout << endl << "Pintura agregada correctamente" << endl << endl;
			}
			else if(op1 == 4) // Diseno Arquitectonico
			{
				string terreno;

                                // terreno
                                cout << endl << "Ingrese el terreno: ";
                                cin >> terreno;

                                Arqui* A = new Arqui(id, nombre, autor, fechaIngreso, terreno);
                                principal.push_back(A);
                                cout << endl << "Obra de Arquitectura agregada correctamente" << endl;
			}
			else
			{
				cout << "Debe escoger una opcion valida.";
				break;
			}
		}
		else if(opcion == 2) // Eliminar
		{
			int op2;
			cout << "\nIngrese la posicion de la Obra que desea eliminar del museo principal: ";
			cin >> op2;
			if(op2 < 0 || op2 >= principal.size())
			{
				cout << endl << "La posicion que ingreso no es valida." << endl << endl;
			}
			else
			{
				principal.erase(principal.begin() + (op2 - 1));
				cout << endl << "La Obra fue borrada correctamente" << endl << endl;
			}
		}
		else if(opcion == 3) // Transferir
		{
			int op3;
			cout << "\nIngrese la posicion de la Obra que desea transferir: ";
			cin >> op3;
			if(op3 < 0 || op3 >= principal.size())
			{
				cout << endl << "La posicion que ingreso no es valida." << endl << endl;
			}
			else
			{
				Obra* O = principal[op3];
				secundario.push_back(O);
				principal.erase(principal.begin() + (op3 - 1));
				cout << endl << "La Obra fue transferida correctamente." << endl << endl;
			}
		}
		else if(opcion == 4) // Reporte
		{
			cout << endl << "Obras Existentes" << endl;
			for(int i = 0; i < principal.size(); i++)
			{
				cout << i << ". " << "ID: " << principal[i] -> getID() << endl
					<< "Nombre: " << principal[i] -> getNombre() << endl
					<< "Autor: " << principal[i] -> getAutor() << endl
					<< "Fecha de Ingreso: " << principal[i] -> getFechaIngreso() << endl;
			}
			
			cout << endl << "Obras Transferidas" << endl;
			for(int i = 0; i < secundario.size(); i++)
                        {
                                cout << i << ". " << "ID: " << secundario[i] -> getID() << endl
                                        << "Nombre: " << secundario[i] -> getNombre() << endl
                                        << "Autor: " << secundario[i] -> getAutor() << endl
                                        << "Fecha de Ingreso: " << secundario[i] -> getFechaIngreso() << endl;
                        }
			cout << endl;
		}
		else if(opcion == 5) // Busqueda
		{
			string autor;
			cout << endl << "Ingrese el nombre del autor que desea buscar: ";
			cin >> autor;
			for(int i = 0; i < principal.size(); i++)
			{
				if(autor == principal[i] -> getAutor())
				{
					cout << i << ". " << "ID: " << principal[i] -> getID() << endl
                                        << "Nombre: " << principal[i] -> getNombre() << endl
                                        << "Autor: " << principal[i] -> getAutor() << endl
                                        << "Fecha de Ingreso: " << principal[i] -> getFechaIngreso() << endl;
				}
			}
			cout << endl;
		}
		else
		{
		}
	}
	
	// Limpia los vectores de Obra
	/* if(principal.empty() == false)
	{
		for(int i = 0; i < principal.size(); i++)
			delete principal[i];
		principal.clear();
	}
	if(secundario.empty() == false)
	{
		for(int i = 0; i < secundario.size(); i++)
			delete secundario[i];
		secundario.clear();
	} */
	
	return 0;
}
