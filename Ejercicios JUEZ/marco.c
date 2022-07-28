#include <stdio.h>
#include <stdlib.h>
#define MAX 25
int main(){
	int fil,col,i,j,lista[MAX][MAX],interior=0,exterior=0;
	//printf("Introduzca filas y columnas ==> ");
	scanf("%d %d",&fil,&col);
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			//printf("Introduzca elemento [%d][%d] ==> ",i,j);
			scanf("%d",&lista[i][j]);
		}
	}
	//Sumar elementos.
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			if(i==0 || i==fil-1 || j==0 || j==col-1)
				exterior+=lista[i][j];
			else
				interior+=lista[i][j];
		}
	}
	/*for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("%d ",lista[i][j]);
		}
		printf("\n");
	}*/
	printf("Borde:    %d\nInterior: %d\n",exterior,interior);
	if(exterior>interior)
		printf("La matriz es un marco.");
	else
		printf("La matriz no es un marco.");
	return 0;
}
