//Make a program that reads five integer values. Count how many of these values ??are even and  print this information like the following example.
//
//Input
//The input will be 5 integer values.
//
//Output
//Print a message like the following example with all letters in lowercase, indicating how many even numbers were typed.

#include<stdio.h>

int isPar(int num){
	return num%2==0;
}

int main(){
	int num,pares=0;
	for(int i=0;i<5;i++){
		scanf("%d",&num);
		if(isPar(num)){
			pares++;
		}
	}
	printf("%d valores pares\n",pares);
	return 0;
}
