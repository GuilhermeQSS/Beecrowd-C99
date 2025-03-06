//You must make a program that read a float-point number and print a message saying in which of following intervals the number belongs: [0,25] (25,50], (50,75], (75,100]. If the read number is less than zero or greather than 100, the program must print the message “Fora de intervalo” that means "Out of Interval".
//
//The symbol '(' represents greather than. For example:
//[0,25] indicates numbers between 0 and 25.0000, including both.
//(25,50] indicates numbers greather than 25 (25.00001) up to 50.0000000.
//
//Input
//The input file contains a floating-point number.
//
//Output
//The output must be a message like following example.

#include<stdio.h>

int intervalo(double num){
	if(num>=0 && num<=100){
		if(num<=25){
			return 1;
		}else if(num<=50){
			return 2;
		}else if(num<=75){
			return 3;
		}else{
			return 4;
		}
	}else{
		return 0;
	}
}

int main(){
	double num;
	scanf("%lf",&num);
	switch(intervalo(num)){
		case 0:{
			printf("Fora de intervalo\n");
			break;
		}
		case 1:{
			printf("Intervalo [0,25]\n");
			break;
		}
		case 2:{
			printf("Intervalo (25,50]\n");
			break;
		}
		case 3:{
			printf("Intervalo (50,75]\n");
			break;
		}
		case 4:{
			printf("Intervalo (75,100]\n");
			break;
		}
	}
	return 0;
}
