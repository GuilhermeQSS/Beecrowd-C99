//Make a program that prints the sequence like the following example.
//
//Input
//This problem doesn't have input.
//
//Output
//Print the sequence like the example below.

#include<stdio.h>

void seqIJ1(){
	for(int i=1,j=60;0<=j;i+=3,j-=5){
		printf("I=%d J=%d\n",i,j);
	}
}

int main(){
	seqIJ1();
	return 0;
}
