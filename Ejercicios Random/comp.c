#include <stdio.h>
#define MAX_SIZE 50
int compara_listas (double *v1, double *v2, int dm);

int main(){
	double v1[MAX_SIZE],v2[MAX_SIZE];
	int dm,i;
	do{
		printf("Introduzca una longitud (No superior a 50 ni inferior a 0) ==> ");
		scanf("%d",&dm);
	}
	while(dm<0 || dm>MAX_SIZE);
	for(i=0;i<dm;i++){
		printf("Elemento [%d] del primer vector ==> ",i);
		scanf("%f",&v1[i]);
	}
	for(i=0;i<dm;i++){
		printf("Elemento [%d] del segundo vector ==> ",i);
		scanf("%f",&v2[i]);
	}
	if(compara_listas(vec1,vec2,D)==0)
		printf("Los vectores introducidos son distintos.");
	else
		printf("Los vectores introducidos son iguales.");
	return 0;
}
int compara_listas (double *v1, double *v2, int dm){
	int i;
	for(i=0;i<dm;i++){
		if(v1[i]!=v2[i])
			return 0;
	}
	return 1;
}
