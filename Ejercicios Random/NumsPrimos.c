#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	Programa que calcula los n�meros primos.
*/

main(void){
	setlocale(LC_ALL,"");
	int a,resto,cont;
	cont=2;
	printf("Num: ");
	scanf("%d",&a);
	while(cont<=a){;
		resto=a%cont;
		cont+=1;
		if(resto==0){
			printf("El n�mero %d no es primo.",a);
			break;
		}
		else{
			printf("El n�mero %d es primo.",a);
			break;
		}
	}
}
