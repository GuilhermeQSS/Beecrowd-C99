//Write an algorithm that reads two floating values (x and y), which should represent the coordinates of a point in a plane. Next, determine which quadrant the point belongs, or if you are at one of the Cartesian axes or the origin (x = y = 0).
//
//If the point is at the origin, write the message "Origem".
//
//If the point is at X axis write "Eixo X", else if the point is at Y axis write "Eixo Y".
//
//Input
//The input contains the coordinates of a point.
//
//Output
//The output should display the quadrant in which the point is.

#include<stdio.h>

int quadrante(double x, double y){
	if(x==0 && y==0){
		return 0;
	}else if(x==0){
		return -1;
	}else if(y==0){
		return -2;
	}else if(x>0 && y>0){
		return 1;
	}else if(x<0 && y>0){
		return 2;
	}else if(x<0 && y<0){
		return 3;
	}
	return 4;
}

int main(){
	double x,y;
	int Q;
	scanf("%lf%lf",&x,&y);
	Q = quadrante(x,y);
	switch(Q){
		case 0:{
			printf("Origem\n");
			break;
		}
		case -1:{
			printf("Eixo Y\n");
			break;
		}
		case -2:{
			printf("Eixo X\n");
			break;
		}
		default:{
			printf("Q%d\n",Q);
			break;
		}
	}
	return 0;
}
