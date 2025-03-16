//Write an algorithm to calculate and write the value of S, S being given by:
//S = 1 + 1/2 + 1/3 + … + 1/100
//
//Input
//There is no input in this problem.
//
//Output
//The output contains a value corresponding to the value of S.
//The value should be printed with two digits after the decimal point.

#include<stdio.h>

double SeqS(){
	double s=0;
	for(int i=1;i<=100;i++){
		s+=(double)1/i;
	}
	return s;
}

int main(){
	printf("%.2lf\n",SeqS());
	return 0;
}
