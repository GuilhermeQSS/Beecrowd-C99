//Read an integer N. Print the square of each one of the even values from 1 to N including N if it is the case.
//
//Input
//The input contains an integer N (5 < N < 2000).
//
//Output
//Print the square of each one of the even values from 1 to N, as the given example.
//
//Be carefull! Some language automaticly print 1e+006 instead 1000000. Please configure your program to print the correct format setting the output precision.

#include<stdio.h>
#include<math.h>

void numsParAoQuadrado(int min, int max){
	if(min%2!=0){
		min++;
	}
	while(min<=max){
		printf("%d^2 = %.0lf\n",min,pow(min,2));
		min+=2;
	}
}


int main(){
	int max;
	scanf("%d",&max);
	numsParAoQuadrado(1,max);
	return 0;
}
