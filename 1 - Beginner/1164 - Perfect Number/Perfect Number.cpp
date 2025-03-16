//In mathematics, a perfect number is an integer for which the sum of all its own positive divisors (excluding itself) is equal to the number itself. For example the number 6 is perfect, because 1+2+3 is equal to 6. Your task is to write a program that read integer numbers and print a message informing if these numbers are perfect or are not perfect.
//
//Input
//The input contains several test cases. The first contains the number of test cases N (1 = N = 100). Each one of the following N lines contains an integer X (1 = X = 108), that can be or not a perfect number.
//
//Output
//For each test case print the message “X eh perfeito” (X is perfect) or “X nao eh perfeito” (X isn't perfect) according with to above specification.

#include<stdio.h>

int isPerfect(int num){
	int soma=0;
	for(int i=1;i<=num/2;i++){
		if(num%i==0){
			soma+=i;
		}
	}
	if(soma == num){
		return 1;
	}
	return 0;
}

int main(){
	int casos,num;
	scanf("%d",&casos);
	while(0<casos){
		scanf("%d",&num);
		if(isPerfect(num)){
			printf("%d eh perfeito\n",num);
		}else{
			printf("%d nao eh perfeito\n",num);
		}
		casos--;
	}
	return 0;
}
