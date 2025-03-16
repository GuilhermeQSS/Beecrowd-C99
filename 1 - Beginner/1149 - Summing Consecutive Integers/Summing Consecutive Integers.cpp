//Write an algorithm to read a value A and a value N. Print the sum of N numbers from A (inclusive). While N is negative or ZERO, a new N (only N) must be read. All input values are in the same line.
//
//Input
//The input contains only integer values, ??can be positive or negative.
//
//Output
//The output contains only an integer value.

#include<stdio.h>

int soma(int a,int n){
	int soma=0;
	while(0<n){
		soma+=a++;
		n--;
	}
	return soma;
}

int main(){
	int a,n;
	scanf("%d%d",&a,&n);
	while(n<=0){
		scanf("%d",&n);
	}
	printf("%d\n",soma(a,n));
	return 0;
}
