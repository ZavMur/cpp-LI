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
    
    if (nota >= 96 && nota <= 100) {
        cout << "obtubiste una S (A+++). Corresponde a un trabajo o examen perfecto. 
        Trabajo muy bueno y sin errores. Felicidades.";
    }

    if (nota >= 95 && nota <= 91) {
        cout << "obtubiste una AD. Corresponde a un trabajo o examen bueno con pocas faltas. 
        Esfuersate un poco mas y alcanzaras la excelencia.)";
    }

    if (nota >= 90 && nota <= 86) {
        cout << "obtubiste una A. Realización con solo errores menores. 
        continua así vas por buen camino.)";
    }

    if (nota >= 85 && nota <= 81) {
        cout << "obtubiste una A-. Ya estas sobre la media. 
        Tu camino a la exelencia inicia aquí. )";
    }
    if (nota >= 80 && nota <= 76) {
        cout << "obtubiste una B+. A partir de este umbral se considera que el trabajo o examen es bueno. )";
    }
    if (nota >= 75 && nota <= 71) {
        cout << "obtubiste una B. Sobre la media pero con algunos errores. )";
    }
    if (nota >= 70 && nota <= 66) {
        cout << "obtubiste una B-. esta es la calificación mínima aprobatoria. )";
    }
    if (nota >= 65 && nota <= 61) {
        cout << "obtubiste una C+. Aprobado pero casi reprobo. )";
    }
    if (nota >= 60 && nota <= 56) {
        cout << "obtubiste una C. En muchos países, el umbral de aprobado se ubica aquí. )";
    }
    if (nota >= 55 && nota <= 51) {
        cout << "obtubiste una C-. En muchos países, el umbral de aprobado se ubica aquí.. )";
    }
    if (nota >= 50 && nota <= 46) {
        cout << "obtubiste una D+. casi pero reprobado. 
        Es el mínimo aprobatorio en España y Venezuela. )";
    }
    if (nota >= 45 && nota <= 41) {
        cout << "obtubiste una D. Malo, pero con carencias significativas. )";
    }
    if (nota >= 40 && nota <= 36) {
        cout << "obtubiste una D-. Corresponde a un trabajo bien malo. )";
    }
    if (nota >= 35 && nota <= 31) {
        cout << "obtubiste una E+. Corresponde a un trabajo más bien malo. )";
    }
    if (nota >= 30 && nota <= 26) {
        cout << "obtubiste una E. La realización alcanza el criterio mínimo. )";
    }
    if (nota >= 25 && nota <= 21) {
        cout << "obtubiste una E-. )";
    }
    if (nota >= 20 && nota <= 16) {
        cout << "obtubiste una F+. )";
    }
    if (nota >= 15 && nota <= 11) {
        cout << "obtubiste una F. eres un Bart. )";
    }
    if (nota >= 10 && nota <= 6) {
        cout << "obtubiste una F. Es necesario mucho más trabajo. )";
    }
    if (nota >= 5 && nota <= 2) {
        cout << "obtubiste una F-. )";
    }
    if (nota >= 1 && nota <= 0) {
        cout << "obtubiste una F--. Muy Pobre , No tiene conocimiento alguno sobre el tema. )";
    }
    
    return 0;
}
