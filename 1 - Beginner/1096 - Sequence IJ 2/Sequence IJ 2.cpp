//Make a program that prints the sequence like the following exemple.
//
//Input
//This problem doesn't have input.
//
//Output
//Print the sequence like the example below.

#include<stdio.h>

void seqIJ2(){
	for(int i=1;i<=9;i+=2){
		printf("I=%d J=7\n",i);
		printf("I=%d J=6\n",i);
		printf("I=%d J=5\n",i);
	}
}

int main(){
	seqIJ2();
	return 0;
}
