#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main (void){
	int a,b,c;
	setlocale(LC_ALL,""); //Problema de las tildes resuelto.
	float radicando,total1,total2,raiz; //Total1 (+) Total2 (-)
	
	printf("Introduzca el valor de a: ");
	scanf("%d", &a);
	printf("Introduzca el valor de b: ");
	scanf("%d", &b);
	printf("Introduzca el valor de c: ");
	scanf("%d", &c);
	radicando=((b*b)-(4*a*c));
	raiz= sqrt(radicando);
	total1= (-b + raiz) / (2*a);
	total2= (-b-raiz) / (2*a);
	printf("\nLos resultados de la ecuación de segundo grado son %.2f %.2f\n", total1, total2); //Añadido \n al final por motivos estéticos de salida.
	
	system("pause");
	return 0;
}
