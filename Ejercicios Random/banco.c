#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 25

int main(){
	setlocale(LC_ALL,"");
	int bal=99999,pass=1234,intentos=3,ret=0;
	char o,s,o2,a,b,c;
	//Inicio Sesión.
	do{
		puts("\n=========================== Inicio de Sesión ===========================\n");
		puts("Introduzca la tarjeta.");
		sleep(5);
		printf("\nPIN ==> ");
		scanf("%d",&pass);
		if(pass!=1234)
			intentos--;
	}
	while(pass!=1234 && intentos>0);
	//Bloqueo de Seguridad.
	if(intentos==0){
		printf("\nLa tarjeta ha quedado bloqueada, por favor, dirijase a nuestras oficinas.");
		return 0;
	}
	//Menu de Opciones.
	system("cls");
	do{
		puts("=========================== Bienvenido señor () al Banco Santander ===========================\n");
		printf("Seleccione la operación que desee realizar.\na)Abono.\nb)Retirada.\nc)Salir.\n\nElija una opción ==> ");
		scanf(" %c",&o);
		switch(o){
			case 'A':
			case 'a':
				puts("Ingrese la cantidad que desee abonar en el cajero.\n");
				sleep(5);
				puts("Cantidad abonada correctamente.\n");
				puts("Gracias por utilizar nuestros servicios, que pase un buen día.");
				return 0;
				break;
			case 'b':
			case 'B':
				puts("Ingrese la cantidad que desee retirar.\n");
				scanf("%d",&ret);
				if(ret<bal){
					printf("Saldo Actual ===> %d\n",bal);
					printf("Saldo después de la operación ==> %d\n",bal-ret);
					printf("Desea continuar? (s/n)\n");
					scanf(" %c",&o2);
					if(o2=='s'){
						printf("Recoja el dinero por favor.\n");
						puts("Gracias por utilizar nuestros servicios, que pase un buen día.");
						return 0;	
					}
					else{
						printf("Operación Abortada.");
						return 0;
					break;
					}
				}
			case 'c':
			case 'C':
				puts("\nQue tenga un buen día.");
				return 0;
				break;
			default:
				puts("\nIntroduzca una opción válida.");
		}
	}
	while(o!=c);
	return 0;
}
