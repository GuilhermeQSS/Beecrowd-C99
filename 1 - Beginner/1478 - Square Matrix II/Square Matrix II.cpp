//Write a program that read an integer number N (0 = N = 100) that correspont to the order of a Bidimentional array of integers, and build the Array according to the above example.
//
//Input
//The input consists of several integers numbers, one per line, corresponding to orders from arrays to be built. The end of input is indicated by zero (0).
//
//Output
//For each integer number of input, print the corresponding array according to the example. (the values ??of the arrays must be formatted in a field of size 3 right justified and separated by a space. None space must be printed after the last character of each row of the array. A blank line must be printed after each array.

#include<stdio.h>

void printSqrMatrix2(int tam){
	int matrix[tam][tam];
	for(int i=0;i<tam;i++){
		for(int j=i;j<tam-i;j++){
			matrix[i][j]=j-i+1;
			matrix[j][i]=j-i+1;
			matrix[tam-1-i][tam-1-j]=j-i+1;
			matrix[tam-1-j][tam-1-i]=j-i+1;
		}
	}
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			printf("%3d",matrix[i][j]);
			if(j<tam-1){
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
}

int main(){
	int num;
	scanf("%d",&num);
	while(num>0){
		printSqrMatrix2(num);
		scanf("%d",&num);
	}
	return 0;
}
