//Read an array X[10]. After, replace every null or negative number of X ?by 1. Print all numbers stored in the array X.
//
//Input
//The input contains 10 integer numbers. These numbers ??can be positive or negative.
//
//Output
//For each position of the array, print "X [i] = x", where i is the position of the array and x is the number stored in that position.

#include<stdio.h>
int main(){
	int x[10];
	for(int i = 0;i<10;i++){
		scanf("%d",&x[i]);
		if(x[i]<=0){
			x[i] = 1;
		}
	}
	for(int i = 0;i<10;i++){
		printf("X[%d] = %d\n",i,x[i]);
	}
	return 0;
}
