#include <iostream>
using namespace std;

/*Ejercicio Nro. 45:
Ingresar un valor entero N (< 40). A continuación ingresar un conjunto A y luego otro conjunto B ambos de N elementos. 
Generar un arreglo C donde cada elemento se forme de la siguiente forma:
C[1] -> A[1]+B[N]	C[2] -> A[2]+B[N-1]	..........................	C[N] -> A[N]+B[1]
*/

int main(){

    int A[39], B[39], C[39];
    int N, i = 0;

    cout << "Ingresar un valor N menor que 40: "; //Precondicion: N debe ser menor que 40
    cin  >> N;

    cout << endl;
    //Ingresar los elementos del vector A
    for(i=0; i<N ; i++){

        cout << "Ingresar los valores del vector A en la pocision " << i << ": ";
        cin  >> A[i];

    }
    cout << endl;
    //Ingresar los elementos del vector B
    for(i=0; i<N ; i++){

        cout << "Ingresar los valores del vector B en la pocision " << i << ": ";
        cin  >> B[i];

    }
    
    //Desarrollando vector C

    for (int i = 0; i < N; i++) {
        // C[i] es la suma de A[i] y B[N-1-i]
        C[i] = A[i] + B[N - 1 - i];
    }


    cout << "\nLos valores del vector C son: " << endl;

    for(i=0; i<N ; i++){
        cout << "C[" << i + 1 << "]= "<< C[i] << endl;
    }
    

    return 0;
}