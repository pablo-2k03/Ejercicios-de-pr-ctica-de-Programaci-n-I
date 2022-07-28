#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415

int main(){
	float x,y,r,theta;
	scanf("%f %f",&x,&y);
	r=sqrt(x*x+y*y);
	theta=atan2(y,x);
	theta*=180/PI;
	if(theta<0){
		theta+=360;
	}
	printf("%f %f",r,theta);
	return 0;
}
