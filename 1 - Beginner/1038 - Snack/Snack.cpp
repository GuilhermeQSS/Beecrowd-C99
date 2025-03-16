//Using the following table, write a program that reads a code and the amount of an item. After, print the value to pay. This is a very simple program with the only intention of practice of selection commands.
//
//Input
//The input file contains two integer numbers X and Y. X is the product code and Y is the quantity of this item according to the above table.
//
//Output
//The output must be a message "Total: R$ " followed by the total value to be paid, with 2 digits after the decimal point.

#include<stdio.h>

double calcularTotal(int codProduto, int qtde){
	double valor;
	switch(codProduto){
		case 1:{
			return 4*qtde;
			break;
		}
		case 2:{
			return 4.5*qtde;
			break;
		}
		case 3:{
			return 5*qtde;
			break;
		}
		case 4:{
			return 2*qtde;
			break;
		}
		case 5:{
			return 1.5*qtde;
			break;
		}
	}
}

int main(){
	int codProduto,qtde;
	scanf("%d%d",&codProduto,&qtde);
	printf("Total: R$ %.2lf\n",calcularTotal(codProduto,qtde));
	return 0;
}
