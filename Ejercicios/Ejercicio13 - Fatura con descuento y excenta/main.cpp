#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //Datos de entrada
    double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;
    int descuento = 0;
    double calculoDescuento = 0;
    double calculoImpuesto = 0;
	char estaExenta;
	
    cout << "Ingrese el subtotal de la factura: ";
    cin >> subtotal;
    
    cout << "Ingrese el descuento ( 0, 10, 15, 20): ";
    cin >> descuento;
    
    cout << "Esta factura esta excenta del IS. S/N ";
    cin >> estaExenta;
 
    //proceso
	calculoDescuento = (subtotal * descuento) / 100;
    if	(estaExenta == 's' || estaExenta == 'S');
    	calculoImpuesto = 0;
    if (estaExenta == 'n' || estaExenta == 'N')
		calculoImpuesto = (subtotal - calculoDescuento) * 0.15;
	
	total = subtotal - calculoDescuento + calculoImpuesto;

    //salida
    
    cout << endl;
    cout << "Total a pagar es de: " << total; 

    return 0;
}
