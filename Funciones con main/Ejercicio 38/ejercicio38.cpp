/*Ingresar un valor entero N (< 30) y a continuación un conjunto de N elementos. 
Si el último elemento del conjunto tiene un valor menor que 10 imprimir los negativos 
y en caso contrario los demás.*/

#include <iostream>
using namespace std;

int main() {
    int N, elementos[29];
    cout << "Ingrese un valor entero N menor a 30: "; //Precondicion: N debe ser menor que 30
    cin >> N;

    /* //Validar que N sea menor que 30
    if (N >= 30 || N < 0 ) {
        cout << "El valor de N debe ser menor que 30 y no menor que 0." << endl;
        return 1;
    } */

    // Ingresar los N elementos
    cout << "Ingrese " << N << " elementos:" << endl;
    for (int i = 0; i < N; i++) {
        cout << " - Elemento " << i+1 << ": ";
        cin >> elementos[i];
    }

    // Verificar el valor del último elemento
    if (elementos[N-1] < 10) {
        // Imprime los elementos negativos, (menores a 0).
        cout << "Elementos negativos:" << endl;
        for (int i = 0; i < N; i++) {
            if (elementos[i] < 0) {
                cout << elementos[i] << " ";
            }
            
        }
    } else {
        // Imprime los elementos no negativos, (mayores o iguales a 0).
        cout << "Elementos mayores o iguales a 0:" << endl;
        for (int i = 0; i < N; i++) {
            if (elementos[i] >= 0) {
                cout << elementos[i] << " ";
            }
        }
    }

    cout << endl;
    return 0;
}
