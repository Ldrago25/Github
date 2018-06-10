#ifndef NOMBRE_H
#define NOMBRE_H
#include <iostream>
#include <string.h>
class Nombre
{
	char nombre[50];
	public:
		Nombre(char nombre[]);
		Nombre();
		void setM(char nombre[]);
		char* getM();
		virtual float cal(int dias);
		
	protected:
};

#endif
