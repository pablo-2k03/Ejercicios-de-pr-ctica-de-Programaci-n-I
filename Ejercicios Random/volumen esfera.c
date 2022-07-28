#include <stdlib.h>
#include <stdio.h>

int main (void){
	float radio;
	const float pi = 3.141592;
	float volumen;
	printf("Introduzca un radio: ");
	scanf("%f", &radio);
	volumen = (float)4/3 * pi * (radio * radio * radio);
	printf("\nEl volumen de la esfera con el radio introducido es de: %.2f", volumen);
	return 0;
}
