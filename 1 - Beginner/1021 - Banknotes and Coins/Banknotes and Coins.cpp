//Read a value of floating point with two decimal places. This represents a monetary value. After this, calculate the smallest possible number of notes and coins on which the value can be decomposed. The considered notes are of 100, 50, 20, 10, 5, 2. The possible coins are of 1, 0.50, 0.25, 0.10, 0.05 and 0.01. Print the message “NOTAS:” followed by the list of notes and the message “MOEDAS:” followed by the list of coins.
//
//Input
//The input file contains a value of floating point N (0 = N = 1000000.00).
//
//Output
//Print the minimum quantity of banknotes and coins necessary to change the initial value, as the given example.

#include<stdio.h>

struct NotasMoedas{
	int notas100;
	int notas50;
	int notas20;
	int notas10;
	int notas5;
	int notas2;
	int moedas1;
	int moedas05;
	int moedas025;
	int moedas01;
	int moedas005;
	int moedas001;
};

struct NotasMoedas calcularNotasMoedas(double valor){
	struct NotasMoedas notasMoedas;
	notasMoedas.notas100 = valor/100;
	valor-=notasMoedas.notas100*100;
	notasMoedas.notas50 = valor/50;
	valor-=notasMoedas.notas50*50;
	notasMoedas.notas20 = valor/20;
	valor-=notasMoedas.notas20*20;
	notasMoedas.notas10 = valor/10;
	valor-=notasMoedas.notas10*10;
	notasMoedas.notas5 = valor/5;
	valor-=notasMoedas.notas5*5;
	notasMoedas.notas2 = valor/2;
	valor-=notasMoedas.notas2*2;
	notasMoedas.moedas1 = valor;
	valor-=notasMoedas.moedas1;
	valor*=100;
	notasMoedas.moedas05 = valor/50;
	valor-=notasMoedas.moedas05*50;
	notasMoedas.moedas025 = valor/25;
	valor-=notasMoedas.moedas025*25;
	notasMoedas.moedas01 = valor/10;
	valor-=notasMoedas.moedas01*10;
	notasMoedas.moedas005 = valor/5;
	valor-=notasMoedas.moedas005*5;
	notasMoedas.moedas001 = valor;
	return notasMoedas;
}

int main(){
	double valor;
	struct NotasMoedas notasMoedas;
	scanf("%lf",&valor);
	notasMoedas = calcularNotasMoedas(valor);
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",notasMoedas.notas100);
	printf("%d nota(s) de R$ 50.00\n",notasMoedas.notas50);
	printf("%d nota(s) de R$ 20.00\n",notasMoedas.notas20);
	printf("%d nota(s) de R$ 10.00\n",notasMoedas.notas10);
	printf("%d nota(s) de R$ 5.00\n",notasMoedas.notas5);
	printf("%d nota(s) de R$ 2.00\n",notasMoedas.notas2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n",notasMoedas.moedas1);
	printf("%d moeda(s) de R$ 0.50\n",notasMoedas.moedas05);
	printf("%d moeda(s) de R$ 0.25\n",notasMoedas.moedas025);
	printf("%d moeda(s) de R$ 0.10\n",notasMoedas.moedas01);
	printf("%d moeda(s) de R$ 0.05\n",notasMoedas.moedas005);
	printf("%d moeda(s) de R$ 0.01\n",notasMoedas.moedas001);
	return 0;
}
