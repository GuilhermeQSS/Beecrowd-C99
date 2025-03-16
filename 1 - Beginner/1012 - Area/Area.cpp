//Make a program that reads three floating point values: A, B and C. Then, calculate and show:
//a) the area of the rectangled triangle that has base A and height C.
//b) the area of the radius's circle C. (pi = 3.14159)
//c) the area of the trapezium which has A and B by base, and C by height.
//d) the area of ??the square that has side B.
//e) the area of the rectangle that has sides A and B.
//Input
//
//The input file contains three double values with one digit after the decimal point.
//Output
//
//The output file must contain 5 lines of data. Each line corresponds to one of the areas described above, always with a corresponding message (in Portuguese) and one space between the two points and the value. The value calculated must be presented with 3 digits after the decimal point.

#include<stdio.h>
#include<math.h>

double areaTrianguloRetangulo(double base, double altura){
	return (base*altura)/2;
}
double areaCirculo(double raio){
	return 3.14159*pow(raio,2);
}
double areaTrapezio(double base1, double base2, double altura){
	return (base1+base2)*altura/2;
}
double areaQuadrado(double lado){
	return pow(lado,2);
}
double areaRetangulo(double lado1, double lado2){
	return lado1*lado2;
}

int main(){
	double A,B,C;
	scanf("%lf%lf%lf",&A,&B,&C);
	printf("TRIANGULO: %.3lf\n",areaTrianguloRetangulo(A,C));
	printf("CIRCULO: %.3lf\n",areaCirculo(C));
	printf("TRAPEZIO: %.3lf\n",areaTrapezio(A,B,C));
	printf("QUADRADO: %.3lf\n",areaQuadrado(B));
	printf("RETANGULO: %.3lf\n",areaRetangulo(A,B));
	return 0;
}
