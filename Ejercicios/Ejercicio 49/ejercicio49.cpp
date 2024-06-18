#include <iostream>
using namespace std;

/*
Ingresar un valor entero CANT (< 50) y a continuación un conjunto SINOR de CANT elementos. Desarrollar un programa que determine e imprima:
a) El conjunto SINOR en el que cada elemento original se intercambie por su simétrico:
A[1] con A[CANT], A[2] con A[N-1], ..... etc.
b) El conjunto SINOR ordenado de menor a mayor sobre si mismo indicando la posición que ocupaba cada elemento en el conjunto original.
*/

int main () {
    int CANT;
    cout << "Introduce un valor (menor a 50): ";
    cin  >> CANT;

    int SINOR [CANT];

    for (int i = 0; i < CANT; ++i) {
    SINOR [i] = CANT - i;
        cout << "SINOR[" << i << "] = " << SINOR [i] << endl;
    }

    for (int i = 0; i < CANT; ++i){
        SINOR [i] = i+1;
        cout << "SINOR[" << i << "] = " << SINOR [i] << " En la posicion orginal se encontraba en: " << (CANT - 1) - i << endl;
    }
    return  0;
}