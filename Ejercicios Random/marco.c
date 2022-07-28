#include <stdio.h>
#define COL 3
void matrizMarco(int (*matriz)[COL],int fil, int col,int *tipoMarco){
    int i,j;
    int suma_ext=0,suma_int=0,suma_prim_col=0,suma_col=0;
    for(i=0;i<fil;i++)
        for(j=0;j<col;j++)
            if(i==0 || i==fil-1 || j==0 || j==col-1)
                suma_ext+=matriz[i][j];
            else
                suma_int+=matriz[i][j];

    if(suma_ext<suma_int)
        *tipoMarco=0;
    if(*tipoMarco){
        for(i=1;i<fil-1;i++){
            suma_prim_col+=matriz[i][1];
        }
        for(j=1;j<col-1;j++){
            suma_col=0;
            for(i=1;i<fil-1;i++)
                suma_col+=matriz[i][j];
            if(suma_col!=suma_prim_col)
                break;
        }
        *tipoMarco=1;
    }
    *tipoMarco=2;
}
int main(){
    int matriz[50][50],i,j;
    int fil=5,col=6;
    int tipoMarco;
    for(i=0;i<fil;i++){
        for(j=0;j<col;j++){
            printf("Elemento [%d] [%d] ==> ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }
    matrizMarco(matriz,fil,col,&tipoMarco);
    if(tipoMarco==0)
        printf("La matriz no es un marco");
    else if(tipoMarco==1)
        printf("La matriz es un marco pero no perfecto.");
    else   
        printf("La matriz es marco perfecto");
    return 0;
}