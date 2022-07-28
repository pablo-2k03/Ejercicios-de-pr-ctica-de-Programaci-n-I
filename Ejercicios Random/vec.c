#include <stdio.h>
#define MAX 25
float media_vector (int *la, int dim);

int main(){
	int i,la[MAX],DIM;
	do{
		printf("Cuantos elementos desea añadir al vector? (MAX 25) ==> ");
		scanf("%d",&DIM);	
	}
	while(DIM<0 || DIM>25);
	//Cargamos Vector
	for(i=0;i<DIM;i++){
		printf("Elemento [%d] ==> ",i+1);
		scanf("%d",&la[i]);
	}
	printf("La media del vector introducido es de ==> %.2f ",media_vector(la,DIM));
	return 0;
}
float media_vector (int *la, int DIM){
	float media;
	int i,suma=0,cont=0;
	for(i=0;i<DIM;i++){
		suma+=la[i];
		cont++;
	}
	media=suma/(float)cont;
	return media;
}
