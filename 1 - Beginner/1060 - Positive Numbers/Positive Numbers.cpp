//Write a program that reads 6 numbers. These numbers will only be positive or negative (disregard null values). Print the total number of positive numbers.
//
//Input
//Six numbers, positive and/or negative.
//
//Output
//Print a message with the total number of positive numbers.

#include<stdio.h>

int isPositive(double x){
	return x>0;
}

int main(){
	int positivos=0;
	double x;
	for(int i=0;i<6;i++){
		scanf("%lf",&x);
		if(isPositive(x)){
			positivos++;
		}
	}
	printf("%d valores positivos\n",positivos);
	return 0;
}
