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
	}while(op < 0 && op > 4);

	return op;
}

int main(){

	int op;
	double n1, n2;

	do{
		op = menu();
		switch(op){
			case 1: 
				cout << "Introduce que números quieres sumar " << endl;
				cout << "Primer número: ";
				cin >> n1;
				cout << "Segundo número: ";
				cin >> n2;
				cout << "El resultado es: " << sumar(n1, n2) << endl;
				break;
			case 2: 
				cout<< "Introduce que números quieres restar " << endl;
				cout << "Primer número: ";
				cin >> n1;
				cout << "Segundo número: ";
				cin >> n2;
				cout << "El resultado es: " << restar(n1, n2) << endl;
				break;
			case 3:  
				cout<< "Introduce que números quieres multiplicar " << endl;
				cout << "Primer número: ";
				cin >> n1;
				cout << "Segundo número: ";
				cin >> n2;
				cout << "El resultado es: " << multiplicar(n1, n2) << endl;
				break;
			case 4: 
				cout<< "Introduce que números quieres dividir " << endl;
				cout << "Primer número: ";
				cin >> n1;
				cout << "Segundo número: ";
				cin >> n2;
				cout << "El resultado es: " << dividir(n1, n2) << endl;
				break;
			default: break;
		}
	}while(op > 0);
	


	return 0;
}
