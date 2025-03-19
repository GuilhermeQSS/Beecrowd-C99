//Read an uppercase character that indicates an operation that will be performed in an array M[12][12]. Then, calculate and print the sum or average considering only that numbers that are included in the green area of this array, like shown in the following figure.
//
//Input
//The first line of the input contains a single uppercase character O ('S' or 'M'), indicating the operation Sum or Average (Média in portuguese) to be performed with the elements of the array. Follow 144 double numbers of the array.
//
//Output
//Print the calculated result (sum or average), with one digit after the decimal point.

#include<stdio.h>

int main(){
	double vet[12][12];
	char operacao;
	scanf("%c",&operacao);
	for(int i = 0;i<12;i++){
		for(int j = 0;j<12;j++){
			scanf("%lf",&vet[i][j]);
		}
	}
	int cont=0;
	double soma=0;
	for(int i=0;i<5;i++){
		for(int j = i+1;j<11-i;j++){
			soma += vet[i][j];
			cont++;
		}
	}
	if(operacao=='S'){
		printf("%.1lf\n",soma);
	}else{
		printf("%.1lf\n",soma/cont);
	}
	return 0;
}
