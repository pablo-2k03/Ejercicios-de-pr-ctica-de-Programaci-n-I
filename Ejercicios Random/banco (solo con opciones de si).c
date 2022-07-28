#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main (void){
	setlocale(LC_ALL,"");
	int ab1,ret2,sal3,respuesta1,respuesta2,pass; //ab1 (Abono primer panel), ret2 (retirada primer condicional), sal3 (salir primer panel), respuesta1 (Selección de operación), respuesta2 (Respuesta 1º Condicional abono)
	float abono,retirada,cantidad_correcta;
	char si,no; //s Si n NO
	
	//Comenzaremos creando el menú de selección y introducción del Pin.
	pass=1627;
	printf("\nBienvenido al Cajero Automático de Caja Rural, por favor, introduzca su PIN: ");
	scanf("%d",&pass);
	if (pass==1627){
			printf("\n\nBienvenido a Caja Rural, seleccione la operación a realizar por favor: \n\n1-Abono\n2-Retirada\n3-Salir\n\n");
			scanf("%d", &respuesta1);
			//Primer Condicional para Abono
		if (respuesta1==1){
			printf("\nIntroduzca la cantidad que desee abonar: ");
			scanf("%f", &abono);
			printf("\nUsted ha decidido abonar %.2f euros, es correcto? (si/no)\n\n", abono);
			scanf("%d", &respuesta2);
			if(respuesta2==si){
				printf("\nLa cantidad de %.2f euros ha sido abonada en su cuenta.", abono);
				printf("\n\nQue tenga un buen día.");
				return 0;
			}
			else if(respuesta2==no){
				printf("Por favor, vuelva a introducir la cantidad que desee abonar: ");
				printf("Usted ha elegido abonar %f euros, es correcto?(si/no)\n",cantidad_correcta);
				scanf("%f",&cantidad_correcta);
				if (respuesta1==si){
					printf("La cantidad de %f ha sido abonada con éxito.");
					printf("Que tenga un buen día.");
					return 0;	
				}
				else if(respuesta1==no){
					printf("\nRecoja la tarjeta por donde la ha introducido y pongase en contacto con Atención al Cliente.");
					printf("\n\nQue tenga un buen día");
					return 0;
				}
			}
		}
		//Sentencias para Retirada de efectivo.
		else if(respuesta1==2){
			printf("\nIntroduzca la cantidad que desee retirar: ");
			scanf("%f", &retirada);
			printf("\nUsted ha decidido retirar %.2f euros, es correcto? (si/no)\n\n", retirada);
			scanf("%d", &respuesta2);
			if(respuesta2==si){
				printf("\nPuede recoger la cantidad seleccionada por la ranura habilitada.");
				printf("\n\nQue tenga un buen día.");
				return 0;
			}
		}
		//Sentencias para Salir del Programa.
		else{
			printf("\nQue tenga un buen día.");
			return 0;
		}
	}
	else{
		printf("\nPIN Incorrecto, revise de nuevo el PIN introducido.");
		printf("\n\nSi necesita ayuda, no dude en contactar con Atención al cliente, un saludo.");
		return 0;
	}
}
