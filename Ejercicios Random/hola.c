#include <stdio.h>

int main(){
	int *x,*y,temp=0;
	printf("Valores X e Y ==> ");
	scanf("%d %d",&x,&y);
	printf("Intercambio ==>%d %d",intercambio(x,y));
}
int intercambio(int *x,int *y){
	int temp=0;
	temp=*x;
	*x=*y;
	*y=temp;
	return *x;
}
