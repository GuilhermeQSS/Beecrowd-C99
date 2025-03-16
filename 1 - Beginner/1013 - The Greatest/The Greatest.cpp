//Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior". Use the following formula:
//
//Input
//The input file contains 3 integer values.
//
//Output
//Print the greatest of these three values followed by a space and the message “eh o maior”.

#include<stdio.h>
#include<math.h>

int maiorAB(int A, int B){
	return (A+B+abs(A-B))/2;
}

int main(){
	int A,B,C;
	scanf("%d%d%d",&A,&B,&C);
	printf("%d eh o maior\n",maiorAB(maiorAB(A,B),C));
	return 0;
}
