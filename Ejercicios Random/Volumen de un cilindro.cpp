#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159265359

int main(void){
	int dia;
	int altura;
	int radio;
	int volumen;
	printf("Introduzca el diametro, en metros: ");
	scanf("%d", &dia);
	printf("Introduzca la altura, en metros: ");
	scanf("%d", &altura);
	radio = dia / 2;
	volumen = pi * (radio * radio) * altura;
	printf("\nEl volumen del cilindro es de %d", volumen);
	return 0;
}
