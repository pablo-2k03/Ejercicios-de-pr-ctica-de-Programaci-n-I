#include <stdio.h>
#include <stdlib.h>
#define MIN 1
#define MAX 4

typedef struct{
    int **m;
    int fil;
    int col;
}Matriz;
void pedir_datos(Matriz M){
    do{
        printf("Numero filas ==> ");
        scanf("%d",&M.fil);
    }
    while(M.fil<MIN ||M.fil>MAX);
    do{
        printf("Numero columnas ==> ");
        scanf("%d",&M.col);
    }
    while(M.col<MIN ||M.col>MAX);
}
int *comprobar_espacio(Matriz A,int *p){
    if(NULL==(p=(malloc(A.fil*sizeof(int *)))))
        return NULL;
    else
        return p;
}
void carga_Datos(Matriz A){
    int i,j;
    for(i=0;i<A.fil;i++){
        for(j=0;j<A.col;j++){
            printf("Elemento [%d][%d] ==> ",i+1,j+1);
            scanf("%d",&A.m[i][j]);
        }
    }
}
void presenta_Matriz(Matriz A){
    int i,j;
    for(i=0;i<A.fil;i++){
        for(j=0;j<A.col;j++){
            printf("%3d",A.m[i][j]);
        }
        printf("\n");
    }
}
int main(){
    Matriz A;
    int *p;
    int i;
    pedir_datos(A);
    if(comprobar_espacio(A,p)!=NULL){
        for(i=0;i<A.fil;i++){
            A.m[i] = malloc(A.col * sizeof(int));
        }
        carga_Datos(A);
        presenta_Matriz(A);
        free(p);
    }
    else{
        #ifdef DEBUG
            printf("Fallo a la hora de la reserva de las filas.\nPrograma abortado.");
        #endif
        return -1;
    }
    return 0;
}