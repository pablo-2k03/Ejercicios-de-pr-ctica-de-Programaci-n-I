#include <stdio.h>
#include "stdlib.h"
#include <locale.h>

int main (void){
	setlocale(LC_ALL,"");
	int a,cont,resto;
	cont=1;
	do{
	printf("Introduzca un número: ");
	scanf("%d",&a);
	}
	while(a<1);
	//Comprobamos si son primos.
	while(cont<a){
		resto=a/cont;
		if(resto!=0){
		cont+=1;
		}
		else{
			printf("El número %d no es primo.",a);
		}	
	}
	return 0;
}
