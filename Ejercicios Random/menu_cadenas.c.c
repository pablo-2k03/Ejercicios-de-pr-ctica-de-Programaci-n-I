#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define MAX 1000
#define t '  '

int main(){
	setlocale(LC_ALL,"");
	char lista[MAX],longi,temp,j,opcion=0,lista2[MAX],longi2,aux[MAX],l;
	int i,k;
	do{
		printf("\na): Invertir una cadena sobre otra.");
		printf("\nb): Invertir una cadena sobre si misma");
		printf("\nc): Salir del programa");
		printf("\n\nElija una opción ==> ");
		scanf("%c%*c",&opcion);
		
		switch(opcion){
			case 'a':
			case 'A':
				printf("\n\nIntroduzca la cadena ==> ");
				fgets(lista2,MAX,stdin);
				longi2=strlen(lista2);
				for(k=0;k<MAX;k++){ //Pasamos los caracteres de la lista2 a la auxiliar.
					aux[k]=lista2[k];
				}
				for(i=0,l=longi2-1;i<longi2/2;i++,l--){ //J empieza el en último caracter y se va decrementando.
					temp=lista2[i];
					lista2[i]=lista2[l];
					lista2[l]=temp;
				}
				printf("\nLa cadena original ==> %s\nLa cadena invertida ==> %s",aux,lista2);
				break;
			case 'b': 
			case 'B':
				printf("\n\nIntroduzca la cadena ==> ");
				fgets(lista,MAX,stdin); //fgets(nombre_var,num max de caracteres, lugar del que proviene).
				//Estudiamos la longitud de la cadena.
				longi=strlen(lista); 
				//Vamos alternando los valores de la cadena.
				for(i=0,j=longi-1;i<longi/2;i++,j--){ //J empieza el en último caracter y se va decrementando.
					temp=lista[i];
					lista[i]=lista[j];
					lista[j]=temp;
				}
				//Sacamos por pantalla la lista invertida.
				printf("\n\nLa cadena invertida es ==> %s",lista);
				printf("\n");
				break;
			case 'c':
			case 'C':
				printf("\nQue tenga un buen día.");
				exit;
				break;
			default:
				printf("\nSeleccione una opción válida.\n");
		}
	}
	while(opcion!='c');
}
