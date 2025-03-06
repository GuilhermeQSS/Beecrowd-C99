//In this problem you have to read an integer value and calculate the smallest possible number of banknotes in which the value may be decomposed. The possible banknotes are 100, 50, 20, 10, 5, 2 and 1. Print the read value and the list of banknotes.
//
//Input
//The input file contains an integer value N (0 < N < 1000000).
//
//Output
//Print the read number and the minimum quantity of each necessary banknotes in Portuguese language, as the given example. Do not forget to print the end of line after each line, otherwise you will receive “Presentation Error”.

#include<stdio.h>

struct Notas{
	int notas100;
	int notas50;
	int notas20;
	int notas10;
	int notas5;
	int notas2;
	int notas1;
};

struct Notas calcularNotas(int valor){
	struct Notas notas;
	notas.notas100 = valor/100;
	valor%=100;
	notas.notas50 = valor/50;
	valor%=50;
	notas.notas20 = valor/20;
	valor%=20;
	notas.notas10 = valor/10;
	valor%=10;
	notas.notas5 = valor/5;
	valor%=5;
	notas.notas2 = valor/2;
	valor%=2;
	notas.notas1 = valor;
	return notas;
}

int main(){
	int valor;
	struct Notas notas;
	scanf("%d",&valor);
	notas = calcularNotas(valor);
	printf("%d\n",valor);
	printf("%d nota(s) de R$ 100,00\n",notas.notas100);
	printf("%d nota(s) de R$ 50,00\n",notas.notas50);
	printf("%d nota(s) de R$ 20,00\n",notas.notas20);
	printf("%d nota(s) de R$ 10,00\n",notas.notas10);
	printf("%d nota(s) de R$ 5,00\n",notas.notas5);
	printf("%d nota(s) de R$ 2,00\n",notas.notas2);
	printf("%d nota(s) de R$ 1,00\n",notas.notas1);
	return 0;
}
