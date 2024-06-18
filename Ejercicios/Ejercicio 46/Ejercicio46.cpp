#include<iostream>
using namespace std;

/*Ejercicio Nro. 46:

Ingresar dos valores enteros M (< 10) y N (< 15). A continuación ingresar un conjunto A de M elementos y luego otro B de N elementos. Generar e imprimir:
a) Un conjunto C resultante de la anexión de A y B.
b) Un conjunto D resultante de la anexión de los elementos distintos de cero de A y B.*/

int main(){
    int A[9], B[14],C[23],D[23];//La cantidad de elementos de C es la equivalencia a la suma de M+N
    int M, N, i, j=0,k=0;

    cout << "Ingrese un valor menor a 10 para M: ";//Precondicion: N debe ser menor que 10
    cin  >> M;

    cout << "Ingrese un valor menor a 15 para N: ";//Precondicion: N debe ser menor que 15
    cin  >> N;

    cout << endl;

    //Ingresar valores del vector A
    for(i=0;i<M;i++){
        cout << "Ingrese el elemento del vector A en la posicion " << i << ": ";
        cin  >> A[i];
    }

    cout << endl;

    //Ingresar valores del vector B
    for(i=0;i<N;i++){
        cout << "Ingrese el elemento del vector B en la posicion " << i << ": ";
        cin  >> B[i];
    }

    //Crear vector C
    for(i=0; i<(N+M);i++){
        if(i<M){
            C[i]=A[i];//Se van a llenar los espacios del vector hasta llegar al limite de elementos que posee el vector A
        }else{
            C[i]=B[j];//Se inicializo una variable j=0 y se le asignan a los valores restantes del vector C tantos como tenga el vector B
            j++;
        }
    }

    cout << "\nLos elementos del vector C son:" << endl;
    for(i=0; i<(N+M);i++){
        cout << " C[" << i << "]:" << C[i];
    }

    //Crear vector D
    for (i = 0; i < M; i++){
        if (A[i] != 0) {//Se verifica que el valor del elemento A[i] sea distinto de 0 para anexarlo al vector D
            D[k] = A[i];
            k++;
        }
    }
    for (i = 0; i < N; i++){
        if (B[i] != 0) {//Se verifica que el valor del elemento B[i] sea distinto de 0 para anexarlo al vector D
            D[k] = B[i];
            k++;
        }
    }

    cout << "\nLos elementos del vector D son:" << endl;
    for(i=0; i<k;i++){
        cout << " D[" << i << "]:" << D[i];

    }
    return 0;
}

