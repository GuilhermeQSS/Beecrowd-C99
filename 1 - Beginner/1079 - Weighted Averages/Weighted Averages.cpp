//Read an integer N, which represents the number of following test cases. Each test case consists of three floating-point numbers, each one with one digit after the decimal point. Print the weighted average for each of these sets of three numbers, considering that the first number has weight 2, the second number has weight 3 and the third number has weight 5.
//
//Input
//The input file contains an integer number N in the first line. Each N following line is a test case with three float-point numbers, each one with one digit after the decimal point.
//
//Output
//For each test case, print the weighted average according with below example.

#include<stdio.h>

double media(double x1, double x2, double x3){
	return (x1*2+x2*3+x3*5)/10;
}

int main(){
	int casos;
	double x1,x2,x3;
	scanf("%d",&casos);
	while(0<casos){
		scanf("%lf%lf%lf",&x1,&x2,&x3);
		printf("%.1lf\n",media(x1,x2,x3));
		casos--;
	}
	return 0;
}
