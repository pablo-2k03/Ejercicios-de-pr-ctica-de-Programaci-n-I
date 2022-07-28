#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 50
#define MIN_SIZE 0
typedef struct{
    int fil;
    int col;
    int **m;
}Matriz;

typedef Matriz MatIntRef;

int* matcol(MatIntRef mat,int dev_col,int *p){
    int *vector;
    int i,j;
    
    if(((p=malloc(sizeof(MatIntRef)))==NULL))
        #if defined(DEBUG)
        #define DEBUG
        fprintf(stderr
        "Error reservando el espacio para la matriz.\n");
        #endif // DEBUG
        return NULL;
    else if((p=malloc(mat.fil*sizeof(int *)))==NULL)
        #if defined(DEBUG)
        #define DEBUG
        fprintf(stderr,"Error reservando el espacio para las filas.\n");
        #endif // DEBUG
        return NULL;
    else{
        for(i=0;i<mat.fil;i++){
            mat.m[i] = malloc(mat.col*sizeof(int));
        }
        printf("\n1\n");
        for(i=0;i<mat.fil;i++){
            for(j=0;j<mat.col;j++){
                printf("Elemento [%d] [%d] ==> ",i+1,j+1);
                scanf_s("%d",&mat.m[i][j]);
            }
        }
            for(j=0;j<mat.col;j++){
                i=0;
                if(j==dev_col){
                    vector[i]=mat.m[i][j];
                    i++;
                }
            }
        }
    return vector;
}
void presenta(MatIntRef mat){
    int i,j;
    for(i=0;i<mat.fil;i++){
        for(j=0;j<mat.col;j++){
            printf("%3d",mat.m[i][j]);
        }
    }
};
int main(){
    srand(time(NULL));
    int dev_col,*p,i;;
    MatIntRef mat;
    do{
        printf("Num Fil (1-50)==> ");
        scanf_s("%d",&mat.fil);
    }while(mat.fil<1 || mat.fil>50);
    do{
        printf("Num Col (1-50)==> ");
        scanf_s("%d",&mat.col);
    }while(mat.col<1 || mat.col>50);
    dev_col= rand() % mat.col+1;
    matcol(mat,dev_col,p);
    presenta(mat);
    for(i=0;i<mat.fil;i++){
        free(mat.m[i]);
    }
    free(mat.m);
    system("pause");
    return 0;
}