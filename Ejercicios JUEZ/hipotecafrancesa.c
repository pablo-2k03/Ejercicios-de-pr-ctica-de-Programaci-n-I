#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
	int capital,plazo,p12;
	float interes,i12,num,exp,den,total;
	scanf("%d %f %d", &capital,&interes,&plazo);
	p12=12.0*plazo; //int
	i12=interes/12.0; //float
	num=capital*i12; //float
	den=100*(1-(pow(1+(i12/100),-p12))); //float
	total=num/den;
	printf("%f", total);
}
