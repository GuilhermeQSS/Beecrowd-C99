//Write a program that reads two integer numbers X and Y and calculate the sum of all number not divisible by 13 between them, including both.
//
//Input
//The input file contains 2 integer numbers X and Y without any order.
//
//Output
//Print the sum of all numbers between X and Y not divisible by 13, including them if it is the case.

#include<stdio.h>

int somaNdivisivelPor13Entre(int min,int max){
	int soma=0;
	while(min<=max){
		if(min%13!=0){
			soma+=min;
		}
		min++;
	}
	return soma;
}

int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	if(x<y){
		printf("%d\n",somaNdivisivelPor13Entre(x,y));
	}else{
		printf("%d\n",somaNdivisivelPor13Entre(y,x));
	}
	return 0;
}
