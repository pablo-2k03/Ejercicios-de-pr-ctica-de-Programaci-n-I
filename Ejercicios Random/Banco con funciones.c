#include <stdio.h>
#include <stdlib.h>
int inicio_sesion(int pass){
	int verif=2022;
	if(pass!=verif)
		return 0;
	else
		return 1;
}
void error(){
	printf("\n\nERROR");
}
int menu(void){
	char opcion,correc;
	int bal=2000,retir1,total=0;
	do{
		printf("\t\t\t\t\t\tBienvenido al Banco Santander.");
		printf("\nQue operaciOn desea realizar?\n\na)Retirada de efectivo.\nb)Ingreso de efectivo.\nc)Salir del programa.");
		printf("\n\nElija ==> ");
		scanf("%s",&opcion);
		switch(opcion){
			case 'a':
			case 'A':
				system("cls");
				printf("Ingrese la cantidad de dinero que desee retirar ==> ");
				scanf("%d",&retir1);
				printf("\n\nLa cantidad de %d euros es correcta? (s/n) ==> ",retir1);
				scanf("%s",&correc);
				if(correc=='s'){
					total=bal-retir1;
					printf("\n\nEl saldo disponible en la cuenta actualmente es de %d euros.",total);
					sleep(5);
					system("cls");
					break;
				}
				else{
					printf("\n\n\nAcuda a una ventanilla para que alguien le pueda ayudar. Disculpe las molestias.");
					sleep(5);
					system("cls");
					break;
				}
			case 'B':
			case 'b':
				system("cls");
				printf("Ingrese la cantidad de dinero que desee abonar ==> ");
				scanf("%d",&retir1);
				printf("\n\nLa cantidad de %d euros es correcta? (s/n) ==> ",retir1);
				scanf("%s",&correc);
				if(correc=='s'){
					total=bal+retir1;
					printf("\n\nEl saldo disponible en la cuenta actualmente es de %d euros.",total);
					sleep(5);
					system("cls");
					break;
				}
				else{
					printf("\n\n\nAcuda a una ventanilla para que alguien le pueda ayudar. Disculpe las molestias.");
					sleep(5);
					system("cls");
					break;
				}
			case 'C':
			case 'c':
				system("cls");
				printf("\n\nQue pase un buen dia.");
				break;
			default:
				system("cls");
				printf("\n\n\tSeleccione una opciOn vAlida.");
				sleep(5);
				system("cls");
				break;
		}
	}while(opcion!='c');
	return 1;
}
int main(){
	int pass;
	printf("\t\t\t\t\t\tInicio SesiOn\n\nIntroduzca su identificaciOn por favor ==> ");
	scanf("%d",&pass);
	system("cls");
	inicio_sesion(pass);
	if(inicio_sesion(pass)==1) //1 Pasa, 0 Falla
		menu();
	else
		error();
	return 0;
}
