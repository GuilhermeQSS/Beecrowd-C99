//Two cars (X and Y) leave in the same direction. The car X leaves with a constant speed of 60 km/h and the car Y leaves with a constant speed of 90 km / h.
//
//In one hour (60 minutes) the car Y can get a distance of 30 kilometers from the X car, in other words, it can get away one kilometer for each 2 minutes.
//
//Read the distance (in km) and calculate how long it takes (in minutes) for the car Y to take this distance in relation to the other car.
//
//Input
//The input file contains 1 integer value.
//
//Output
//Print the necessary time followed by the message "minutos" that means minutes in Portuguese.

#include<stdio.h>

int tempo(int distancia){
	return distancia*2;
}

int main(){
	int distancia;
	scanf("%d",&distancia);
	printf("%d minutos\n",tempo(distancia));
	return 0;
}
