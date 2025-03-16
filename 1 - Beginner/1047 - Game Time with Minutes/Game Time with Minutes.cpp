//Read the start time and end time of a game, in hours and minutes (initial hour, initial minute, final hour, final minute). Then print the duration of the game, knowing that the game can begin in a day and finish in another day,
//
//Obs.: With a maximum game time of 24 hours and the minimum game time of 1 minute.
//
//Input
//Four integer numbers representing the start and end time of the game.
//
//Output
//Print the duration of the game in hours and minutes, in this format: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” . Which means: the game lasted XXX hour(s) and YYY minutes.

#include<stdio.h>

struct Tempo{
	int horas;
	int minutos;
};

struct Tempo tempoDeJogo(struct Tempo inicio, struct Tempo fim){
	struct Tempo tempo;
	if(inicio.horas<fim.horas){
		tempo.horas = fim.horas - inicio.horas;
	}else if(inicio.horas>fim.horas){
		tempo.horas = 24 - (inicio.horas - fim.horas);
	}else{
		tempo.horas = 24;
	}
	
	if(inicio.minutos<fim.minutos){
		if(tempo.horas == 24){
			tempo.horas = 0;
		}
		tempo.minutos = fim.minutos - inicio.minutos;
	}else if(inicio.minutos>fim.minutos){
		tempo.horas--;
		tempo.minutos = 60 - (inicio.minutos - fim.minutos);
	}else{
		tempo.minutos = 0;
	}
	
	return tempo;
}

int main(){
	struct Tempo tempo,inicio,fim;
	scanf("%d%d%d%d",&inicio.horas,&inicio.minutos,&fim.horas,&fim.minutos);
	tempo = tempoDeJogo(inicio,fim);
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",tempo.horas,tempo.minutos);
	return 0;
}
