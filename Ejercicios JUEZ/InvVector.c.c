#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 1000

int main(){
	setlocale(LC_ALL,"");
	int lista[MAX],n,i,k,j,temp;
	//Declaramos el espacio del vector.
	printf("Introduzca el n�mero de elementos que desea a�adir al vector ==> ");
	scanf("%d",&n);
	lista[n];
	//A�adir elementos a un vector.
	for(i=0;i<n;i++){
		printf("Introduzca los elementos del vector ==> ");
		scanf("%d",&k);
		lista[i]=k;
	}
	//Inversi�n del vector sacandolo por pantalla.
	for(j=n-1;j>=0;j--){
		printf("%d ",lista[j]);
	}
}
