//Peter is organizing an event in his University. The event will be in April month, beginning and finishing within April month. The problem is: Peter wants to calculate the event duration in seconds, knowing obviously the begin and the end time of the event.
//
//You know that the event can take from few seconds to some days, so, you must help Peter to compute the total time corresponding to duration of the event.
//
//Input
//The first line of the input contains information about the beginning day of the event in the format: “Dia xx”. The next line contains the start time of the event in the format presented in the sample input. Follow 2 input lines with same format, corresponding to the end of the event.
//
//Output
//Your program must print the following output, one information by line, considering that if any information is null for example, the number 0 must be printed in place of W, X, Y or Z:
//
//W dia(s)
//X hora(s)
//Y minuto(s)
//Z segundo(s)
//
//Obs: Consider that the event of the test case have the minimum duration of one minute. “dia” means day, “hora” means hour, “minuto” means minute and “Segundo” means second in Portuguese.

#include<stdio.h>

struct Tempo{
	int dia;
	int horas;
	int minutos;
	int segundos;
};


struct Tempo tempoDoEvento(struct Tempo inicio, struct Tempo fim){
	struct Tempo tempo;
	
	tempo.dia=fim.dia-inicio.dia;
	
	if(inicio.horas<fim.horas){
		tempo.horas = fim.horas - inicio.horas;
	}else if(inicio.horas>fim.horas){
		tempo.dia--;
		tempo.horas = 24 - (inicio.horas - fim.horas);
	}else{
		tempo.horas = 0;
	}
	
	if(inicio.minutos<fim.minutos){
		tempo.minutos = fim.minutos - inicio.minutos;
	}else if(inicio.minutos>fim.minutos){
		if(tempo.horas==0){
			tempo.horas=24;
			tempo.dia--;
		}
		tempo.horas--;
		tempo.minutos = 60 - (inicio.minutos - fim.minutos);
	}else{
		tempo.minutos = 0;
	}
	
	if(inicio.segundos<fim.segundos){
		tempo.segundos = fim.segundos - inicio.segundos;
	}else if(inicio.segundos>fim.segundos){
		tempo.minutos--;
		tempo.segundos = 60 - (inicio.segundos - fim.segundos);
	}else{
		tempo.segundos = 0;
	}
	return tempo;
}


int main(){
	struct Tempo tempo,inicio,fim;
	char aux[3];
	scanf("%s%d",&aux,&inicio.dia);
	scanf("%d%s%d%s%d",&inicio.horas,&aux,&inicio.minutos,&aux,&inicio.segundos);
	scanf("%s%d",&aux,&fim.dia);
	scanf("%d%s%d%s%d",&fim.horas,&aux,&fim.minutos,&aux,&fim.segundos);
	tempo = tempoDoEvento(inicio,fim);
	printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",tempo.dia,tempo.horas,tempo.minutos,tempo.segundos);
	return 0;
}
