#include <iostream>
#include "Person.h"
#include "Empleado.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Empleado **o=new Empleado *[2];
	
	for(int i=0; i<2; i++){
		cout<<endl<<"Proceso nunero: "<<i+1<<endl;
		o[i]=new Empleado();
		o[i]->cargar();
		o[i]->imprimir();
	}
	
	return 0;
}
