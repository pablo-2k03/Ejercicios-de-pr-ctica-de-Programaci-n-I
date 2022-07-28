#include <stdio.h>
#define MAX_SIZE 50
int compara_listas (double *v1, double *v2, int len){
	int i;
	for(i=0;i<len;i++){
		if(v1[i]!=v2[i])
			return 0;
	}
	return 1;
}
carga_vectores(double *v1, double *v2, int len){
	int i;
	for(i=0;i<len;i++){
		printf("Introduzca elemento [%d] del primer vector ==> ",i+1);
		scanf("%f",&v1[i]);
	}
	for(i=0;i<len;i++){
		printf("Introduzca elemento [%d] del segundo vector ==> ",i+1);
		scanf("%f",&v2[i]);
	}
	return *v1;
	return *v2;
}
int main(){
	double v1[MAX_SIZE],v2[MAX_SIZE];
	int len;
	printf("Introduzca la longitud de los vectores ==> ");
	scanf("%d",&len);
	carga_vectores(v1,v2,len);
	compara_listas(v1,v2,len);
	if(compara_listas(v1,v2,len)==1)
		printf("\nLos vectores introducidos son iguales.");
	else
		printf("\nLos vectores introducidos son distintos.");	
	return 0;
}
