#include <iostream>

using namespace std;
/*Ejercicio Nro. 41:

Ingresar un valor entero N (< 30). A continuación ingresar un conjunto UNO y luego otro conjunto DOS, ambos de N componentes.
Generar e imprimir otro conjunto TRES intercalando los valores de posición impar de DOS y los valores de posición par de UNO.
Diseñar un procedimiento que rellene un arreglo en posiciones salteadas con las componentes de otro y usarlo para cada conjunto.
*/
int main()
{
    int UNO[29]={0}, DOS[29]={0}, TRES[29]={0}, N, i;
    cout << "Ingresar una valor entero de componentes (menor a 30)" << endl; //Precondicion: N debe ser menor que 30
    cin >> N;
    cout << "Ingrese valores del conjunto UNO" << endl;
    for (i=0;i<N;i++)
    {
        cout << "UNO[" << i << "] = ";
        cin >> UNO[i];
    }
    cout << "Ingrese valores del conjunto DOS" << endl;
    for (i=0;i<N;i++)
    {
        cout << "DOS[" << i << "] = ";
        cin >> DOS[i];
    }
    cout << "Conjunto TRES" << endl;
    for (i=0;i<N;i+=2) //Rellena un arreglo en posiciones salteadas (pares) con las componentes de UNO
        TRES[i] = UNO[i];
    for (i=1;i<N;i+=2) //Rellena un arreglo en posiciones salteadas (impares) con las componentes de DOS
        TRES[i] = DOS[i];

    cout << "Las componentes del conjunto 3 son: " << endl;
    for(i=0; i<N; i++){
    cout << "Indice " << "TRES [" << i << "]: " << TRES[i] << endl; 
    }
    return 0;
}