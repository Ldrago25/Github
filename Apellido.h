#ifndef APELLIDO_H
#define APELLIDO_H

#include "Nombre.h"

class Apellido : public Nombre
{
	char ape[50];
	public:
		Apellido(char ape[],char nombre[]);
		Apellido();
		void setA(char ape[]);
		char* getA();
		virtual float cal(int dias);
		
	protected:
};

#endif
