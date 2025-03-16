//Read the start time and end time of a game, in hours. Then calculate the duration of the game, knowing that the game can begin in a day and finish in another day, with a maximum duration of 24 hours. The message must be printed in portuguese “O JOGO DUROU X HORA(S)” that means “THE GAME LASTED X HOUR(S)”
//
//Input
//Two integer numbers representing the start and end time of a game.
//
//Output
//Print the duration of the game as in the sample output.

#include<stdio.h>

int tempoDeJogo(int inicio, int fim){
	if(inicio<fim){
		return fim - inicio;
	}
	if(inicio>fim){
		return 24 - (inicio - fim);
	}
	return 24;
}

int main(){
	int inicio,fim;
	scanf("%d%d",&inicio,&fim);
	printf("O JOGO DUROU %d HORA(S)\n",tempoDeJogo(inicio,fim));
	return 0;
}
