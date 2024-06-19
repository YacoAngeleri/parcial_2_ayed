#include <iostream>
using namespace std;

/*
Ingresar un valor entero CANT (< 50) y a continuación un conjunto SINOR de CANT elementos. Desarrollar un programa que determine e imprima:
a) El conjunto SINOR en el que cada elemento original se intercambie por su simétrico:
A[1] con A[CANT], A[2] con A[N-1], ..... etc.
b) El conjunto SINOR ordenado de menor a mayor sobre si mismo indicando la posición que ocupaba cada elemento en el conjunto original.
*/

#include <iostream>
using namespace std;

int main() {
    int CANT;
    cout << "Ingrese un valor entero CANT (< 50): ";
    cin >> CANT;
    if (CANT >= 50) {
        cout << "CANT debe ser menor que 50" << endl;
        return 1;
    }

    int SINOR[CANT];
    for (int i = 0; i < CANT; i++) {
        cout << "Ingrese el elemento " << i + 1 << " del conjunto SINOR: ";
        cin >> SINOR[i];
    }

    // a) Intercambiar elementos simétricos
    cout << "Conjunto SINOR simetrico: ";
    for (int i = 0; i < CANT; i++) {
        cout << SINOR[CANT - i - 1] << " ";
    }
    cout << endl;

    // b) Ordenar el conjunto SINOR y mostrar posición original
    int temp[CANT];
    for (int i = 0; i < CANT; i++) {
        temp[i] = SINOR[i];
    }
    for (int i = 0; i < CANT - 1; i++) {
        for (int j = i + 1; j < CANT; j++) {
            if (temp[i] > temp[j]) {
                int aux = temp[i];
                temp[i] = temp[j];
                temp[j] = aux;
            }
        }
    }
    cout << "Conjunto SINOR ordenado: " << endl;
    for (int i = 0; i < CANT; i++) {
        for (int j = 0; j < CANT; j++) {
            if (temp[i] == SINOR[j]) {
                cout << temp[i] << " (originalmente en posicion " << j + 1 << ") " << endl;
                break;
            }
        }
    }
    cout << endl;

    return 0;
}