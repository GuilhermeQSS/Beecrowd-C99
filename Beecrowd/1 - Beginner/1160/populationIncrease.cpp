#include<stdio.h>
int calcularTempoPopulacao(){
	int tempo=0;
	int populacaoA;
	int populacaoB;
	double crescA;
	double crescB;
	scanf("%d",&populacaoA);
	scanf("%d",&populacaoB);
	scanf("%lf",&crescA);
	scanf("%lf",&crescB);
	do{
		populacaoA+=(int)populacaoA*(crescA/100);
		populacaoB+=(int)populacaoB*(crescB/100);
		tempo++;
	}while(populacaoA<=populacaoB && tempo < 101);
	return tempo;
}

int main(){
	int casos;
	int tempo;
	scanf("%i",&casos);
	for(int i=0;i<casos;i++){
		tempo = calcularTempoPopulacao();
		if(tempo > 100){
			printf("Mais de 1 seculo.\n");
		}else{
			printf("%d anos.\n",tempo);
		}
	}
	return 0;
}
