//Read 4 integer values A, B, C and D. Then if B is greater than C and D is greater than A and if the sum of C and D is greater than the sum of A and B and if C and D were positives values and if A is even, write the message “Valores aceitos” (Accepted values). Otherwise, write the message “Valores nao aceitos” (Values not accepted).
//
//Input
//Four integer numbers A, B, C and D.
//
//Output
//Show the corresponding message after the validation of the values??.

#include<stdio.h>

int isValido(int A, int B, int C, int D){
	return B>C && D>A && C+D>A+B && C>0 && D>0 && A%2==0;
}

int main(){
	int A,B,C,D;
    scanf("%d%d%d%d",&A,&B,&C,&D);
    if(isValido(A,B,C,D)){
    	printf("Valores aceitos\n");
    }else{
        printf("Valores nao aceitos\n");
	}
	return 0;
}
