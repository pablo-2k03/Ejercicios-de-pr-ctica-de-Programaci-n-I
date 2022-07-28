#include <stdio.h>
#define max 25
int maximo(int (*mat)[max],int col,int fil,int *vec){
	int i,j,maximo=0;
	int colmax;
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("Elemento [%d] [%d] ==> ",i+1,j+1);
			scanf("%d",&mat[i][j]);
		}
	}
	
	for(j=0;j<col;j++){
		for(i=0;i<fil;i++){
			if(mat[i][j]>maximo && (i!=0 && j!=0)){
				maximo=mat[i][j];
				colmax=j;		
			}	
		}
	}
	for(i=0;i<fil;i++){
		vec[i]=mat[i][colmax];
	}
	return 0;
}
void presentar(int (*mat)[max],int fil,int col){
	int i,j;
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("%3d",mat[i][j]);
		}
		printf("\n");
	}
}
void presentar_col(int *vec,int dim,int col){
	int i;
	printf("\n\n");
	puts("MAXIMO DE CADA COLUMNA");
	for(i=0;i<col;i++)
		printf("%5d",vec[i]);
}
int main(){
	int mat[max][max],fil,col;
	int vec[max];
	do{
		printf("Introduzca cuantas filas desea ==> ");
		scanf("%d",&fil);
		printf("Introduzca cuantas columnas desea ==> ");
		scanf("%d",&col);	
	}
	while(fil<0 || col<0);
	maximo(mat,col,fil,vec);
	presentar(mat,fil,col);
	presentar_col(vec,max,col);
	return 1;
}

