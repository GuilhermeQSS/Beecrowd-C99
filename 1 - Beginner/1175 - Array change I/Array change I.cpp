//Write a program that reads an array N [20]. After, change the first element by the last, the second element by the last but one, etc.., Up to change the 10th to the 11th. print the modified array.
//
//Input
//The input contains 20 integer numbers, positive or negative.
//
//Output
//For each position of the array N print "N[i] = Y", where i is the array position and Y is the number stored in that position.

#include<stdio.h>

void invertArray(int n[]){
	int aux;
	for(int i=0;i<10;i++){
		aux = n[i];
		n[i] = n[19-i];
		n[19-i] = aux;
	}
}

int main(){
	int n[20];
	for(int i=0;i<20;i++){
		scanf("%d",&n[i]);
	}
	invertArray(n);
	for(int i = 0;i<20;i++){
		printf("N[%d] = %d\n",i,n[i]);
	}
	return 0;
}
