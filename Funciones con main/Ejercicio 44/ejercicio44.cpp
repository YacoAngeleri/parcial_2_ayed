#include <iostream>
using namespace std;


int main() {
int N, i;

    cout << "Ingresar un valor entero menor a 25: ";//Se toma como precondicion que el usuario ingrese bien los valores
    cin  >> N;//Valor de la cantidad maxima de elementos del array
    
    int GG[N];

    //Lectura de los valores del array
    for(i=0; GG[i]<N;i++){
        cout << "Ingrese el valor para la posicion " << i << ":" << endl;
        }

    return 0;
}