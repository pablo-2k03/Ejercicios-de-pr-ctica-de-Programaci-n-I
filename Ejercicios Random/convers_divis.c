#include <stdio.h>
#include <stdlib.h>

int main(){
	float euros=0.0,val_lib=0.0,val_dol=0.0,eur_dolar=0.0,eur_libra=0.0,total1=0.0,total2=0.0,dolares=0.0,libras=0.0; 
	char o;
	do{
		puts("============================================================\n");
		puts("		Conversi\xA2n de divisas\n");
		puts("============================================================\n");
		printf("a) Introducir valores cotización divisas\n\nb)Convertir euros a d\xA2lares y libras\n\nc)Convertir d\xA2lares a euros y libras\n\nd)Convertir libras a euros y d\xA2lares\n\ns)Salir. ");
		printf("\n\nElija opción ==> ");
		scanf(" %c",&o);
		switch(o){
			case 'A':
			case 'a':
				system("cls");
				printf("\nIntroduzca cuantas libras son 1 euro: ");
				scanf("%f",&val_lib);
				printf("\nIntroduzca cuantos d\xA2lares son 1 euro: ");
				scanf("%f",&val_dol);
				system("cls");
				break;
			case 'B':
			case 'b':
				system("cls");
				printf("Introduzca importe en euros: ");
				scanf("%f",&euros);
				printf("\n");
				total1=euros*val_lib;
				total2=euros*val_dol;
				printf("%.4f Euros\n\n%.4f Libras (1 Euro= %.4f Libras)\n\n%.4f D\xA2lares (1 Euro = %.4f D\xA2lares)\n\n",euros,total1,val_lib,total2,val_dol);
				system("pause");
				system("cls");
				break;
			case 'C':
			case 'c':
				system("cls");
				printf("Introduzca importe en d\xA2lares: ");
				scanf("%f",&dolares);
				printf("\n");
				total1=dolares*0.88;
				total2=dolares*0.74;
				printf("%.4f D\xA2lares\n\n%.4f Euros (1 D\xA2lar= 0.88 Euros)\n\n%.4f Libras (1 D\xA2lar = 0.74 Libras)\n\n",dolares,total1,total2);
				system("pause");
				system("cls");
				break;
			case 'D':
			case 'd':
				system("cls");
				printf("Introduzca importe en libras: ");
				scanf("%f",&libras);
				printf("\n");
				total1=libras*1.18;
				total2=libras*1.34;
				printf("%.4f Libras\n\n%.4f Euros (1 Libra= 1.18 Euros)\n\n%.4f D\xA2lares (1 Libra = 1.34 D\xA2lares)\n\n",libras,total1,total2);
				break;
			case 'S':
			case 's':
				break;
			default:
				printf("Opci\xA2n Incorrecta.\n\n");
				system("pause");
				system("cls");
				break;	
		}
	}
	while(o!='s');
	printf("\n");
	system("pause");
	return 0;
}
