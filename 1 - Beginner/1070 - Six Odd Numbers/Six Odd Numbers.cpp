//Read an integer value X and print the 6 consecutive odd numbers from X, a value per line, including X if it is the case.
//
//Input
//The input will be a positive integer value.
//
//Output
//The output will be a sequence of six odd numbers.

#include<stdio.h>

int proxsNumsImpares(int num, int qtdeNums){
	if(num%2==0){
		num++;
	}
	for(int i=0;i<qtdeNums;i++){
		printf("%d\n",num);
		num+=2;
	}
}

int main(){
	int num;
	scanf("%d",&num);
	proxsNumsImpares(num,6);
	return 0;
}
