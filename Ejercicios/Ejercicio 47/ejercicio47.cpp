#include <iostream>
using namespace std;

/*Ingresar dos valores enteros M (< 25) y N (< 10) A continuación ingresar un conjunto A de M elementos y luego otro B de N elementos,
ambos ordenados en forma creciente por magnitud. Generar e imprimir el conjunto TOTAL resultante del apareo por magnitud de los conjuntos A y B.
*/

int main(){ //se ingresan los valores de M y N
    int M, N;
    cout << "Ingrese un Valor que sea menor a 25: ";
    cin >> M;
    cout << "Ingrese un Valor que sea menor a 10: ";
    cin >> N;

    int A [M], B [N]; //vectores de M elementos y N elementos

    cout << "Ingrese los elementos del conjunto A:" << endl; // Se ingresan los valores de cada elemento del conjunto A
    for (int i = 0; i < M; ++i) {
        cout << "A[" << i << "] = ";
        cin >> A[i];
        if (i > 0 && A[i] < A[i - 1]) {
                cout << "Los elementos deben estar en orden creciente." << endl;
                return 1;
            }
    }

    cout << "Ingrese los elementos del conjunto B:" << endl; // Se ingresan los valores de cada elemento del conjunto B
    for (int i = 0; i < N; ++i){
        cout << "B[" << i << "] = ";
        cin >> B[i];
        if (i > 0 && B[i] < B[i - 1]) {
                cout << "Los elementos deben estar en orden creciente." << endl;
                return 1;
            }
    }

    int Total [M + N]; // Se genera el conjunto TOTAl (se realizara el apareo por magnitud de A y B)
    int i = 0, j = 0, k = 0;

    while (i < M && j < N){
        if (A[i] < B[j]) {
            Total [k++] = A[i++];
        } else {
            Total [k++] = B[j++];
        }
    }

    while (i < M) { //Si quedan elementos en A, se añaden en el conjunto Total
        Total [k++] = A [i++];
    }

    while (j < N) { //Si quedan elementos en B, se añaden en el conjunto Total
        Total [k++] = B [j++];
    }

    cout << "El conjunto Total de ambos conjuntos es: "; //se imprime el conjunto Total
    for (int i = 0; i < M + N; ++i){
        cout << Total [i] << " ";
    }
    cout << endl;

    return 0;
}