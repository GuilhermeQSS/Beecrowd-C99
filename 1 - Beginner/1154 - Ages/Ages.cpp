//Write an algorithm to read an undeterminated number of data, each containing an individual's age. The final data, which will not enter in the calculations, contains the value of a negative age. Calculate and print the average age of this group of individuals.
//
//Input
//The input contains an undetermined number of integers. The input will be stop when a negative value is read.
//
//Output
//The output contains a value corresponding to the average age of individuals.
//
//The average should be printed with two digits after the decimal point.

#include<stdio.h>

int main(){
	double num,soma=0;
	int cont=0;
	scanf("%lf",&num);
	while(num>0){
		soma+=num;
		cont++;
		scanf("%lf",&num);
	}
	if(cont==0){
		printf("0.00\n");
	}else{
		printf("%.2lf\n",soma/cont);
	}
	return 0;
}
