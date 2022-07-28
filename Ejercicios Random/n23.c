#include <stdio.h>
#define FIL 4
#define COL 4
float traza (float (*m)[COL]){
	int i,j,suma=0;
 	for(i=0;i<FIL;i++){
 		suma+=m[i][i];
 	}
 	return suma;
}
int simetrica (float (*m)[COL]){
	int i,j;
	for(i=1;i<=FIL;i++){
		for(j=0;j<COL;j++){
			if(m[i][j]!=m[i-1][j+1])
				return 0;
		}
	}
	return 1;
}
int main(){
	float m[FIL][COL];
	int i,j;
	for(i=0;i<FIL;i++){
		for(j=0;j<COL;j++){
			printf("Introduzca elemento [%d] [%d] ==> ",i+1,j+1);
			scanf("%f",&m[i][j]);
		}
	}
	printf("TRAZA ==> %.0f ",traza(m));
	if(simetrica==0)
		printf("\nLa matriz no es simEtrica.");
	else;
		printf("\nLa matriz es simEtrica.");
}
