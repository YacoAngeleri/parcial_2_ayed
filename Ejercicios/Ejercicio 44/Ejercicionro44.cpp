#include<iostream>

using namespace std;
/*
Ingresar un valor entero N (< 25). A continuación ingresar un conjunto GG de N elementos. 
Imprimir el arreglo en orden inverso generando tres estrategias para imprimir los elementos a razón de:
a) Uno por línea	b) Diez por línea	c) Cinco por línea con identificación
*/

int main(){

    int N, i, repeticion = 0;
    int GG[24];

    cout << "Ingresar un valor entero menor a 25: ";//Precondicion: N debe ser menor a 25
    cin  >> N;//Valor de la cantidad maxima de elementos del array

    cout << endl;
    
    //Lectura de los valores del array
    for(i=0; i<N;i++){
        cout << "Ingrese el valor para la posicion " << i << ":";
        cin >>GG[i];
    }
    
    //Estrategia 1
    cout << "\nUno por linea: " << endl;
    for(i=N-1; i>=0; i--){//se genera un ciclo que recorre el array en orden inverso
        cout << GG[i] << endl;
    }
    //Estrategia 2
    cout << "\nDiez por linea:" << endl; 
    for(i=N-1; i>=0; i--){
        if(repeticion<10){
            repeticion++;//Se realiza un conteo para mostrar los elementos requeridos por linea
            cout << GG[i] << " ";
        }else{
            cout << "\n" << GG[i]<< " ";//Se hace un salteo de linea
            repeticion=1;//Se inicia la variable en 1 ya que ya se mostro un elemento del vector 
        }
    }
    //Estrategia 3
    cout << endl;
    cout << "\nCinco por línea con identificación:" ;
    for(i=N-1; i>=0; i--){
        if(repeticion<5){
            repeticion++;
            cout << "GG[" << i << "]: " << GG[i] << " ";
        }else{
            cout << "\n" << "GG[" << i << "]: " << GG[i] << " ";
            repeticion=1;
        }
    }
    return 0;
}
