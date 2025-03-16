//Make a program that prints the sequence like the following example.
//
//Input
//This problem doesn't have input.
//
//Output
//Print the sequence like the example below.

#include<stdio.h>

void seqIJ4(){
	for(double i=0;i<=2;i+=0.2){
		printf("I=%g J=%g\n",i,1+i);
		printf("I=%g J=%g\n",i,2+i);
		printf("I=%g J=%g\n",i,3+i);
	}
}

int main(){
	seqIJ4();
	return 0;
}
