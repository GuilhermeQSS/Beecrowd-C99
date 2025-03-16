//Write an algorithm to calculate and write the value of S, S being given by:
//S = 1 + 3/2 + 5/4 + 7/8 + ... + 39/?
//
//Input
//There is no input in this problem.
//
//Output
//The output contains a value corresponding to the value of S.
//The value should be printed with two digits after the decimal point.

#include<stdio.h>

double SeqS2(){
	double s=0;
	for(int i=1,j=1;i<=39;i+=2,j*=2){
		s+=(double)i/j;
	}
	return s;
}

int main(){
	printf("%.2lf\n",SeqS2());
	return 0;
}
