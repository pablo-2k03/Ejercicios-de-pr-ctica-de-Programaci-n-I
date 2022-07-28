#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long *sorteo(long numParticipantes,long numPremios,long *auxi){
    int i,j;
    long *resultado;
    srand(time(NULL));
    if(numParticipantes<0) return NULL;
    if(numPremios<0) return NULL;
    if(numParticipantes <= numPremios) return NULL;
    if(NULL==(resultado=malloc(numPremios))){
        return NULL;
    }
    else{
        resultado[i]=rand() % numParticipantes+1;
        for(i=0;i<numPremios;i++){
            for(j=0;j<i;j++){
                if(resultado[i]==resultado[j])
                    i--;
                else
                    resultado[i]=rand() % numParticipantes+1;
            }
        }
    }
    for(i=0;i<numPremios;i++){
        auxi[i]=resultado[i];
    }
    free(resultado);
    return auxi;
}
int main(){
    long numParticipantes,numPremios,*auxi;
    puts("\n===================================\n");
    puts("\tSORTEO\n");
    puts("\n===================================\n");
    printf("\nNumero de participantes ==> ");
    scanf("%ld",&numParticipantes);
    printf("\nNumero de premios ==> ");
    scanf("%ld",&numPremios);
    printf("%3ld",sorteo(numParticipantes,numPremios,auxi));
    system("pause");
    return 0;
}
