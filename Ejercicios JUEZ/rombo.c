#include <stdio.h>
#include <stdlib.h>
#define blanco ' '


int main(void) {
	int i,j,alt;
	char car;
	
	printf("Introduzca un car\240cter: ");
    scanf("%c",&car);
	printf("Introduzca una altura: ");
	scanf("%d",&alt);
	
	printf("\n\n");
	
	for (i=0;i<=alt;i++){  //Bucle para ir incrementando la altura
		
		for(j=1;j<=alt-i;j++){ //Comprueba que 1 sea menor que la altura introducida
			putchar(blanco);
		 }
		 
		 
		 for (j=1;j<=i;j++){ //
			putchar(car);
		}
		printf("\n");
    }
	
	
	for(i=1;i<=alt-1;i++){
		  	
		    for(j=1;j<=i;j++){
		    	putchar(blanco);
		    }	
		      for(j=1;j<=alt-i;j++){
		      	putchar(car);
		      }
		      printf("\n");
	}
		  
		printf("\n\n");
		
		
	
	printf("\n\n");
	system("PAUSE");
	return 0;
