#include <iostream>
using namespace std;

/*
Ingresar dos valores enteros M (< 25) y N (< 10) A continuación ingresar un conjunto A de M elementos y luego otro B de N elementos,
ambos ordenados en forma creciente por magnitud. Generar e imprimir el conjunto TOTAL resultante del apareo por magnitud de los conjuntos A y B.
*/

int valorAbsoluto(int x) {
  if (x < 0) {
      return -x;
  } else {
      return x;
  }
}

int main() {
    int M, N;

    // Ingresar los valores de M y N
    cout << "Ingrese un valor que sea menor a 25: ";
    cin >> M;
    if (M >= 25) {
        cout << "El valor debe ser menor a 25." << endl;
        return 1;
    }

    cout << "Ingrese un valor que sea menor a 10: ";
    cin >> N;
    if (N >= 10) {
        cout << "El valor debe ser menor a 10." << endl;
        return 1;
    }

    int A[M], B[N]; // Vectores de M y N elementos

    // Ingresar los valores de cada elemento del conjunto A
    cout << "Ingrese los elementos del conjunto A:" << endl;
    for (int i = 0; i < M; ++i) {
        cout << "A[" << i << "] = ";
        cin >> A[i];
        if (i > 0 && valorAbsoluto(A[i]) < valorAbsoluto(A[i - 1])) {
            cout << "Los elementos deben estar en orden creciente por magnitud." << endl;
            return 1;
        }
    }

    // Ingresar los valores de cada elemento del conjunto B
    cout << "Ingrese los elementos del conjunto B:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << "B[" << i << "] = ";
        cin >> B[i];
        if (i > 0 && valorAbsoluto(B[i]) < valorAbsoluto(B[i - 1])) {
            cout << "Los elementos deben estar en orden creciente por magnitud." << endl;
            return 1;
        }
    }

    int Total[M + N]; // Generar el conjunto TOTAL
    int i = 0, j = 0, k = 0;

    while (i < M && j < N) {
        if (A[i] < B[j]) {
            Total[k++] = A[i++];
        } else {
            Total[k++] = B[j++];
        }
    }

    // Si quedan elementos en A, se añaden en el conjunto Total
    while (i < M) {
        Total[k++] = A[i++];
    }

    // Si quedan elementos en B, se añaden en el conjunto Total
    while (j < N) {
        Total[k++] = B[j++];
    }

    // Ordenar el conjunto Total
    for (int i = 0; i < M + N - 1; ++i) {
        for (int j = i + 1; j < M + N; ++j) {
            if (Total[i] > Total[j]) {
                int temp = Total[i];
                Total[i] = Total[j];
                Total[j] = temp;
            }
        }
        
    }

    // Imprimir el conjunto Total
    cout << "El conjunto Total de ambos conjuntos es: ";
    for (int i = 0; i < M + N; ++i) {
        cout << Total[i] << " ";
    }
    cout << endl;

    return 0;
}