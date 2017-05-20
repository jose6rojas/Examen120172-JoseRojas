// Literatura.h

#include <string>
#include "Obra.h"

#ifndef LIT_H
#define LIT_H

using namespace std;

class Lit : public Obra
{
        private:
                string genero;
                string epoca;
        public:
                Lit();
                Lit(string, string, string, string, string, string);
                // id, nombre, autor, fechaIngreso, genero, epoca

                string getID();
                string getNombre();
                string getAutor();
                string getFechaIngreso();
};

#endif
