//In this problem, your job is to read three Portuguese words. These words define an animal according to the table below, from left to right. After, print the chosen animal defined by these three words.
//
//
//Input
//The input contains 3 words, one by line, that will be used to identify the animal, according to the above table, with all letters in lowercase.
//
//Output
//Print the animal name according to the given input.

#include<stdio.h>
#include<string.h>

void animal(char string[3][20]){
	if(strcmp(string[0],"vertebrado")==0){
		if(strcmp(string[1],"ave")==0){
			if(strcmp(string[2],"carnivoro")==0){
				printf("aguia\n");
			}else{
				printf("pomba\n");
			}
		}else{
			if(strcmp(string[2],"onivoro")==0){
				printf("homem\n");
			}else{
				printf("vaca\n");
			}
		}
	}else{
		if(strcmp(string[1],"inseto")==0){
			if(strcmp(string[2],"hematofago")==0){
				printf("pulga\n");
			}else{
				printf("lagarta\n");
			}
		}else{
			if(strcmp(string[2],"hematofago")==0){
				printf("sanguessuga\n");
			}else{
				printf("minhoca\n");
			}
		}
	}
}

int main(){
	char string[3][20];
	for(int i=0;i<3;i++){
		fflush(stdin);
		gets(string[i]);
	}
	animal(string);
	return 0;
}
