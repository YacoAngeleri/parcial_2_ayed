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
    int N;
    N = valorN(N);
    int VEC[N], FACT[N];
    for(int i=0; i<N; i++) VEC[i] = Vector(i);
    for(int i=0; i<N; i++) FACT[i] = Factorial(VEC[i]);
    for(int i=0; i<N; i++) cout << VEC[i] << " " << FACT[i] << endl;

    return 0;
}
