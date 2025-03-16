//Read 100 integer numbers. Print the highest read value and the input position.
//
//Input
//The input file contains 100 distinct positive integer numbers.
//
//Output
//Print the highest number read and the input position of this value, according to the given example.

#include<stdio.h>
int main(){
	int num,maior,posMaior=1;
	scanf("%d",&maior);
	for(int pos=posMaior+1;pos<=100;pos++){
		scanf("%d",&num);
		if(num>maior){
			maior=num;
			posMaior=pos;
		}
	}
	printf("%d\n%d\n",maior,posMaior);
	return 0;
}
