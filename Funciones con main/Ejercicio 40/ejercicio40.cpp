/*Ingresar un valor entero N (< 25). A continuación ingresar un conjunto VEC de N 
componentes. Si la suma de las componentes resulta mayor que cero imprimir las de 
índice par, sino las de índice impar.*/

#include <iostream>
using namespace std;

int main() {
    int N, suma=0;
    cout << "Ingrese un valor entero N menor a 25: "; //Precondicion: N debe ser menor que 25
    cin >> N;

        /* //Validar que N sea menor que 25
    if (N >= 25 || N < 0 ) {
        cout << "El valor de N debe ser menor que 25 y no menor que 0." << endl;
        return 1;
    } */

    int VEC[N];

    cout << "Ingrese " << N << " elementos:" << endl;
    for (int i = 0; i < N; i++) {
        cout << " - Elemento " << i+1 << ": ";
        cin >> VEC[i];
    }

    for(int i=0; i<N ; i++){
        suma += VEC[i];
    }
    
    if(suma>0){
        cout << endl << "Las componentes de indice PAR son: " << endl << endl;
        for(int i=0 ; i < N; i+=2){
            cout << " - Componente " << i << ": " << VEC[i] << endl;
        }
    }else{
        cout << "Las componentes de indice IMPAR son: " << endl;
        for(int i=1 ; i < N; i+=2){
            cout << " - Componente " << i << ": " << VEC[i] << endl;
        }
    }



    return 0;
}