//Write a program to read the coordinates (X, Y) of an indeterminate number of points in Cartesian system. For each point write the quadrant to which it belongs. The program finish when at least one of two coordinates is NULL (in this situation without writing any message).
//
//Input
//The input contains several tests cases. Each test case contains two integer numbers.
//
//Output
//For each test case, print the corresponding quadrant which these coordinates belong, as in the example.

#include<stdio.h>

int quadrante(int x, int y){
	if(0<x && 0<y){
		return 1;
	}
	if(x<0 && 0<y){
		return 2;
	}
	if(x<0 && y<0){
		return 3;
	}
	return 4;
}

int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	while(x!=0 && y!=0){
		switch(quadrante(x,y)){
			case 1:{
				printf("primeiro\n");
				break;
			}
			case 2:{
				printf("segundo\n");
				break;
			}
			case 3:{
				printf("terceiro\n");
				break;
			}
			case 4:{
				printf("quarto\n");
				break;
			}
		}
		scanf("%d%d",&x,&y);
	}
	return 0;
}
