#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "Person.h"

class Empleado : public Person
{
	char nt[50];
	public:
		int liqui;
		int f;
		Empleado(char nt[],int liqui,int f,char nombre[],int cedula,int edad,float sueldo);
		Empleado();
		~Empleado();
		void cargar();
		void imprimir();
		void setN(char nt[]);
		char *getN();
	protected:
};

#endif
