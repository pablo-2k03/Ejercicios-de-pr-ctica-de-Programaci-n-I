#include <stdio.h>
#include <stdlib.h>

int main(void){
	int fn,i,x,y,z;
	x=0;
	y=1;
	do{
		scanf("%d",&fn);
	}
	while(fn<0 && fn>50);
	if(fn==0){
		printf("0");
	}
	else if(fn==1){
		printf("1");
	}
	else{
		for(i=1; i<fn; i++){
			z=x+y; //Variable que suma los dígitos anteriores.
			x=y; //Le asignamos a X el valor de la variable posterior y la vamos incrementando.
			y=z; //Lo mismo para y.
		}
		printf("%d",z);
	}
	return 0;
}
