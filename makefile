main:	ExamenI.o Obra.o Lit.o Escultura.o Pintura.o Arqui.o
	g++ ExamenI.o Obra.o Lit.o Escultura.o Pintura.o Arqui.o -o ExamenI

ExamenI.o:	ExamenI.cpp Obra.h Lit.h Escultura.h Arqui.h
	g++ -c ExamenI.cpp

Obra.o:	Obra.h Obra.cpp
	g++ -c Obra.cpp

Lit.o:	Obra.h Lit.h Lit.cpp
	g++ -c Lit.cpp

Escultura.o:	Obra.h Escultura.h Escultura.cpp
	g++ -c Escultura.cpp

Pintura.o:	Obra.h Pintura.h Pintura.cpp
	g++ -c Pintura.cpp

Arqui.o:	Obra.h Arqui.h Arqui.cpp
	g++ -c Arqui.cpp

Clean:
	rm -f *.o ExamenI
