//Maria has just started as graduate student in a medical school and she's needing your help to organize a laboratory experiment which she is responsible about. She wants to know, at the end of the year, how many animals were used in this laboratory and the percentage of each type of animal is used at all.
//
//This laboratory uses in particular three types of animals: frogs, rats and rabbits. To obtain this information, it knows exactly the number of experiments that were performed, the type and quantity of each animal is used in each experiment.
//
//Input
//The first line of input contains an integer N indicating the number of test cases that follows. Each test case contains an integer Amount (1 = Amount = 15) which represents the amount of animal used and a character Type ('C', 'R' or 'S'), indicating the type of animal:
//- C: Coelho (rabbit in portuguese)
//- R: Rato (rat  in portuguese)
//- S: Sapo (frog in portuguese)
//
//Output
//Print the total of animals used, the total of each type of animal and the percentual of each one in relation of the total of animals used. The percentual must be printed with 2 digits after the decimal point.

#include<stdio.h>

int main(){
	int casos,num;
	int total,coelhos=0,ratos=0,sapos=0;
	char animal;
	scanf("%d",&casos);
	while(0<casos){
		scanf("%d %c",&num,&animal);
		switch(animal){
			case 'C':{
				coelhos+=num;
				break;
			}
			case 'R':{
				ratos+=num;
				break;
			}
			case 'S':{
				sapos+=num;
				break;
			}
		}
		casos--;
	}
	total=coelhos+sapos+ratos;
	printf("Total: %d cobaias\n",total);
	printf("Total de coelhos: %d\n",coelhos);
	printf("Total de ratos: %d\n",ratos);
	printf("Total de sapos: %d\n",sapos);
	printf("Percentual de coelhos: %.2lf %%\n",((double)coelhos/total)*100);
	printf("Percentual de ratos: %.2lf %%\n",((double)ratos/total)*100);
	printf("Percentual de sapos: %.2lf %%\n",((double)sapos/total)*100);
	return 0;
}
