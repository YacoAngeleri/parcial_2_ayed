#include <iostream>

using namespace std;
/*Ejercicio Nro. 42:

Ingresar un valor entero N (< 40). A continuación ingresar un conjunto VALOR de N elementos.
Determinar e imprimir el valor máximo y la posición del mismo dentro del conjunto.
Si el máximo no es único, imprimir todas las posiciones en que se encuentra. Defina dos estrategias para:
a) Recorrer VALOR dos veces
b) Recorrer VALOR una sola vez*/

template <typename T>
void Recorrer2 (T v[], int num) //Función que recorre dos veces el vector
{
    cout << "Numero/s maximo/s recorriendo 2 veces" << endl;
    int nmax, i;
    for (i=0;i<num;i++)
    {
        if(i==0 || v[i]>nmax)
            nmax = v[i];
    }
    for (i=0;i<num;i++)
    {
        if(v[i]==nmax)
            cout << "VALOR[" << i << "] = " << nmax << " (" << i+1 << "° posicion)" << endl;
    }
}
template <typename T>
void Recorrer1 (T v[], int num) //Función que recorre una vez el vector
{
    int i, j, nmax;
    T VMax[39]={0}; //Se crea un vector donde guardar los numeros mayores y sus posiciones
    cout << "Numero/s maximo/s recorriendo 1 vez" << endl;
    for (i=0;i<num;i++)
    {
        if(i==0 || v[i]>nmax) //Se inicializa el vector en caso de encontrar un numero mayor al guardado
        {   nmax = v[i];
            if(nmax==0)
            {
               for (j=0;j<num;j++) //Si el mayor numero es cero, se inicializa en -1 para saber qué lugar/es ocupa
                    VMax[j]={-1};
            } else
                for (j=0;j<num;j++)
                    VMax[j]={0};
            VMax[i] = v[i];
        } else if(v[i]==nmax)
                VMax[i] = v[i];
    }
    for (i=0;i<num;i++) //Se lee el vector de el/los numero/s mayor/es
    {
        if(nmax!=0 && VMax[i]!=0)
            cout << "VALOR[" << i << "] = " << VMax[i] << " (" << i+1 << "° posicion)" << endl;
        if(nmax==0 && VMax[i]!=-1)
            cout << "VALOR[" << i << "] = " << VMax[i] << " (" << i+1 << "° posicion)" << endl;
    }
}
int main()
{
    int VALOR[39]={0}, N, i;
    cout << "Ingresar una valor entero de componentes (menor a 40)" << endl;
    cin >> N;
    cout << "Ingrese valores del conjunto" << endl;
    for (i=0;i<N;i++)
    {
        cout << "VALOR[" << i << "] = ";
        cin >> VALOR[i];
    }
    Recorrer2(VALOR, N);
    Recorrer1(VALOR, N);

    return 0;
}