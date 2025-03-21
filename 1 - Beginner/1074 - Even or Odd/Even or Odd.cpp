//Read an integer value N. After, read these N values and print a message for each value saying if this value is odd, even, positive or negative. In case of zero (0), although the correct description would be "EVEN NULL", because by definition zero is even, your program must print only "NULL", without quotes.
//
//Input
//The first line of input is an integer N (N < 10000), that indicates the total number of test cases. Each case is a integer number X (-107 < X <107)..
//
//Output
//For each test case, print a corresponding message, according to the below example. All messages must be printed in uppercase letters and always will have one space between two words in the same line.[

#include<stdio.h>

int isNull(int num){
	return num==0;
}
int isPositive(int num){
	return num>0;
}
int isEven(int num){
	return num%2==0;
}

int main(){
	int casos,num;
	scanf("%d",&casos);
	while(0<casos){
		scanf("%d",&num);
		if(isNull(num)){
			printf("NULL\n");
		}else{
			if(isEven(num)){
				printf("EVEN ");
			}else{
				printf("ODD ");
			}
			if(isPositive(num)){
				printf("POSITIVE\n");
			}else{
				printf("NEGATIVE\n");
			}
		}
		casos--;
	}
	return 0;
}
