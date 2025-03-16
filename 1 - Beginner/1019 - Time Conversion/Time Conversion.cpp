//Read an integer value, which is the duration in seconds of a certain event in a factory, and inform it expressed in hours:minutes:seconds.
//
//Input
//The input file contains an integer N.
//
//Output
//Print the read time in the input file (seconds) converted in hours:minutes:seconds like the following example.

#include<stdio.h>

struct Tempo{
	int horas;
	int minutos;
	int segundos;
};

struct Tempo segParaTempo(int segundos){
	struct Tempo tempo;
	tempo.horas=segundos/3600;
	segundos%=3600;
	tempo.minutos=segundos/60;
	segundos%=60;
	tempo.segundos=segundos;
	return tempo;
}

int main(){
	int segundos;
	struct Tempo tempo;
	scanf("%d",&segundos);
	tempo = segParaTempo(segundos);
	printf("%d:%d:%d\n",tempo.horas,tempo.minutos,tempo.segundos);
	return 0;
}
