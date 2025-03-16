//Read an integer N. Print all numbers between 1 and 10000, which divided by N will give the rest = 2.
//
//Input
//The input is an integer N (N < 10000)
//
//Output
//Print all numbers between 1 and 10000, which divided by n will give the rest = 2, one per line.

#include<stdio.h>

void resto2(int num){
	for(int i=1;i<=10000;i++){
		if(i%num==2){
			printf("%d\n",i);
		}
	}
}

int main(){
	int num;
	scanf("%d",&num);
	resto2(num);
	return 0;
}
