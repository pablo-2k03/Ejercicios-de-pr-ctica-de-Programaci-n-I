#include <stdio.h>
#include <stdlib.h>

int main (void){
	int a,b,c;
	printf("Lados de un tri�ngulo: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && a==c){
		printf("El tri�ngulo es equilatero.");
	}
	else if(a==b || a==c || b==c){
		printf("El tri�ngulo es is�sceles.");
	}
	else{
		printf("El tri�ngulo es escaleno.");
	}
	return 0;
}
