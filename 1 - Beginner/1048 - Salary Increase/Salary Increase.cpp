//The company ABC decided to give a salary increase to its employees, according to the following table:
//
//Salary 	Readjustment Rate
//
//0 - 400.00			15%
//400.01 - 800.00		12%
//800.01 - 1200.00		10%
//1200.01 - 2000.00		7%
//Above 2000.00			4%
//
//Read the employee's salary, calculate and print the new employee's salary, as well the money earned and the increase percentual obtained by the employee, with corresponding messages in Portuguese, as the below example.
//
//
//Input
//The input contains only a floating-point number, with 2 digits after the decimal point.
//
//Output
//Print 3 messages followed by the corresponding numbers (see example) informing the new salary, the among of money earned (both must be shown with 2 decimal places) and the percentual obtained by the employee. Note:
//Novo salario:  means "New Salary"
//Reajuste ganho: means "Money earned"
//Em percentual: means "In percentage"

#include<stdio.h>

double aumento(double salario){
	if(salario<=400){
		return 0.15;
	}else if(salario<=800){
		return 0.12;
	}else if(salario<=1200){
		return 0.1;
	}else if(salario<=2000){
		return 0.07;
	}
	return 0.04;
}

int main(){
	double salario,novoSalario,reajuste,percentual;
	scanf("%lf",&salario);
	percentual = aumento(salario);
	reajuste = salario * percentual;
	novoSalario = salario + reajuste;
	printf("Novo salario: %.2lf\n",novoSalario);
	printf("Reajuste ganho: %.2lf\n",reajuste);
	printf("Em percentual: %.0lf %%\n",percentual*100);
	return 0;
}
