#include <stdio.h>
#include <stdlib.h>
#define MIN 1
#define MAX 4
typedef struct{
    int **m;
    int fil;
    int col;
}Matriz;

int main(){
    Matriz A;
    int i,j;
    int **res;
    do{
        printf("Numero filas ==> ");
        scanf("%d",&A.fil);
    }
    while(A.fil<MIN ||A.fil>MAX);
    do{
        printf("Numero columnas ==> ");
        scanf("%d",&A.col);
    }
    while(A.col<MIN ||A.col>MAX);
    if(NULL==(res=(malloc(A.fil*sizeof(int *))))){
        return -1;
    }
    else{
        for(i=0;i<A.fil;i++){
            A.m[i] = malloc(A.col * sizeof(int));
        }
        for(i=0;i<A.fil;i++){
            for(j=0;j<A.col;j++){
                printf("Elemento [%d] [%d] ==> ",i+1,j+1);
                scanf("%d",&A.m[i][j]);
            }
        }
        printf("\n\n");
        for(i=0;i<A.fil;i++){
            for(j=0;j<A.col;j++){
                printf("%3d",A.m[i][j]);
            }
            printf("\n");
        }
    }
    system("pause");
    return 0;
}