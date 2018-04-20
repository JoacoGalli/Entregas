#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#include "a13G3Galli.h"

int main(void)
{	double x, a, b;
	size_t i;
	srand(time(NULL));

	for (i=0; i<10000; i++){
			switch(probabilidad_a()){
				case 0:
					a++;
					break;
				case 1:
					b++;break;
			}
		}
		a=a/10000;
		b=b/10000;
	printf("%f  %f\n",a,b);
	x = probabilidad_a();
	printf("%f\n", x);
	return EXIT_SUCCESS;
}


int probabilidad_a(){
	double x;

	x=rand()/RAND_MAX;

	if(x<0.2){
		return 0;
	}

	if(x>=0.2){
		return 1;
	}

	return EXIT_SUCCESS;
}

int probabilidad_b(){
	int x;

	x=rand()/RAND_MAX;

	if(x>0 && x<0.1){
		return 3;
	}

	else if(x>=0.1 && x<0.65){
		return 5;
	}

	else if(x>=0.65 && x<=1){
		return 9;
	}
	return EXIT_SUCCESS;

}

void probabilidad_c(){
	double x;

	x = rand()%2;

	if(x<0.5){
		printf("%s\n", CARA);
	}

	else {
		printf("%s\n", CECA);
	}

}


void dado(){

	switch(rand()%6)
	{
		case 0:
			puts ("|   |");
			puts ("| * |");
			puts ("|   |");
			break;
		case 1:
			puts ("|  *|");
			puts ("|   |");
			puts ("|*  |");
			break;
		case 2:
			puts ("|*  |");
			puts ("| * |");
			puts ("|  *|");
			break;
		case 3:
			puts ("|* *|");
			puts ("|   |");
			puts ("|* *|");
			break;
		case 4:
			puts ("|* *|");
			puts ("| * |");
			puts ("|* *|");
			break;
		case 5:
			puts ("|* *|");
			puts ("|* *|");
			puts ("|* *|");
			break;
		default:
			fprintf(stderr, "%s\n", MSJ_ERROR_DADO);
	}
}


