//Make a program that reads five integer values. Count how many   of these values are even, odd, positive and negative. Print these information like following example.
//
//Input
//The input will be 5 integer values.
//
//Output
//Print a message like the following example with all letters in lowercase, indicating how many of these values ??are even, odd, positive and negative.

#include<stdio.h>

int isPositivo(int num){
	return num>0;
}
int isNegativo(int num){
	return num<0;
}
int isPar(int num){
	return num%2==0;
}

int main(){
	int num,pares=0,impares=0,positivos=0,negativos=0;
	for(int i=0;i<5;i++){
		scanf("%d",&num);
		if(isPositivo(num)){
			positivos++;
		}
		if(isNegativo(num)){
			negativos++;
		}
		if(isPar(num)){
			pares++;
		}else{
			impares++;
		}
	}
	printf("%d valor(es) par(es)\n",pares);
	printf("%d valor(es) impar(es)\n",impares);
	printf("%d valor(es) positivo(s)\n",positivos);
	printf("%d valor(es) negativo(s)\n",negativos);
	return 0;
}
