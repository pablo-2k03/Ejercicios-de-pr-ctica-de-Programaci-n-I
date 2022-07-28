#include <stdio.h>
#include <stdlib.h>

/*
	Programa que calcula la serie de números armónicos.
	Realizado el 23/10/2021.
*/
int main(){
	int x,frac,den,i;
	float total;
	den=1;
	scanf("%d",&x);
	if(x<=0){
		printf("0");
	}
	for(i=x; i>0; i--){
		total+= 1/(float)i;
	}
	printf("%f",total);
	return 0;
}
