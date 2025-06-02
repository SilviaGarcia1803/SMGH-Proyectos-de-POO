/*Silvia Mariela Garcia Hernandez
Matricula: 362313028
Grupo: 37B-ISC

30 de mayo de 2025

Realizar un código que capture 10 numeros y posteriormente los ordene 
(ascendente) en un arreglo y los despliegue en pantalla.
Los numeros a capturar deberan estar en un archivo txt*/ 

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

int main(){
	double Arreglo[10];//en este arreglo se guardaran los valores del archivo txt
	int Tamano=10;	//representa el tamaño del arreglo
	int Estado=0;	//recorrera el arreglo "Arreglo" y almacenará los valores del archivo de texto "10-ArregloOrdenamiento2.txt"
	double aux;		//guardara un valor del arreglo para se comparado con otro
	string Archivo; //crea una cadena de texto, que se utiliza para generar el archivo de texto
	
	cout << "ORDENAMIENTO ASCENDENTE DE NUMEROS" << endl;
	cout << "Ingrese 10 numeros" << endl;
	cout << "\nArregloOrdenamiento2.txt" << endl;
	
	//ingresar los numeros del archivo txt
	ifstream Leer("10-ArregloOrdenamiento2.txt");//leer desde el archivo de texto
	while (getline(Leer, Archivo)){	//utiliza el bucle while y la funcion getline para leer el archivo linea por linea
		cout << Archivo << endl; //muestra en pantalla el contenido del archivo de texto
		double NumDouble =atof(Archivo.c_str()); //Archivo.c_str() convierte la cadena a caracteres.		atof() convierte los caracteres a double		
		Arreglo[Estado]=NumDouble;//guarda cada valor de la variable "NumEnt" en el Arreglo
		++Estado;//recorre el Arreglo 1 por 1
	}
	
	//ordenar los numeros del arreglo
		for(int i = 0; i < Tamano-1; ++i){ //numero de ieraciones
		for(int c = 0; c < (Tamano-1)-i; ++c){	//comparaciones
			if(Arreglo[c]>Arreglo[c+1]){
				aux = Arreglo[c];
				Arreglo[c] = Arreglo[c+1];
				Arreglo[c+1] = aux;
			}
		}
	}
	
	cout << "\nEl orden seria:" << endl;
	for(int p = 0; p < Tamano; ++p){
		cout << Arreglo[p] << endl;
	}
	
	return 0;
}
