#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159

int main (void){
	int grad;
	float r;
	scanf("%d", &grad);
	r=(pi/180)*grad;
	printf("%f", r);
	return 0;
}
