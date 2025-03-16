//Read an integer N and compute all its divisors.
//
//Input
//The input file contains an integer value.
//
//Output
//Write all positive divisors of N, one value per line.

#include<stdio.h>

void printDivisores(int n){
	for(int i=1;i<=n/2;i++){
		if(n%i==0){
			printf("%d\n",i);
		}
	}
	printf("%d\n",n);
}

int main(){
	int n;
	scanf("%d",&n);
	printDivisores(n);
	return 0;
}
