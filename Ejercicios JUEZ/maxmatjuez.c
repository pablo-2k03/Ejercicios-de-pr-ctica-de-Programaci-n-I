#include <stdio.h>
#include <stdlib.h>
#define MAX 25
#define MIN 1
int main(){
	int Mat[MAX][MAX],fil,col,i,j,maximo;
	do{
		//printf("Introduzca el numero de filas y columnas ==> ");
		scanf("%d %d",&fil,&col);
	}
	while(fil<MIN && col<MIN && fil>MAX && col>MAX);
	for(i=1;i<=fil;i++){
		for(j=1;j<=col;j++){
			//printf("Introduzca los elementos [%d][%d] ==> ",i,j);
			scanf("%d",&Mat[i][j]);
		}
	}
	//Maximo
	maximo=Mat[0][0];
	for(i=1;i<=fil;i++){
		for(j=1;j<=col;j++){
			if(Mat[i][j]>maximo){
				maximo=Mat[i][j];
			}
			else{
				maximo=maximo;
			}
		}
	}
	printf("%d\n",maximo);
	for(i=1;i<=fil;i++){
		for(j=1;j<=col;j++){
			if(Mat[i][j]==maximo){
				printf("\n%d,%d\n",i,j);
			}
		}
	}
	return 0;
}
