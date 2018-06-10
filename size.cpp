#include <iostream>
#include <vector>
#include "Nombre.h"
#include "Apellido.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	Nombre *n2= new Apellido("vargas","Brandon");
	cout<<endl<< n2->cal(1);

	
	Nombre *n=new Nombre("BRanDON");
	cout<<endl<<n->getM();
	
	
	vector <int> a;
	a.push_back(10);
	a.push_back(20);
	
	for(int i=0; i<a.size(); i++){
		cout<<endl<<a[i];
	}

	
	
	
	
	return 0;
}
