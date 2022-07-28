#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159

int main(void){
	float r1,h2,a1,v2;
	printf("radio, altura: ");
	scanf("%f %f",&r1,&h2);
	a1=2*pi*r1*h2;
	v2=pi*(r1*r1)*h2;
	printf("\n%f\n%f",a1 ,v2);
	return 0;
}
