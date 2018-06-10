#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string.h>
using namespace std;
class Person
{
	char nombre[50];
	public:
		int cedula;
		int edad;
		float sueldo;
		Person(char nombre[],int cedula,int edad,float sueldo);
		Person();
		~Person();
		void pedir();
		void mostrar();
		void setM(char nombre[]);
		char *getM();
	protected:
};

#endif
