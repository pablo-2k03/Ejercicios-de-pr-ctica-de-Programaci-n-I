#include <stdio.h>
#include <stdlib.h>
#define fil 3
#define col 3
int Mat[fil][col];

int main(){
	int i,j,suma,nfila=0,mayorf=0;
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("Introduzca elementos [%d] [%d] ==>",i,j);
			scanf("%d",&Mat[i][j]);
		}
	}
	//Suma de los numeros de las filas.
	for(i=0;i<fil;i++){
		suma=0;
		nfila++;
		for(j=0;j<col;j++){
			suma+=Mat[i][j];
			if(suma>mayorf){
				mayorf=suma;	
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
	printf("\n\nLa fila con suma mayor es ==> %d con resultado %d",nfila,mayorf);
	return 0;	
}
