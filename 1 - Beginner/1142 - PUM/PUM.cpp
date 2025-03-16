//Write a program that reads an integer N. This N is the number of output lines printed by this program.
//
//Input
//The input file contains an integer N.
//
//Output
//Print the output according to the given example.

#include<stdio.h>

void PUM(int linhas){
	int i=1;
	while(0<linhas){
		printf("%d %d %d PUM\n",i,i+1,i+2);
		i+=4;
		linhas--;
	}
}
int main(){
	int linhas;
	scanf("%d",&linhas);
	PUM(linhas);
	return 0;
}
