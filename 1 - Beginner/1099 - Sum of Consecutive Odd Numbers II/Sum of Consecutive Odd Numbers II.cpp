//Read an integer N that is the number of test cases. Each test case is a line containing two integer numbers X and Y. Print the sum of all odd values between them, not including X and Y.
//
//Input
//The first line of input is an integer N that is the number of test cases that follow. Each test case is a line containing two integer X and Y.
//
//Output
//Print the sum of all odd numbers between X and Y.

#include<stdio.h>

int somaDosImparesEntre(int inicio, int fim){
	int soma=0;
	if(inicio%2==0){
		inicio++;
	}else{
		inicio+=2;
	}
	for(int i=inicio;i<fim;i+=2){
		soma+=i;
	}
	return soma;
}

int main(){
	int casos,x,y;
	scanf("%d",&casos);
	while(0<casos){
		scanf("%d%d",&x,&y);
		if(x<y){
			printf("%d\n",somaDosImparesEntre(x,y));
		}else{
			printf("%d\n",somaDosImparesEntre(y,x));
		}
		casos--;
	}
	return 0;
}
