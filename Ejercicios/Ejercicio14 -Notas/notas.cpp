#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int nota = 0;

    cout << "Ingrese la Nota con la que califico: ";
    cin >> nota;

    if (nota > 100 || nota < 0) {
        cout << "Por favor ingrese una nota entre 0 - 100";\
        return 0;
    }
    
    if (nota >= 95 && nota <= 100) {
        cout << "obtubiste una A ";
    }

    if (nota >= 85 && nota <= 94) {
        cout << "obtubiste una B. )";
    }

    if (nota >= 75 && nota <= 94) {
        cout << "obtubiste una c. )";
    }
    
    if (nota >= 65 && nota <= 74) {
        cout << "obtubiste una D. )";
    }
    
    if (nota >= 60 && nota <= 64) {
        cout << "obtubiste una E. )";
    }
    
    if (nota < 60 ) {
        cout << "obtubiste una F. )";
    }

    return 0;
}
