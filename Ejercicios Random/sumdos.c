#include <stdio.h>
#include <stdlib.h>
 
 //Programa que calcula la suma entre dos números introducidos (JUEZ Usal).
 
int main (void){
	int a,b,res,suma;
	scanf("%d %d",&a,&b);
	if(b<a){
		res=0;
		printf("%d", res);
	}
	else if(a==b){
		res=a;
		printf("%d", res);
	}
	else{
		for(a,b; a<=b; a++){
			suma+=a;
			if(a==b || a>b){
				break;
			}
		}
		printf("%d", suma);
	}
}
