#include <stdio.h>
#include <conio.h>
main()
{
	float area, perimetro, radio;
	int opcion;
	const float pi=3.1416;
	printf("Calcula el area o perimetro de  un circulo\n");
	printf("Ingresa el radio\n");
	scanf("%f",&radio);
	
	printf("Selecciona una opcion (1 o 2)\n");
	printf("1.- Area\n");
	printf("2.- Perimetro\n");
	scanf("%d",&opcion);
	
	switch(opcion)
	{
		case 1: area=pi*radio*radio;
			printf("\nEl area del circulo es \n%f",area);
			break;
		case 2: perimetro=pi*2*radio;
			printf("\nEl perimetro del circulo es \n%f",perimetro);
			break;
		default: printf("\nopcion invalida");
	}
	getch();
}
