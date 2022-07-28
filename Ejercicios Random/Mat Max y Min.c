#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 25
int main(void){
	setlocale(LC_ALL,"");
	char Mat[MAX][MAX];
	int fil,col,i,j,max,min,cont;
	do{
		printf("Introduzca el número de filas y columnas ==> ");
		scanf("%d %d",&fil,&col);
	}
	while(fil<0 && fil>MAX && col<0 && col>25);
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("Elemento [%d][%d] ==> ",i,j);
			scanf("%d",&Mat[i][j]);
		}
	}
	//Maximo.
	max=Mat[0][0];
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			if(Mat[i][j]>max){
				max=Mat[i][j];
			}
			else{
				max=max;
			}
		}
	}
	//Minimo
	min=Mat[0][0];
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			if(Mat[i][j]<min){
				min=Mat[i][j];
			}
			else{
				min=min;
			}
		}
	}
	printf("\nMaximo ==> %d",max);
	printf("\nMínimo ==> %d",min);
	printf("\n");
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			if(Mat[i][j]==max){
				printf("\nLa fila y la columna de %d son %c %c",Mat[i][j],Mat[i],Mat[j]);
			}
		}
	}
	printf("\n");
	system("pause");
	return 0;
}
