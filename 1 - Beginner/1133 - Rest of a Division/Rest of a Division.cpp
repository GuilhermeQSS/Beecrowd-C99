//Write a program that reads two integer numbers X and Y. Print all numbers between X and Y which dividing it by 5 the rest is equal to 2 or equal to 3.
//
//Input
//The input file contains 2 any positive integers, not necessarily in ascending order.
//
//Output
//Print all numbers according to above description, always in ascending order.

#include<stdio.h>

void numsResto2ou3Entre(int inicio,int fim){
	for(int i=inicio+1;i<fim;i++){
		if(i%5==2||i%5==3){
			printf("%d\n",i);
		}
	}
}

int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	if(x<y){
		numsResto2ou3Entre(x,y);
	}else{
		numsResto2ou3Entre(y,x);
	}
	return 0;
}
