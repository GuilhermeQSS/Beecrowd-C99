//Write a program that keep reading a password until it is valid. For each wrong password read, write the message "Senha inválida". When the password is typed correctly print the message "Acesso Permitido" and finished the program. The correct password is the number 2002.
//
//Input
//The input file contains several tests cases. Each test case contains only an integer number.
//
//Output
//For each number read print a message corresponding to the description of the problem.

#include<stdio.h>

int isValid(int num){
	return num==2002;
}

int main(){
	int num;
	scanf("%d",&num);
	while(!isValid(num)){
		printf("Senha Invalida\n");
		scanf("%d",&num);
	}
	printf("Acesso Permitido\n");
	return 0;
}
