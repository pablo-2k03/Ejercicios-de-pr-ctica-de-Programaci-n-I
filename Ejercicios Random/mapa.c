#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define DIM 10
#define FIL 3
#define COL 4
char vletras[DIM]={'A','F','H','K','L','O','S','U','X','Z'};
int main(){
	setlocale(LC_ALL,"");
	char *mapa[FIL][COL],Mat[FIL][COL];
	int i,j,k;
	//Introducción por teclado y comprobaciones necesarias.
	for(i=0;i<FIL;i++){
		for(j=0;j<COL;j++){
			printf("Introduzca carácter [%d][%d]: ",i,j);
			fflush(stdin);
			scanf(" %c",&Mat[i][j]);
			for(k=0;k<DIM;k++){
				mapa[i][j]=&vletras[k];
				//Si la letra que hay en vletras es == a la que hay en Mat, se asigna al mapa la dirección.
				if(vletras[k]==Mat[i][j]){
					mapa[i][j]=&vletras[k];
					break;
				}
				//Y si no, se presenta como NULL.
				else{
					mapa[i][j]=NULL;
				}
			}
		}
	}
	//Imprimir Matriz Por Pantalla.
	for(i=0;i<FIL;i++){
		for(j=0;j<COL;j++){
			printf("%c ", Mat[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	puts("Mapa de carácteres.\n");
	//Imprimimos el mapa, y si no está el caracter, sacamos el * y si lo está, sacamos el caracter.	
	for(i=0;i<FIL;i++){
		for(j=0;j<COL;j++){
			if(mapa[i][j] == NULL){
				printf("* ");
			}else{
				printf("%c ", *(mapa[i][j]));
			}
		}
		printf("\n");
	}
	return 0;
}
