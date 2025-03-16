//Read an integer value X (1 <= X <= 1000).  Then print the odd numbers from 1 to X, each one in a line, including X if is the case.
//
//Input
//The input will be an integer value.
//
//Output
//Print all odd values between 1 and X, including X if is the case.

#include<stdio.h>

int numsImpar(int min,int max){
	if(min%2==0){
		min++;
	}
	for(int i=min;i<=max;i+=2){
		printf("%d\n",i);
	}
}

int main(){
	int max;
	scanf("%d",&max);
	numsImpar(1,max);
	return 0;
}
