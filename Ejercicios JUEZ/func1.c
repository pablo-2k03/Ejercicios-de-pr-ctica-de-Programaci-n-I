#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
	float x,res1,res2,res3,res4;
	scanf("%f",&x);
	if(2<=x && x<=5){
		res1=log(x);
		printf("%f", res1);
	}
	else if(-1<=x && x<2){
		res2=exp(x+1);
		printf("%f", res2);
	}
	else if(x>5){
		res3= (x*x)-x;
		printf("%f", res3);
	}
	else{
		res4=(x*x)-(x*x*x);
		printf("%.1f", res4);
	}
	return 0;
}
