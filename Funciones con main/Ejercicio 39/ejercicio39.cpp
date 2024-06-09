/*Ingresar un valor entero N (< 20). A continuación ingresar un conjunto VEC 
de N componentes. A partir de este conjunto generar otro FACT en el que cada 
elemento sea el factorial del elemento homólogo de VEC. Finalmente imprimir ambos
vectores a razón de un valor de cada uno por renglón
Nota: El programa principal puede tener un máximo de 6 instrucciones.
*/

#include <iostream>
using namespace std;


int valorN(int n) { 
    int N;
    cout << "Ingrese un valor entero N menor a 20: "; //Precondicion: N debe ser menor que 20
    cin >> N;
    return N;
}
int Vector (int i){

    int elemento;
    // Ingresar los N elementos
    cout << "Ingrese la componente " << i+1 << ": "; //Precondicion: Los valores deben ser >= 0 dado que no es posible calcular el factorial de ningun numero negativo
    cin >> elemento;
    return elemento;
}

int Factorial(int n){ //Funcion que se encarga de hacer el factorial de un numero
    int resulFactorial = 1;
    for (int i = 1; i <= n; i++) resulFactorial *= i;

    return resulFactorial;
}


int main() {
    int N = valorN(N);
    int VEC[N], FACT[N];
    for(int i=0; i<N; i++) VEC[i] = Vector(i);
    for(int i=0; i<N; i++) FACT[i] = Factorial(VEC[i]);
    for(int i=0; i<N; i++) cout << VEC[i] << " " << FACT[i] << endl;

    return 0;
}
