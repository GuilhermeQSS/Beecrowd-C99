//Read an integer N (2 < N < 1000). Print the multiplication table of N.
//1 x N = N      2 x N = 2N        ...       10 x N = 10N  
//
//Input
//The input is an integer N (1 < N < 1000).
//
//Output
//Print the multiplication table of N., like the following example.

#include<stdio.h>

void printTabuada(int num){
	for(int i=1;i<=10;i++){
		printf("%d x %d = %d\n",i,num,i*num);
	}
}

int main(){
	int num;
	scanf("%d",&num);
	printTabuada(num);
	return 0;
}
