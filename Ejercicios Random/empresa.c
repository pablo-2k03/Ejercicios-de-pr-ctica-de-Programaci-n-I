#include <stdio.h>
#include <stdlib.h>

main (void){
	float precio_neto,precio_coste,margen;
	
	printf("Introduzca el precio que ha costado el producto en euros: ");
	scanf("%f", &precio_coste);
	printf("\nIntroduzca el margen de beneficio deseado por la empresa en porcentaje: ");
	scanf("%f", &margen);
	precio_neto = precio_coste*(100+margen)/100;
	printf("\nEl precio neto del producto con un margen de (%f) es de %f",margen, precio_neto );
}
