#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    
        int nota = 0;

    cout << endl;
    cout << "Ingrese la Nota con la que califico: ";
    cin >> nota;

    cout << endl;
    if (nota > 100 || nota < 0) {
        cout << "Por favor ingrese una nota entre 0 - 100";\
        return 0;
    }

    cout << endl;
    
    if (nota >= 95 && nota <= 100) {
        cout << "Obtubiste una S(A++). Corresponde a un trabajo o examen perfecto. Trabajo muy bueno y sin erroresm Muchas Felicidades.";
    }

    if (nota >= 91 && nota <= 95) {
        cout << "Obtubiste una AD. Corresponde a un trabajo o examen bueno con pocas faltas.";
    }

    if (nota >= 86 && nota <= 90) {
        cout << "Obtubiste una A. Realización con solo errores menores.";
    }
    
    if (nota >= 81 && nota <= 85) {
        cout << "Obtubiste una A-. sobre la media ";
    }
    
    if (nota >= 76 && nota <= 80) {
        cout << "Obtubiste una B+. A partir de este umbral se considera que el trabajo o examen es bueno.";
    }
    
    if (nota >= 71 && nota <= 75) {
        cout << "Obtubiste una B. Sobre la media pero con algunos errores.";
    }
    
    if (nota >= 66 && nota <= 70) {
        cout << "Obtubiste una B-. Notable Mejora.";
    }
    
    if (nota >= 61 && nota <= 65) {
        cout << "Obtubiste una C+.";
    }
    
    if (nota >= 56 && nota <= 60) {
        cout << "Obtubiste una C. casi pero reprobado.";
    }
    
    if (nota >= 51 && nota <= 55) {
        cout << "Obtubiste una C-. Reprobo.";
    }
    
    if (nota >= 46 && nota <= 50) {
        cout << "Obtubiste una D+. Si estuvieras en Espana o Venezuela es el minimo para aprovar.";
    }
    
    if (nota >= 41 && nota <= 45) {
        cout << "Obtubiste una D. Malo, pero con carencias significativas.";
    }
    
    if (nota >= 36 && nota <= 40) {
        cout << "Obtubiste una D-. Corresponde a un trabajo más bien malo.";
    }
    
    if (nota >= 31 && nota <= 35) {
        cout << "Obtubiste una E+.";
    }
    
    if (nota >= 26 && nota <= 30) {
        cout << "Obtubiste una E. La realizacion alcanza el criterio minimo.";
    }
    
    if (nota >= 21 && nota <= 25) {
        cout << "Obtubiste una E-.";
    }
    
    if (nota >= 16 && nota <= 20) {
        cout << "Obtubiste una F+.";
    }
    
    if (nota >= 11 && nota <= 15) {
        cout << "Obtubiste una F.";
    }
    
    if (nota >= 2 && nota <= 5) {
        cout << "Obtubiste una F-.";
    }
    
    if (nota >= 0 && nota <= 1) {
        cout << "Obtubiste una F--. Muy Pobre , No tiene conocimiento alguno sobre el tema";
    }
    
    cout << endl;


    return 0;
}
