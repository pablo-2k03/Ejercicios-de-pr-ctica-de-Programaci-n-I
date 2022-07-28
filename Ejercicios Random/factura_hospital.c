#include <stdio.h>
#include <stdlib.h>

main(void){
	char nombre [80];
	int dia,mes,anio;
	float num_dias,coste_dia,coste_cons,coste_meds,costes_divers,porc_deduc,deduc_seguro,coste_consultas,coste_total,deduc_total,total_a_pagar,coste_t_d_e,bon_dias,dias_fact;
	puts("======================================");
	puts(" CALCULO DE FACTURA HOSPITALARIA      ");
	puts("======================================");
	puts("\nDATOS DEL PACIENTE");
	printf(" Nombre: ");
	scanf("%s", &nombre);
	gets(nombre);
	puts(" Fecha de ingreso");
	printf("\t\n\tDia: ");
	scanf("%d", &dia);
	printf("  \n   Mes: ");
	scanf("%d", &mes);
	printf("  \n   Año: ");
	scanf("%d", &anio);
	printf("\nNúmero de dias ingresado: ");
	scanf("%f", &num_dias);
	printf("\n\nCOSTES");
	printf("\nCoste por dia: ");
	scanf("%f", &coste_dia);
	printf("\n Coste de las consultas: ");
	scanf("%f", &coste_consultas);
	printf("\n Coste de los medicamentos: ");
	scanf("%f", &coste_meds);
	printf("\n Costes diversos: ");
	scanf("%f", &costes_divers);
	printf("\n\nDEDUCCIONES");
	printf("\n Deducci\xA2n diaría del seguro: ");
	scanf("%f", &deduc_seguro);
	printf("\n Porcentaje deducci\xA2n ayuda de medicamentos: ");
	scanf("%f", &porc_deduc);
	bon_dias=(int)num_dias/4;
	dias_fact=num_dias-bon_dias;
	coste_t_d_e=coste_dia*dias_fact;
	deduc_total=deduc_seguro+porc_deduc;
	total_a_pagar=coste_total-deduc_total;
	if(dias_fact>=3){
		deduc_seguro=dias_fact*deduc_seguro;
		coste_total=coste_t_d_e+coste_consultas+coste_meds+costes_divers-deduc_seguro;
	}
	else if(coste_meds>90,00){
		coste_total=coste_t_d_e+coste_consultas+coste_meds+costes_divers-deduc_seguro-porc_deduc;
		deduc_total+=porc_deduc;
	}
	else{
		deduc_seguro=deduc_seguro;
	}
	puts("\n======================================");
	puts(" FACTURA HOSPITALARIA      ");
	puts("======================================");
	printf("\nPACIENTE............:%s",nombre);
	printf("\nINGRESO............:%d/%d/%d", dia,mes,anio);
	printf("\nDIAS INGRESADO............:%.2f", num_dias);
	printf("\n\nDIAS FACTURADOS............:%d", dias_fact);
	printf("\nCOSTE TOTAL DIAS DE ESTANCIA............:%d",coste_t_d_e);
	printf("\nCOSTE TOTAL............:%.2f", coste_total);
	printf("\n\nDIAS DEDUCCI\xA2N SEGURO............:%d", bon_dias);
	printf("\nDEDUCCI\xA2N POR MEDICAMENTOS............:%.2f", porc_deduc);
	printf("\nDEDUCCI\xA2N TOTAL............:%.2f", deduc_total);
	printf("\n\nTOTAL A PAGAR............:%.2f", total_a_pagar);
}
