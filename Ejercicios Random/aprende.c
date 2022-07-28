#include <stdio.h>
#include <stdlib.h>
int calculo_serie(int);
int main(){
	int n;
	do{
		printf("Introduzca un nUmero entero ==> ");
		scanf("%d",&n);
	}
	while(n<1 || n>19);
	printf("La suma de 1 a %d es de ==> %d\nEl producto de 1 a %d es de ==> %d\n",n,calculo_serie(n),n,calculo_serie_multiplicacion(n));
	system("pause");
	return 0;
}
int calculo_serie(n){
	int suma=0,i;
	for(i=0;i<=n;i++){
		suma+=i;
	}
	return suma;
}
int calculo_serie_multiplicacion(n){
	int producto=1,i;
	for(i=1;i<=n;i++){
	   producto*=i;
	}
	return producto;
}
