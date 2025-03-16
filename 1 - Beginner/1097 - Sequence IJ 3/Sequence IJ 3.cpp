//Make a program that prints the sequence like the following exemple.
//
//Input
//This problem doesn't have input.
//
//Output
//Print the sequence like the example below.

#include<stdio.h>

void seqIJ3(){
	for(int i=1,j=5;i<=9;i+=2,j+=2){
		printf("I=%d J=%d\n",i,j+2);
		printf("I=%d J=%d\n",i,j+1);
		printf("I=%d J=%d\n",i,j);
	}
}

int main(){
	seqIJ3();
	return 0;
}
