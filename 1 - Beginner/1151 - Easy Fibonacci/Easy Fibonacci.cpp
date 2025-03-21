//The following sequence of numbers 0 1 1 2 3 5 8 13 21 ... is known as the Fibonacci Sequence. Thereafter, each number after the first 2 is equal to the sum of the previous two numbers. Write an algorithm that reads an integer N (N < 46) and that print the first N numbers of this sequence.
//
//Input
//The input file contains an integer number N (0 < N < 46).
//
//Output
//The numbers ??should be printed on the same line, separated by a blank space. There is no space after the last number.

#include<stdio.h>

void printFibonacci(int n){
	int atual=1,anterior=0,posterior;
	while(0<n){
		printf("%d",anterior);
		if(!0<n){
			printf(" ");
		}else{
			printf("\n");
		}
		posterior=atual+anterior;
		anterior=atual;
		atual=posterior;
		n--;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	printFibonacci(n);
	return 0;
}
