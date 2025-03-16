//Write a program that reads an integer N. N * 2 lines must be printed by this program according to the example below. For numbers with more than 6 digits, all digits must be printed (no cientific notation allowed).
//
//Input
//The input file contains an integer N (1 < N < 1000).
//
//Output
//Print the output according to the given example.

#include<stdio.h>
#include<math.h>

void sqrCub(int linhas){
	int i=1;
	while(0<linhas){
		printf("%d %.0lf %.0lf\n",i,pow(i,2),pow(i,3));
		printf("%d %.0lf %.0lf\n",i,pow(i,2)+1,pow(i,3)+1);
		i++;
		linhas--;
	}
}
int main(){
	int linhas;
	scanf("%d",&linhas);
	sqrCub(linhas);
	return 0;
}
