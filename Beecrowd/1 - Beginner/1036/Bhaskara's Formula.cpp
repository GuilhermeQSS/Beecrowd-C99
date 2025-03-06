//Read 3 floating-point numbers. After, print the roots of bhaskara’s formula. If it's impossible to calculate the roots because a division by zero or a square root of a negative number, presents the message “Impossivel calcular”.
//
//Input
//Read 3 floating-point numbers (double) A, B and C.
//
//Output
//Print the result with 5 digits after the decimal point or the message if it is impossible to calculate.

#include<stdio.h>
#include<math.h>

double calcularDelta(double A, double B, double C){
	return pow(B,2) - 4*A*C;
}
double calcularRaiz(int raiz, double A, double B, double delta){
	if(raiz==1){
		return (-B+sqrt(delta))/(2*A);
	}
	return (-B-sqrt(delta))/(2*A);
}

int main(){
	double A,B,C,delta;
	scanf("%lf%lf%lf",&A,&B,&C);
	if(A==0){
		printf("Impossivel calcular\n");
	}else{
		delta = calcularDelta(A,B,C);
		if(delta<0){
			printf("Impossivel calcular\n");
		}else{
			printf("R1 = %.5lf\n",calcularRaiz(1,A,B,delta));
			printf("R2 = %.5lf\n",calcularRaiz(2,A,B,delta));
		}
	}
	return 0;
}
