#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"");
	int n,udsm,cent,dec,uds;
	scanf("%d", &n);
	udsm=(n/1000)%10;
	cent=(n/100)%10;
	dec=(n/10)%10;
	uds=n%10;
	printf("\nNúmero introducido........: %d",n);
	printf("\nUnidades de millar........: %d",udsm);
	printf("\nCentenas..................: %d",cent);
	printf("\nDecenas...................: %d",dec);
	printf("\nUnidades..................: %d",uds);
	return 0;
}
