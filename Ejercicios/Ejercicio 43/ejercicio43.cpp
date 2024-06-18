#include <iostream>

using namespace std;

/*Ejercicio Nro. 43:

Ingresar un valor entero N (< 15).
A continuación ingresar un conjunto DATO de N elementos.
Generar otro conjunto de dos componentes MEJORDATO donde el primer elemento sea el mayor valor de DATO
y el segundo el siguiente mayor (puede ser el mismo si está repetido).
Imprimir el conjunto MEJORDATO con identificación.*/

struct MEJORDATO {
        int May, SigMay;};
MEJORDATO Mayor; //Define un identificador con la estructura declarada
int main()
{
    int DATO[14]={0}, nmax, imax, i, N;
    cout << "Ingresar una valor entero de componentes (menor a 15)" << endl; //Precondicion: N debe ser menor a 15
    cin >> N;
    cout << "Ingrese valores del conjunto" << endl;
    for (i=0;i<N;i++)
    {
        cout << "DATO[" << i << "] = ";
        cin >> DATO[i];
    }
    for (i=0;i<N;i++) //Se calcula el mayor numero y su indice
    {
        if(i==0 || DATO[i]>nmax){
            nmax = DATO[i];
            imax=i;}
    }
    Mayor.May=nmax;
    cout << "Numero mayor: " << Mayor.May << ", De indice: " << imax << endl;
    if(imax==0) //Si el numero mayor tiene indice 0, se comparan los numeros a partir de i=1
    {
        i=1;
        nmax=DATO[1];
    } else {
            i=0;
            nmax=DATO[0];
    }
    for (i;i<N;i++)
    {
        if(i!=imax && DATO[i]>nmax){ //Se busca el segundo mayor numero, sin tener en cuenta el primer mayor
            nmax = DATO[i];
            imax = i;
        }
    }
    Mayor.SigMay=nmax;
    cout << "Siguiente numero mayor: " << Mayor.SigMay << ", De indice: " << imax << endl;

    return 0;
}