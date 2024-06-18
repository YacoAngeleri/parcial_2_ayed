#include <iostream>
using namespace std;

/*
Ingresar un valor entero N (< 40). Luego ingresar un conjunto REFER de N elementos reales (ingresan ordenados por magnitud creciente).
Finalmente ingresar un valor pesquisa X. Desarrollar el programa que determine e imprima:
a) Con cual elemento (posición) del conjunto coincide, o
b) Entre cuales dos elementos (posiciones) se encuentra, o
c) Si es menor que el primero o mayor que el último.
*/

int main() {
    int N;
    cout << "Ingrese un valor entero menor que 40: "; // Ingresa por teclado el valor de N
    cin >> N;

    if (N >= 40) {
        cout << "El valor debe ser menor que 40." << endl;
        return 1;
    }

    float REFER[N];

    cout << "Ingrese los elementos para el conjunto REFER (en orden creciente): " << endl; // Ingresa por teclado cada valor que contendrá el vector REFER
    for (int i = 0; i < N; ++i) {
        cout << "REFER[" << i << "]= ";
        cin >> REFER[i];
        if (i > 0 && REFER[i] < REFER[i - 1]) {
            cout << "Los elementos deben estar en orden creciente." << endl;
            return 1;
        }
    }

    float X;

    cout << "Ingrese un valor pesquisa: ";
    cin >> X;

    // Determinar la posición de X
    if (X < REFER[0]) {
        cout << "El valor es menor que el primer elemento." << endl;
    } else if (X > REFER[N - 1]) {
        cout << "El valor es mayor que el último elemento." << endl;
    } else {
        for (int i = 0; i < N; ++i) {
            if (X == REFER[i]) {
                cout << "El valor introducido corresponde al elemento de la posicion: " << i << endl;
                return 0;
            } else if (X < REFER[i]) {
                cout << "El valor se encuentra entre las posiciones " << i-1 << " y " << i << "." << endl;
                return 0;
            }
        }
    }

    return 0;
}