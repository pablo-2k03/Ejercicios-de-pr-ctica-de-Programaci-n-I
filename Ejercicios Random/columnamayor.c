#include <stdio.h>
#include <stdlib.h>
#define fil 3
#define col 3
int Mat[fil][col];

int main(){
	int i,j,suma,ncol=0,mayorc=0;
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("Introduzca elementos [%d] [%d] ==>",i,j);
			scanf("%d",&Mat[i][j]);
		}
	}
	//Suma de los numeros de las columnas.
	for(j=0;j<col;j++){
		suma=0;
		ncol++;
		for(i=0;i<fil;i++){
			suma+=Mat[i][j];
			if(suma>mayorc){
				mayorc=suma;	
			}
		}
	}
	puts("=========MATRIZ==========");
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("%d",Mat[i][j]);
		}
		printf("\n");
	}
	puts("===========================");
	printf("\n\nLa columna con suma mayor es ==> %d con resultado %d",ncol,mayorc);
	return 0;	
}
