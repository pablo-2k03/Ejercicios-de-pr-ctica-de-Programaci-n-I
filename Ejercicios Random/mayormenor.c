#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
	setlocale(LC_ALL,"");
	float num1,num2;
	printf("Introduzca el primer n�mero ==> ");
	scanf("%f", &num1);
	printf("Introduzca el segundo n�mero ==> ");
	scanf("%f", &num2);
	if(num1>num2)
	printf("El n�mero %.2f es mayor que el n�mero %.2f", num1, num2);
	else
	printf("El n�mero %.2f es mayor que el n�mero %.2f", num2,num1);
}
