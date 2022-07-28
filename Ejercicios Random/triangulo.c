#include <stdio.h>
#include <stdlib.h>

int main (void){
	int a,b,c;
	printf("Lados de un triángulo: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && a==c){
		printf("El triángulo es equilatero.");
	}
	else if(a==b || a==c || b==c){
		printf("El triángulo es isósceles.");
	}
	else{
		printf("El triángulo es escaleno.");
	}
	return 0;
}
