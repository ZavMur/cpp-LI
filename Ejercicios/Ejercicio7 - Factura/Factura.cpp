#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //Datos de entrada
    
    double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;

    cout << "Ingrese el subtotal de la factura: ";
    cin >> subtotal;

    //proceso

    total = subtotal + (subtotal * impuesto);

    //salida
    
    cout << endl;
    cout << "Total a pagar es de: " << total; 

    return 0;
}
