#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define t '  '
#define MAX 1000

int main(){
	char lista[MAX],temp;
	int i,j,longi;
	//printf("Cadena ==> ");
	fgets(lista,MAX,stdin);
	longi=strlen(lista);
	if ((longi == 1) && (lista[longi - 1] == ''\''))
    {
        lista[strlen(lista) - 1] = '\0';
        printf("%s",lista);
    }
    else{
    	for(i=0,j=longi-1;i<longi/2;i++,j--){
			temp=lista[i];
			lista[i]=lista[j];
			lista[j]=temp;
		}
	printf("%s",lista);	
    }

	return 0;
}
