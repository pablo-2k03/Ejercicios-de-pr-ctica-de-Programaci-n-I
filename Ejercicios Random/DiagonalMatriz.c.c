#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 50
int main(){
	setlocale(LC_ALL,"");
	int Mat[MAX][MAX],i,j,fil,col;
	printf("\nIntroduzca el número de filas y columnas ==> ");
	scanf("%d %d",&fil,&col);
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("Elemento [%d] [%d] ==> ",i,j);
			scanf("%d",&Mat[i][j]);
		}
	}
	printf("\n");
	//Imprimir Mat.
	puts("=============================================================\n");
	puts("	      MATRIZ\n");
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("\t%d",Mat[i][j]);
		}
		printf("\n");
	}
	puts("\n============================================================");
	printf("\n");
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			if(i==j){
				printf("Elemento [%d][%d] de la diagonal principal ==> %d\n",i,j,Mat[i][j]);
			}
		}
	}
	return 0;
}
