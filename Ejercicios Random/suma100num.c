#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(void){
	setlocale(LC_ALL,"");
	int num, suma;
	num=0;
	suma=0;
	while(num>=0 && num<100){
		num+=1;
		suma+=num;
	}
	printf("La suma de los 100 primeros números naturales es: %d ", suma);
}
 
