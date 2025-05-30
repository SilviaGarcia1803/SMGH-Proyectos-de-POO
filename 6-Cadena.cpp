/*Silvia Mariela Garcia Hernandez
Matricula: 362313028
Grupo: 37B-ISC

21 de mayo de 2025
_______________________________________________________________________________________________

/*LECTURA DE DATOS CON ESPACIOS EN BLANCO

cin>>cadena; <-- no permite leer cadenas con espacios en blanco

-se ignoran todos los caracteres en blanco en la cadena 
-cuando se detecta un caracter en blanco " ", la lectura termina
-Los caracteres en blanco son: el espacio en blanco, el tabulador y el salto de linea.

getline(cin, cadena); <-- lee cadenas con espacios en blanco
__________________________________________________________________________________________________

COMPARAR 2 CADENAS
strcmp(Cadena1, Cadena2);
-para ppoder compararlas ambas cadenas deben ser de tipo char
________________________________________________________________________________________________

CONVERTIR UN DATO DE TIPO STRING A CHAR
cadena.c_str()
-se declara la cadena: string cadena;
-se le agrega: .c_str() al final*/


#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;

int main(){
	
	string Cadena1="Hola Mundo";
	string Cadena2;
	
	cout<<"Escribe lo siguiente, sin errores\n";
	cout<<"Hola Mundo\n";
	getline(cin, Cadena2); //lee la cadena
	//compara ambas cadenas, si Comp devuelve 0, las cadenas son iguales 
	int Comp=strcmp(Cadena1.c_str(), Cadena2.c_str());
	if(Comp=0)
		cout<<"las cadenas son iguales";
	else
		cout<<"ERROR \nlas cadenas no son iguales";
		
	return 0;
}

/*recorre las cadenas para compararlas e imprime si son iguales o no ambas cadenas
	for(int c=0;c<Cadena1.length();++c){
		if (Cadena1[c]==Cadena2[c]){ //compara las cadenas letra por letra, para comprobar que sean iguales
			cout<<"\nson iguales";
		}
		else cout<<"\nNo son iguales";
	}	*/
