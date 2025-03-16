//Read an integer value corresponding to a person's age (in days) and print it in years, months and days, followed by its respective message “ano(s)”, “mes(es)”, “dia(s)”.
//
//Note: only to facilitate the calculation, consider the whole year with 365 days and 30 days every month. In the cases of test there will never be a situation that allows 12 months and some days, like 360, 363 or 364. This is just an exercise for the purpose of testing simple mathematical reasoning.
//
//Input
//The input file contains 1 integer value.
//
//Output
//Print the output, like the following example.

#include<stdio.h>

struct Tempo{
	int anos;
	int meses;
	int dias;
};

struct Tempo diasParaAnos(int dias){
	struct Tempo tempo;
	tempo.anos = dias/365;
	dias%=365;
	tempo.meses = dias/30;
	dias%=30;
	tempo.dias = dias;
	return tempo;
}

int main(){
	int dias;
	struct Tempo tempo;
	scanf("%d",&dias);
	tempo = diasParaAnos(dias);
	printf("%d ano(s)\n",tempo.anos);
	printf("%d mes(es)\n",tempo.meses);
	printf("%d dia(s)\n",tempo.dias);
	return 0;
}
