/*Silvia Mariela Garcia Hernandez 
Matricula: 362313028
Grupo: 37B-ISC

desarrollar un programa que me permita calcula el area de un 
triangulo a partir de la longitud de la base y de su altura
-escaleno
-isisceles
-equilatero*/

#include <stdio.h>
#include <conio.h>

class Triangulo
{
	private: 
		float base, altura;
	
	public:
		
		Triangulo(float b, float a)
		{
			base=b;
			altura=a;
		}
		
		float CalcularArea()
		{
			return (base*altura)/2;
		}
};

main()
{
	float base, altura, area;
	int opcion;
	
	printf("Calcula el area de un triangulo\n");
	//elegir el tipo de triangulo
	printf("Selecciona una opcion\n");
	printf("1.- Equilatero\n");
	printf("2.- Isosceles\n");
	printf("3.- Escaleno\n");
	scanf("%d",&opcion);
	//solicitar datos
	printf("Ingresa la base\n");
	scanf("%f",&base);
	printf("\nIngresa la altura\n");
	scanf("%f",&altura);
	//crear el objeto de la clase
	Triangulo obj(base, altura);
	
	switch(opcion)
	{
		case 1: 
			area = obj.CalcularArea();
			printf("\nEl area del circulo es: %f",area);
			break;
		case 2: 
			area = obj.CalcularArea();
			printf("\nEl area del circulo es: %f",area);
			break;
		case 3: 
			area = obj.CalcularArea();
			printf("\nEl area del circulo es: %f",area);
			break;
		default: printf("\nopcion invalida");
	}
	
	getch();
}
