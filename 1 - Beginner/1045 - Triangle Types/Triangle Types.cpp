//Read 3 double numbers (A, B and C) representing the sides of a triangle and arrange them in decreasing order, so that the side A is the biggest of the three sides. Next, determine the type of triangle that they can make, based on the following cases always writing an appropriate message:
//
//    if A = B + C, write the message: NAO FORMA TRIANGULO
//    if A2 = B2 + C2, write the message: TRIANGULO RETANGULO
//    if A2 > B2 + C2, write the message: TRIANGULO OBTUSANGULO
//    if A2 < B2 + C2, write the message: TRIANGULO ACUTANGULO
//    if the three sides are the same size, write the message: TRIANGULO EQUILATERO
//    if only two sides are the same and the third one is different, write the message: TRIANGULO ISOSCELES
//
//
//Input
//The input contains three double numbers, A (0 < A) , B (0 < B) and C (0 < C).
//
//Output
//Print all the classifications of the triangle presented in the input.

#include<stdio.h>
#include<math.h>

int isTriangulo(double a, double b, double c){
	return b+c>a;
}
int isTrianguloRETANGULO(double a, double b, double c){
	return pow(a,2)==pow(b,2)+pow(c,2);
}
int isTrianguloOBTUSANGULO(double a, double b, double c){
	return pow(a,2)>pow(b,2)+pow(c,2);
}
int isTrianguloACUTANGULO(double a, double b, double c){
	return pow(a,2)<pow(b,2)+pow(c,2);
}
int isTrianguloEQUILATERO(double a, double b, double c){
	return a==b&&a==c;
}
int isTrianguloISOSCELES(double a, double b, double c){
	return a==b||a==c||b==c;
}
void aMaior(double *a, double *b, double *c){
    double aux;
    if (*b>*a) {
        aux=*a;
        *a=*b;
        *b=aux;
    }
    if (*c>*a) {
        aux=*a;
        *a=*c;
        *c=aux;
    }
}
int main(){
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    aMaior(&a,&b,&c);
    if(isTriangulo(a,b,c)){
    	if(isTrianguloRETANGULO(a,b,c)){
    		printf("TRIANGULO RETANGULO\n");
		}else if(isTrianguloOBTUSANGULO(a,b,c)){
			printf("TRIANGULO OBTUSANGULO\n");
		}else if(isTrianguloACUTANGULO(a,b,c)){
			printf("TRIANGULO ACUTANGULO\n");
		}
		if(isTrianguloEQUILATERO(a,b,c)){
			printf("TRIANGULO EQUILATERO\n");
		}else if(isTrianguloISOSCELES(a,b,c)){
			printf("TRIANGULO ISOSCELES\n");
		}
	}else{
		printf("NAO FORMA TRIANGULO\n");
	}
    return 0;
}
