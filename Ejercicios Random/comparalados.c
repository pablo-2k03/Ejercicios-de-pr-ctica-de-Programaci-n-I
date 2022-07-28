#include <stdio.h>
#include <math.h>
float calcula_area(int a,int b,int c);
int main(){
	float a,b,c;
	printf("Introduzca los lados de un triAngulo ===> ");
	scanf("%f %f %f",&a,&b,&c);
	printf("El triAngulo es %d\nEl Area del triAngulo es %f metros cuadrados.",compara(a,b,c),calcula_area(a,b,c));
	return 0;
}
int compara(a,b,c){
	if(a==b && a==c)
		return 1; //Triangulo Equilatero
	else if(a==b && a!=c)
		return 2; //Triangulo Isosceles
	else
		return 0; //Triangulo escaleno
}
float calcula_area(a,b,c){
	float p,area2;
	p=(a+b+c)/2.0;
	area2=((p*(p-a))*(p-b))*(p-c);
	area2=sqrt(area2);
	return area2;
}
