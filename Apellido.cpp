#include "Apellido.h"

Apellido::Apellido()
{
	strcpy(ape,"vargas");
	
}
	Apellido::Apellido(char ape[],char nombre[]):Nombre(nombre){
		strcpy(this->ape,ape);
	}
	
	
	void Apellido::setA(char ape[]){
		strcpy(this->ape,ape);
	}
	char* Apellido::getA(){
		return ape;
	}
	
	
	float Apellido::cal(int dias){
		return dias*20+Nombre::cal(dias);
		
		
	}
