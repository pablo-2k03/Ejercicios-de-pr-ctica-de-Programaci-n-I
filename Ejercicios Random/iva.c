#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 /*Fuente: iva.c
   Descripción: Cálculo del IVA general al 21% 
  */
 
int main (void){
	float precio_producto,pago1,produc_siniva,iva_final,pago2;
	
	printf("Introduzca el precio que le ha costado el producto con IVA incluido en euros: ");
	scanf("%f", &precio_producto);
	printf("Introduzca el importe para abonar el pedido: ");
	scanf("%f", &pago1);
	produc_siniva= precio_producto/1.21;
	printf("El producto introducido sin IVA costaria: %.2f euros", produc_siniva);
	iva_final=precio_producto-produc_siniva;
	printf("\nEl IVA del producto es de %.2f euros", iva_final);
	pago2=pago1-precio_producto;
	printf("\nSu cambio es de %.2f euros", pago2);
}
