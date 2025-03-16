//Read 6 values that can be floating point numbers. After, print how many of them were positive. In the next line, print the average of all positive values typed, with one digit after the decimal point.
//
//Input
//The input consist in 6 numbers that can be integer or floating point values. At least one number will be positive.
//
//Output
//The first output value is the amount of positive numbers. The next line should show the average of the positive values ?typed.

#include<stdio.h>

int isPositivo(double num){
	return num>0;
}

double calcularMedia(double vetPositivos[6], double positivos){
	double total=0;
	for(int i=0;i<positivos;i++){
		total+=vetPositivos[i];
	}
	return total/positivos;
}

int main(){
	double num,vetPositivos[6];
	int positivos=0;
	for(int i=0;i<6;i++){
		scanf("%lf",&num);
		if(isPositivo(num)){
			vetPositivos[positivos++]=num;
		}
	}
	printf("%d valores positivos\n",positivos);
	printf("%.1lf\n",calcularMedia(vetPositivos,positivos));
}
