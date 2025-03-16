//Write a program that prints all even numbers between 1 and 100, including them if it is the case.
//
//Input
//In this extremely simple problem there is no input.
//
//Output
//Print all even numbers between 1 and 100, including them, one by row.

#include<stdio.h>

void numsPar(int min, int max){
	if(min%2!=0){
		min++;
	}
	for(int i=min;i<=max;i+=2){
		printf("%d\n",i);
	}
}

int main(){
	numsPar(1,100);
	return 0;
}
