#include "Nombre.h"

Nombre::Nombre()
{
	strcpy(nombre,"");
	
}


	Nombre::Nombre(char nombre[]){
		
		strcpy(this->nombre,nombre);
		
	}
	
	void Nombre::setM(char nombre[]){
		strcpy(this->nombre,nombre);
	}
	
	char* Nombre::getM(){
		return nombre;
	}
	
	float Nombre::cal(int dias){
		return dias *10;
	}
