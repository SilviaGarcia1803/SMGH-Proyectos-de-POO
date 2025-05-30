/*Silvia Mariela Garcia Hernandez
Matricula: 362313028
Grupo: 37B-ISC

28 de mayo de 2025

Realizar un código que capture 10 numeros y posteriormente los ordene 
(ascendente) en un arreglo y los despliegue en pantalla*/ 

#include <iostream>
using namespace std;

int main(){
	int Arreglo[10], Tamano=10, Estado;
	
	cout << "ORDENAMIENTO ASCENDENTE DE NUMEROS" << endl;
	cout << "Ingrese 10 numeros" << endl;
	
	//ingresar los numeros al arreglo
	for(int x = 0; x < 10; ++x){
		cin >> Arreglo[x];
	}
	
	//ordenar los numeros
	for(int i = 0; i < Tamano-1; ++i){ //numero de ieraciones
		for(int c = 0; c < (Tamano-1)-i; ++c){	//comparaciones
			if(Arreglo[c]>Arreglo[c+1]){
				Estado = Arreglo[c];
				Arreglo[c] = Arreglo[c+1];
				Arreglo[c+1] = Estado;
			}
		}
	}
	
	cout << "\nEl orden seria:" << endl;
	for(int p = 0; p < Tamano; ++p){
		cout << Arreglo[p] << endl;
	}
	
	return 0;
}
