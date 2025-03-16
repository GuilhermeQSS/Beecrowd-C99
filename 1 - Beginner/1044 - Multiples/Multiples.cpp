//Read two integer values (A and B). After, the program should print the message "Sao Multiplos" (are multiples) or "Nao sao Multiplos" (aren’t multiples), corresponding to the read values.
//
//Input
//The input has two integer numbers.
//
//Output
//Print the relative message to the input as stated above.

#include<stdio.h>

int isMultiplo(int a, int b){
	if(a>b){
		return a/b==(double)a/b;
	}else{
		return b/a==(double)b/a;
	}
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(isMultiplo(a,b)){
		printf("Sao Multiplos\n");
	}else{
		printf("Nao sao Multiplos\n");
	}
	return 0;
}
