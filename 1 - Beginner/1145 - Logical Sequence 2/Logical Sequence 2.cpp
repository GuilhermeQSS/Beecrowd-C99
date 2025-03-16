//Write an program that reads two numbers X and Y (X < Y). After this, show a sequence of 1 to y, passing to the next line to each X numbers.
//
//Input
//The input contains two integer numbers X (1 < X < 20) and Y (X < Y < 100000).
//
//Output
//Each sequence must be printed in one line, with a blank space between each number, like the following example.

#include<stdio.h>

void seq(int numLinha, int max){
	int cont=1;
	while(cont<=max){
		printf("%d",cont);
		if(cont%numLinha==0){
			printf("\n");
		}else{
			printf(" ");
		}
		cont++;
	}
}

int main(){
	int numLinha,max;
	scanf("%d%d",&numLinha,&max);
	seq(numLinha,max);
	return 0;
}
