#include <stdio.h>
#include <stdlib.h>
int main(){
	int x,udsm2,udsm1,cent,dec,uds,suma,res,cont;
	scanf("%d",&x);
	if(10000<=x && x<=99999){
		udsm2=x/10000;
		udsm1=(x/1000)%10;
		cent=(x/100)%10;
		dec=(x/10)%10;
		uds=x%10;
		if(udsm2%2==0){
			udsm2*=4;
			udsm1*=8;
			cent*=5;
			dec*=10;
		}
		else{
			udsm2*=9;
			udsm1*=7;
			cent*=3;
			dec*=6;
		}
		suma=udsm2+udsm1+cent+dec;
		res=suma%11;
		cont=11-res;
		if(cont==10){
			cont=1;
		}
		else{
			cont=cont;
		}
		if(cont==uds){
			printf("\nD�gito de control del c�digo Dharma........: %d",uds);
			printf("\nD�gito de control calculado para la ENTIDAD: %d",cont);
			printf("\nEl c�digo Dharma es correcto");
		}
		else{
			printf("\nD�gito de control del c�digo Dharma........: %d",uds);
			printf("\nD�gito de control calculado para la ENTIDAD: %d",cont);
			printf("\nEl c�digo Dharma NO es correcto");	
		}	
	}
	else{
		printf("C�digo Dharma no tiene 5 d�gitos");
	}
	return 0;
}
