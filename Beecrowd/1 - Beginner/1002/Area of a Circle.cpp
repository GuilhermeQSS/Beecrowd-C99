//Read two integer values, in this case, the variables A and B. After this, calculate the sum between them and assign it to the variable SOMA. Write the value of this variable.
//
//Input
//The input file contains 2 integer numbers.
//
//Output
//Print the message "SOMA" with all the capital letters, with a blank space before and after the equal signal followed by the corresponding value to the sum of A and B. Like all the problems, don't forget to print the end of line, otherwise you will receive "Presentation Error"

#include<stdio.h>
#include<math.h>
#define M_PI 3.14159
double calcularAreaCirculo(double raio){
	return M_PI * pow(raio,2);
}

int main(){
	double raio;
	scanf("%lf",&raio);
	printf("A=%.4lf\n",calcularAreaCirculo(raio));
	return 0;
}
