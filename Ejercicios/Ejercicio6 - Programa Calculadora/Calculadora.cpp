#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	// Datos de entrada
	double a = 0;
	double b = 0;
	double suma = 0;
	double resta = 0;
	double multiplicacion = 0;
	double division  = 0;
	
	cout << "ingrese el valor de a: ";
	cin >> a;
	
	cout << endl;
	
	cout << "ingrese el valor de b: ";
	cin >> b;
	
	// Proceso
	suma = a + b;
	resta = a - b;
	multiplicacion = a * b;
	division = a / b; 
	
	// Salida
	cout << "La suma de a + b es: "<< suma << endl;
	cout << "La resta de a + b es: "<< resta << endl;
	cout << "La multiplicacion  de a + b es: "<< multiplicacion << endl;
	cout << "La division de a + b es: "<< division << endl;
	
	
	return 0;
}