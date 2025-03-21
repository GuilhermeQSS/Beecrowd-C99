//Your job in this problem is to read a number that is a line of an array, an uppercase character, indicating the operation to be performed and all elements of a bidimentional array M[12][12]. Then, you have to calculate and print the sum or average of all elements within the green area according to the case. The following figure illustrates the case when is entered the number 2 to the array line, showing all elements that must be considered in the operation.
//
//Input
//The first line of the input contains a simple integer L (0 = L = 11) indicating the line to be considered in the operation. The second line of the input contains a single uppercase character T ('S' or 'M'), indicating the operation Sum or Average (M�dia in portuguese) to be performed with the elements of the array. Follow the 144 floating-point numbers of the array, considering that the elements are inserted line by line, from line 0 to line 11, always from left to right.
//
//Output
//Print the calculated result (sum or average), with one digit after the decimal point.
#include<stdio.h>

int main(){
	double vet[12][12];
	int linha;
	char operacao;
	scanf("%d %c",&linha,&operacao);
	for(int i = 0;i<12;i++){
		for(int j = 0;j<12;j++){
			scanf("%lf",&vet[i][j]);
		}
	}
	double soma=0;
	for(int i = 0;i<12;i++){
		soma += vet[linha][i];
	}
	if(operacao=='S'){
		printf("%.1lf\n",soma);
	}else{
		printf("%.1lf\n",soma/12);
	}
	return 0;
}
