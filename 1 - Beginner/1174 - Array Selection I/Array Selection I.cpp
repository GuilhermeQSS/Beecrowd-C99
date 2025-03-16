//In this problem, your task is to read an array A[100]. At the end, print all array positions that store a number less or equal to 10 and the number stored in that position.
//
//Input
//The input contains 100 numbers. Each number can be integer, floating-point number, positive or negative.
//
//Output
//For each number of the array that is equal to 10 or less, print "A [i] = x", where i is the position of the array and x is the number stored in the position, with one digit after the decimal point.

#include<stdio.h>
int main(){
	double a[100];
	for(int i = 0;i<100;i++){
		scanf("%lf",&a[i]);
	}
	for(int i = 0;i<100;i++){
		if(a[i]<=10){
			printf("A[%d] = %.1lf\n",i,a[i]);
		}
	}
	return 0;
}
