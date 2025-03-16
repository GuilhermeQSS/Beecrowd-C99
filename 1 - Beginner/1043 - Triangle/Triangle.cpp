//Read three point floating values (A, B and C) and verify if is possible to make a triangle with them. If it is possible, calculate the perimeter of the triangle and print the message:
//
//
//Perimetro = XX.X
//
//
//If it is not possible, calculate the area of the trapezium which basis A and B and C as height, and print the message:
//
//
//Area = XX.X
//
//Input
//The input file has tree floating point numbers.
//
//Output
//Print the result with one digit after the decimal point.

#include <stdio.h>

double calcularPerimetro(double a, double b, double c){
	return a+b+c;
}
double calcularArea(double a, double b, double c){
	return ((a+b)*c)/2;
}

int main() 
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b)
        printf("Perimetro = %.1lf\n",calcularPerimetro(a,b,c));
    else
        printf("Area = %.1lf\n",calcularArea(a,b,c));
    return 0;
}
