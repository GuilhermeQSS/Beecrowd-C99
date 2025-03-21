//The Federa��o Ga�cha de Futebol invited you to write a program to present a statistical result of several GRENAIS. Write a program that read the number of goals scored by Inter and the number of goals scored by Gremio in a GRENAL. Write the message "Novo grenal (1-sim 2-nao)" and request a response. If the answer is 1, two new numbers must be read (another input case) asking the number of goals scored by the teams in a new departure, otherwise the program must be finished, printing:
//
//- How many GRENAIS were part of the statistics.
//- The number of victories of Inter.
//- The number of victories of Gremio.
//- The number of Draws.
//- A message indicating the team that won the largest number of GRENAIS (or the message: "N�o houve vencedor" if both team won the same quantity of GRENAIS).
//
//Input
//The input contains two integer values??, corresponding to the goals scored by both teams. Then there is an integer (1 or 2), corresponding to the repetition of the algorithm.
//
//Output
//After each reading of the goals it must be printed the message "Novo grenal (1-sim 2-nao)". When the program is finished, the program must print the statistics as the example below.

#include<stdio.h>

int main(){
	int op;
	int grenais=0;
	int inter=0,gremio=0;
	int golsInter,golsGremio;
	do{
		scanf("%d%d",&golsInter,&golsGremio);
		if(golsInter>golsGremio){
			inter++;
		}else if(golsInter<golsGremio){
			gremio++;
		}
		grenais++;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d",&op);
	}while(op==1);
	printf("%d grenais\n",grenais);
	printf("Inter:%d\n",inter);
	printf("Gremio:%d\n",gremio);
	printf("Empates:%d\n",grenais-inter-gremio);
	if(inter>gremio){
		printf("Inter venceu mais\n");
	}else if(inter<gremio){
		printf("Gremio venceu mais\n");
	}else{
		printf("N�o houve vencedor\n");
	}
	return 0;
}
