//Read two integer values X and Y. Print the sum of all odd values between them.
//
//Input
//The input file contain two integer values.
//
//Output
//The program must print an integer number. This number is the sum off all odd values between both input values that must fit in an integer number.

#include<stdio.h>

int somaDosImpares(int comeco, int fim){
	int soma=0;
	if(comeco%2==0){
		comeco++;
	}else{
		comeco+=2;
	}
	while(int i=comeco;i<fim;i+=2){
		soma+=i;
	}
	return soma;
}

int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	if(y>x){
		printf("%d\n",somaDosImpares(x,y));
	}else{
		printf("%d\n",somaDosImpares(y,x));
	}
	return 0;
}
