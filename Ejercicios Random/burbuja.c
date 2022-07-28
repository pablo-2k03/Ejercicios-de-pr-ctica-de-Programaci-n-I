#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

int main(){
	int n,i,temp,x[MAX],ordenado;
	printf("Introduzca la cantidad de elementos ==> ");
	scanf("%d",&n);
	//Carga de datos.
	for(i=0;i<n;i++){
		printf("Elemento %d?",i+1);
		scanf("%d",&x[i]);
	}
	
	//Ordenación Burbuja.
	ordenado=0;
	do{
		ordenado=1;
		for(i=0;i<n-1;i++){
			if(x[i+1]<x[i]){
				temp=x[i];
				x[i]=x[i+1];
				x[i+1]=temp;
				ordenado=0;
			}
		}	
	}
	while(!ordenado);
	//Sacar por pantalla Array ordenado.
	for(i=0;i<n;i++){
		printf("%d ",x[i]);
	}
	return 0;
}
