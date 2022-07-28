#include <stdio.h>
#include <stdlib.h>

int main(){
	int num,den,c,a,b,total;
	//printf("Introduzca una fracción ==> ");
	scanf("%d/%d",&num,&den);
	//Calculamos el MCD.
	a=num;
	b=den;
	do{
		c=a%b;
		if(c<0 || c>0){
			a=b;
			b=c;
		}
	}
	while(c!=0);
	if(den<0 && num!=0 && num%den==1){
		printf("%d/%d",-num,-den);
	}
	else if(num%b==0 && den%b==0 && num%den!=0){
		num/=b;
		den/=b;
		printf("%d/%d",num,den);
	}
	else if(den==b){
		total=num/den;
		printf("%d",total);
	}
	else if(num==0){
		printf("0");
	}
	return 0;
}
