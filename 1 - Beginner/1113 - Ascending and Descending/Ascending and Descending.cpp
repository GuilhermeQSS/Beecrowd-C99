//Read an undetermined number of pairs of integer values. Write a message for each pair indicating if this two numbers are in ascending or descending order.
//
//Input
//The input file contains several test cases. Each test case contains two integer numbers X and Y. The input will finished when X = Y.
//
//Output
//For each test case print “Crescente”, if the values X and Y are in ascending order, otherwise print “Decrescente”.

#include<stdio.h>
int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	while(x!=y){
		if(x>y){
			printf("Decrescente\n");
		}else{
			printf("Crescente\n");
		}
		scanf("%d%d",&x,&y);
	}
	return 0;
}
