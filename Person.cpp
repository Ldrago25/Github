#include "Person.h"

Person::Person()
{
	strcpy(nombre,"Brandon");
	cedula=23566047;
	edad=20;
	sueldo=2.300;
}
	Person::Person(char nombre[],int cedula,int edad,float sueldo){
		strcpy(this->nombre,nombre);
		this->cedula=cedula;
		this->edad=edad;
		this->sueldo=sueldo;
		
		
	}
	
	void Person::pedir(){
		cout<<endl<<"Nombre: "<<endl;
		cin.sync();
		cin.getline(nombre,50);
		cout<<endl<<"Cedula: "<<endl;
		cin>>cedula;
		cout<<endl<<"Edad: "<<endl;
		cin>>edad;
		cout<<endl<<"Sueldo: "<<endl;
		cin>>sueldo;
		
	}
	void Person::mostrar(){
		
		cout<<endl<<"-> "<<this->getM()<<endl;
		cout<<endl<<"-> "<<cedula<<endl;
		cout<<endl<<"-> "<<edad<<endl;
		cout<<endl<<"-> "<<sueldo<<endl;
		
	}
	
	void Person::setM(char nombre[]){
		strcpy(this->nombre,nombre);
	}
	char *Person::getM(){
		return nombre;
	}

Person::~Person()
{
}
