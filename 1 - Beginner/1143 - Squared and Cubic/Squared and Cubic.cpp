//Write a program that reads an integer N (1 < N < 1000). This N is the number of output lines printed by this program.
//
//Input
//The input file contains an integer N.
//
//Output
//Print the output according to the given example.

#include<stdio.h>
#include<math.h>

void sqrCub(int linhas){
	int i=1;
	while(0<linhas){
		printf("%d %.0lf %.0lf\n",i,pow(i,2),pow(i,3));
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
