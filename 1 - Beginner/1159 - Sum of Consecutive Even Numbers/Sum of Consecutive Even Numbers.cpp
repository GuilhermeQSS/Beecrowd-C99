//The program must read an integer X indefinite times (stop when X=0). For each X, print the sum of five consecutive even numbers from X, including it if X is even. If the input number is 4, for example, the output must be 40, that is the result of the operation: 4+6+8+10+12. If the input number is 11, for example, the output must be 80, that is the result of 12+14+16+18+20.
//
//Input
//The input file contains many integer numbers. The last one is zero.
//
//Output
//Print the output according to the example below.

#include<stdio.h>

int somaDePares(int num){
	int soma=0;
	if(num%2!=0){
		num++;
	}
	for(int i=0;i<5;i++){
		soma+=num;
		num+=2;
	}
	return soma;
}

int main(){
	int num;
	scanf("%d",&num);
	while(num!=0){
		printf("%d\n",somaDePares(num));
		scanf("%d",&num);
	}
	return 0;
}
