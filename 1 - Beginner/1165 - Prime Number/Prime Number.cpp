//A Prime Number is a number that is divisible only by 1 (one) and by itself. For example the number 7 is Prime, because it can be divided only by 1 and by 7.
//
//Input
//The input contains several test cases. The first contains the number of test cases N (1 = N = 100). Each one of the following N lines contains an integer X (1 < X = 107), that can be or not a prime number.
//
//Output
//For each test case print the message “X eh primo” (X is prime) or “X nao eh primo” (X isn't prime) according with to above specification.

#include<stdio.h>

int isPrime(int num){
	int i=2;
	while(i<=num/2 && num%i!=0){
		i++;
	}
	if(i>num/2){
		return 1;
	}
	return 0;
}

int main(){
	int casos,num;
	scanf("%d",&casos);
	while(0<casos){
		scanf("%d",&num);
		if(isPrime(num)){
			printf("%d eh primo\n",num);
		}else{
			printf("%d nao eh primo\n",num);
		}
		casos--;
	}
	return 0;
}
