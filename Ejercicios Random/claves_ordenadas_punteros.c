#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define DIM 15
#define MAX 7000
#define MIN 1000
int vec[DIM];
int main (){
	setlocale(LC_ALL,"");
	int i,j,flag,*claves[DIM],cont=0,n;
	for(i=0;i<DIM;i++){
		do{
			printf("Clave [%d] ==> ",i);
			scanf("%d",&vec[i]);
			if(vec[i]<MIN || vec[i]>MAX){
				printf("Valor no válido.\n");
				i--;
			}	
			flag=0;
			for(j=0;j<i;j++){
				if(vec[j]==vec[i]){
					printf("\nClave Repetida.\n");
					flag=1;
					i--;
				}
			}
		}
		while(vec[i]<MIN && vec[i]>MAX && flag==1);
	}
	puts("\nVector Introducido\n");
	for(i=0;i<DIM;i++)
		printf("%d ",vec[i]);
	printf("\n");
	//Ordenación por punteros.
	for(n=MIN;n<=MAX;n++){
		for(i=0;i<DIM;i++){
			if(n==vec[i]){
				claves[cont]=&vec[i];
				cont++;
			}
		}
	}
	puts("\nEl vector introducido con sus elementos ordenados de menor a mayor es:\n\n");
	for(i=0;i<DIM;i++){
		printf("%5.0d ",*claves[i]);
	}
	printf("\n\n");
	system("pause");
	return 0;
}
