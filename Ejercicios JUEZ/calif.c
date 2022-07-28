#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
	Programa que calcula las calificaciones introducidas por teclado redondeadas.
*/

int main (void){
	float calif1,calif2;
	scanf("%f", &calif1);
	if(calif1<0){
		calif2=0;
		printf("%.1f", calif2);
	}
	else if(calif1>10){
		calif2=10;
		printf("%.1f", calif2);
	}
	else{
		calif2=roundf(calif1);
		printf("%.1f", calif2);
	}
	return 0;
}
