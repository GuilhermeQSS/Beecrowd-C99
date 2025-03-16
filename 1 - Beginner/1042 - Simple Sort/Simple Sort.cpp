//Read three integers and sort them in ascending order. After, print these values in ascending order, a blank line and then the values in the sequence as they were readed.
//
//Input
//The input contains three integer numbers.
//
//Output
//Present the output as requested above.

#include<stdio.h>

void mostrarCrescente(int a, int b, int c){
	int aux;
	if(a>b){
		aux = a;
		a = b;
		b = aux;
	}
	if(a>c){
		aux = a;
		a = c;
		c = aux;
	}
	if(b>c){
		aux = b;
		b = c;
		c = aux;
	}
	printf("%d\n%d\n%d\n",a,b,c);
}

int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	mostrarCrescente(a,b,c);
	printf("\n%d\n%d\n%d\n",a,b,c);
	return 0;
}
