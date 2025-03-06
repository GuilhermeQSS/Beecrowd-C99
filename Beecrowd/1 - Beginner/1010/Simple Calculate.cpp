//In this problem, the task is to read a code of a product 1, the number of units of product 1, the price for one unit of product 1, the code of a product 2, the number of units of product 2 and the price for one unit of product 2. After this, calculate and show the amount to be paid.
//
//Input
//The input file contains two lines of data. In each line there will be 3 values: two integers and a floating value with 2 digits after the decimal point.
//
//Output
//The output file must be a message like the following example where "Valor a pagar" means Value to Pay. Remember the space after ":" and after "R$" symbol. The value must be presented with 2 digits after the point.

#include<stdio.h>

double valorTotalProduto(int qtde, double valor){
	return qtde*valor;
}

int main(){
	double total=0,valor;
	int codProduto,qtde;
	for(int i=0;i<2;i++){
		scanf("%d%d%lf",&codProduto,&qtde,&valor);
		total+=valorTotalProduto(qtde,valor);
	}
	printf("VALOR A PAGAR: R$ %.2lf\n",total);
	return 0;
}
