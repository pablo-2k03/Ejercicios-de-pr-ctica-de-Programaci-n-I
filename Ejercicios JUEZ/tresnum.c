#include <stdio.h>
#include <stdlib.h>

int main (void){
	int num1,num2,num3,menor;
	scanf("%d %d %d",&num1,&num2,&num3);
	if(num1<num3 && num1<num2){
		menor=num1;
	}
	else if (num2<num1 && num2<num3){
		menor=num2;
	}
	else{
		menor=num3;
	}
	if(num1==num2 || num2==num3 || num1==num3){
		printf("No son diferentes");
	}
	else{
		printf("%d", menor);
	}
	return 0;
}
