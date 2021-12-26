#include "calculadora.h"


int menu(){
	int op;
	do{
		cout << "## QUE DESEA HACER ##" << endl;
		cout << "1. Sumar" << endl;
		cout << "2. Restar" << endl;
		cout << "3. Multiplicar" << endl;
		cout << "4. Dividir" << endl;
		cout << "0. Salir" << endl;
		cin >> op;
	}while(op < 0 || op > 4);

	return op;
}

int main(){

	int op;
	double n1, n2;

	do{
		op = menu();
		switch(op){
			case 1: 
				cin >> n1;
				cin >> n2;
				cout << sumar(n1, n2) << endl;
				break;
			case 2: 
				cin >> n1;
				cin >> n2;
				cout << restar(n1, n2) << endl;
				break;
			case 3:  
				cin >> n1;
				cin >> n2;
				cout << multiplicar(n1, n2) << endl;
				break;
			case 4: 
				cin >> n1;
				cin >> n2;
				cout << dividir(n1, n2) << endl;
				break;
			default: break;
		}
	}while(op > 0);
	


	return 0;
}
