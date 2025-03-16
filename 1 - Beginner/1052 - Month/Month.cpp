//Read an integer number between 1 and 12, including. Corresponding to this number, you must print the month of the year, in english, with the first letter in uppercase.
//
//Input
//The input contains only an integer number.
//
//Output
//Print the name of the month according to the input number, with the first letter in uppercase.

#include<stdio.h>

int main(){
	char mes[12][10]={
		{"January"},
		{"February"},
		{"March"},
		{"April"},
		{"May"},
		{"June"},
		{"July"},
		{"August"},
		{"September"},
		{"October"},
		{"November"},
		{"December"}
	};
	int numMes;
	scanf("%d",&numMes);
	printf("%s\n",mes[numMes-1]);
	return 0;
}
