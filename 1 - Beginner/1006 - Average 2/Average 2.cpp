//Read three values (variables A, B and C), which are the three student's grades. Then, calculate the average, considering that grade A has weight 2, grade B has weight 3 and the grade C has weight 5. Consider that each grade can go from 0 to 10.0, always with one decimal place.
//
//Input
//The input file contains 3 values of floating points (double) with one digit after the decimal point.
//
//Output
//Print the message "MEDIA"(average in Portuguese) and the student's average according to the following example, with a blank space before and after the equal signal.

#include<stdio.h>

double media(double num1, double num2, double num3){
	return (num1*2+num2*3+num3*5)/10;
}

int main(){
	double num1,num2,num3;
	scanf("%lf",&num1);
	scanf("%lf",&num2);
	scanf("%lf",&num3);
	printf("MEDIA = %.1lf\n",media(num1,num2,num3));
	return 0;
}
