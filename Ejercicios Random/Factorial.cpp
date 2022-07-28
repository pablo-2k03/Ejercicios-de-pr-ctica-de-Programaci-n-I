#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
	setlocale(LC_ALL,"");
	long fact = 1;
	int num1;
	printf("Introduzca un número: ");
	scanf("%d", &num1);
	while(num1>0){ //El while siempre con {}  después de los parentesis
		fact=fact*num1;
		num1-=1;
	}
	printf("\nEl factorial del número introducido es: %li", fact); //li de tipo de dato para variables declaradas como long
	system("pause");
	return 0;
}
