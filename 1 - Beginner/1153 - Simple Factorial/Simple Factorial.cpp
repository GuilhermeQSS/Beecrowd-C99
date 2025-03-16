//Read a value N. Calculate and write its corresponding factorial. Factorial of N = N * (N-1) * (N-2) * (N-3) * ... * 1.
//
//Input
//The input contains an integer value N (0 < N < 13).
//
//Output
//The output contains an integer value corresponding to the factorial of N.

#include<stdio.h>

int fatorial(int n){
	int fatorial=1;
	while(1<n){
		fatorial*=n--;
	}
	return fatorial;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",fatorial(n));
	return 0;
}
