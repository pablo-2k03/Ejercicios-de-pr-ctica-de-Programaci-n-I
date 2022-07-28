#include <stdio.h>
#include <stdlib.h>
#define MIN 3
#define MAX 25

int main(){
	int Mat[MAX][MAX],i,j,fil,col,exterior,interior;
	do{
		printf("Introduzca el número de filas y columnas ==> ");
		scanf("%d %d",&fil,&col);
	}
	while(fil<MIN || col<MIN);
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("Elemento [%d] [%d] ==> ",i,j);
			scanf("%d",&Mat[i][j]);
		}
	}
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			if(i==0 || i==fil-1 || j==0 || j==col-1)
				exterior+=Mat[i][j];
			else
				interior+=Mat[i][j];
		}
	}
	printf("Borde ==> %d\nInterior ==> %d\n",exterior,interior);
	if(exterior>interior)
		printf("La matriz es un marco.");
	else
		printf("La matriz NO es un marco.");
	return 0;
}
