/*Ingresar un valor N (< 25). Generar un arreglo de N componentes en el cual las mismas 
contengan los primeros números naturales pares e imprimirlo.*/

#include <iostream>
using namespace std;


int main(){
	int v[24];
	int N, i;
	
	cout<<"Ingrese un valor para N: ";
	cin>>N;
	
	for(i=0; i<N; i++){
		v[i] = (i + 1) * 2;
	}
	
	for(i=0;i<N;i++){
		cout<<"El valor es: " << v[i] << endl;
		
	}
    return 0;
}