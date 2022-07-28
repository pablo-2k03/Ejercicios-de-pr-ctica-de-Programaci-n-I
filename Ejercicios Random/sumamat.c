#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define FMAX 25
#define CMAX 25

int main(){
	setlocale(LC_ALL,"");
	int MatA[FMAX][CMAX],MatB[FMAX][CMAX],MatTotal[FMAX][CMAX],i,j,fil,col;
	printf("Introduzca el número de filas y columnas  separado por un espacio ==> ");
	scanf("%d %d",&fil,&col);
	//Carga Datos MatA
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("Introduzca los elementos de la matriz. [%d] [%d] ===> ",i,j);
			scanf("%d",&MatA[i][j]);
		}
	}
	puts("\n\n==================Matriz A==================");
	//Presentación MatA en pantalla.
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("%d ",MatA[i][j]);
		}
		printf("\n");
	}
	puts("====================================");
	//Carga Datos MatB
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("Introduzca los elementos de la matriz. (Posición) ==> [%d][%d] ===> ",i,j);
			scanf("%d",&MatB[i][j]);
		}
	}
	puts("\n\n==================Matriz B==================");
	//Presentación MatB
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("%d ",MatB[i][j]);
		}
		printf("\n");
	}
	puts("====================================");
	//Suma
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			MatTotal[i][j]=MatA[i][j]+MatB[i][j];
		}
	}
	puts("\n\n==================Resultados==================");
	//Presentación Resultados
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("%d ",MatTotal[i][j]);
		}
		printf("\n");
	}
	puts("====================================");
}
