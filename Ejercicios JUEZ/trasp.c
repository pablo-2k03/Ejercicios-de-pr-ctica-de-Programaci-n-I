#include <stdio.h>
#include <stdlib.h>
#define fil 3
#define col 3
int main(){
	int Tab[fil][col],i,j;
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("Elemento [%d] [%d] ==> ",i,j);
			scanf("%d",&Tab[i][j]);
		}
	}
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("%d",Tab[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(j=0;j<col;j++){
		for(i=0;i<fil;i++){
			printf("%d",Tab[i][j]);
		}
		printf("\n");
	}
	return 0;
}
