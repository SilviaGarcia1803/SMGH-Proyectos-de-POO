/*Silvia Mariela Garcia Hernandez
Matricula: 362313028
Grupo: 37B-ISC

2 de junio de 2025

Realizar un programa que lea un archivo de texto e imprima su contenido
incluyedo caracteres especiales: '¿!"#')¨[-]*/ 

#include <iostream>
#include <fstream>
#include <string>
#include <windows.h> // header file: Permite acceder a las funciones y servicios de la WinAPI, que son la base para la creación de aplicaciones de Windows. 
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8); // para mostrar correctamete cualquier carácter Unicode.
	string Archivo; //crea una cadena de texto, que se utiliza para generar el archivo de texto
    
	cout << "LEER UN ARCHIVO DE TEXTO" << endl;
	cout << "\nLeerArchivoTxt.txt" << endl;
	
	//ingresar los numeros del archivo txt
	ifstream Leer("11-LeerArchivoTxt.txt");//leer desde el archivo de texto
	while (getline(Leer, Archivo)){	//utiliza el bucle while y la funcion getline para leer el archivo linea por linea
		cout << Archivo << endl; //muestra en pantalla el contenido del archivo de texto
	}
		
	return 0;
}
