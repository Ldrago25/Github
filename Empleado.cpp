#include "Empleado.h"

Empleado::Empleado()
{
	strcpy(nt,"Empresa");
	liqui=200;
	f=100;
}
	Empleado::Empleado(char nt[],int liqui, int f,char nombre[],int cedula,int edad,float sueldo):Person(nombre,cedula,edad,sueldo){
		
		strcpy(this->nt,nt);
		this->liqui=liqui;
		this->f=f;
		
		
	}
	void Empleado::cargar(){
		Person::pedir();
		cout<<endl<<"nombre donde trabja: "<<endl;
		cin.sync();
		cin.getline(nt,50);
		cout<<endl<<"Liquidacion: "<<endl;
		cin>>liqui;
		cout<<endl<<"Cuanto quisiera ganar: "<<endl;
		cin>>f;
		
		
	}
	
	void Empleado::imprimir(){
		Person::mostrar();
		cout<<endl<<"-> "<<this->getN()<<endl;
		cout<<endl<<"-> "<<liqui<<endl;
		cout<<endl<<"-> "<<f<<endl;
	}
	
	void Empleado::setN(char nt[]){
		strcpy(this->nt,nt);
	}
	char *Empleado::getN(){
		return nt;
	}
	

Empleado::~Empleado()
{
}
