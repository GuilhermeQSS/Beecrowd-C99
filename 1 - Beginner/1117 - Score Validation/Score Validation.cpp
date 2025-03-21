//Write a program that reads two scores of a student. Calculate and print the average of these scores. Your program must accept just valid scores [0..10]. Each score must be validated separately.
//
//Input
//The input file contains many floating-point numbers??, positive or negative. The program execution will be finished after the input of two valid scores.
//
//Output
//When an invalid score is read, you should print the message "nota invalida".
//After the input of two valid scores, the message "media = " must be printed followed by the average of the student. The average must be printed with 2 numbers after the decimal point.

#include<stdio.h>

int isInRange(double num){
	return num>=0&&num<=10;
}

int main(){
	int casos=0;
	double num,total=0;
	while(casos<2){
		scanf("%lf",&num);
		if(isInRange(num)){
			total+=num;
			casos++;
		}else{
			printf("nota invalida\n");
		}
	}
	printf("media = %.2lf\n",total/casos);
	return 0;
}
