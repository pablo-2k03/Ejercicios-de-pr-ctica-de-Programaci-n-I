#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Programa que calcula el número del Tarot.

main(void){
	int fecha,d,m,a,suma,suma2,udsm,cent,decs,uds,decs2,uds2,tarot;
	scanf("%d",&fecha);
	a=(fecha/10000);
	m=(fecha/100)%100;
	d=fecha%100;
	suma=a+m+d;
	udsm=(suma/1000)%10;
	cent=(suma/100)%10;
	decs=(suma/10)%10;
	uds=suma%10;
	suma2=udsm+cent+decs+uds;
	decs2=(suma2/10)%10;
	uds2=suma2%10;
	tarot=decs2+uds2;
	printf("%d", tarot);
	return 0;
}
