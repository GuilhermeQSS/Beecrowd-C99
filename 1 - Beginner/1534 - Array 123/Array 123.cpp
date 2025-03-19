//Read an integer N that is the size of a bidimentional array that must be printed like the given example.
//
//Input
//The input contains many test cases and ends with EOF. Each test case consist in a integer number N (3 = N < 70), that indicates the size (lines and columns) of a bidimentional array that must be printed.
//
//Output
//For each N read, print the output according to the given example.

#include<stdio.h>

void printArray123(int tam){
	int array[tam][tam];
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			if(tam-1-i==j){
				array[i][j]=2;
			}else if(i==j){
				array[i][j]=1;
			}else{
				array[i][j]=3;
			}
			printf("%d",array[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int num;
	while(scanf("%d",&num)!=EOF){
		printArray123(num);
	}
	return 0;
}
