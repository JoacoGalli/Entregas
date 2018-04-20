#include <stdio.h>
#include <stdlib.h>

#include "ejercicio5.h"



int main(void)
{
	float temp;
	espectral_t clase;
	char c;

	puts(MSJ_INGRESE_TEMP);
	if(scanf("%f",&temp)!=1){
		fprintf(stderr, "%s\n",MSJ_ERROR_LECTURA);
		return EXIT_FAILURE;
	}
	while((c=getchar())!='\n'&& c!= EOF)
		;

	if (temp<MINIMA_TEMP || temp>MAXIMA_TEMP)
	{
		fprintf(stderr, "%s\n", MSJ_ERROR_TEMP );
		return EXIT_FAILURE;
	}

	else if (temp>=MINIMA_TEMP && temp<=MAXIMA_TEMP_M)
	{
		clase = M;
	}

	else if (temp>MAXIMA_TEMP_M && temp<=MAXIMA_TEMP_K)
	{
		clase = K;
	}

	else if (temp>MAXIMA_TEMP_K && temp<=MAXIMA_TEMP_G)
	{
		clase = G;
	}	

	else if (temp>MAXIMA_TEMP_G && temp<=MAXIMA_TEMP_F)
	{
		clase = F;
	}

	else if (temp>MAXIMA_TEMP_F && temp<=MAXIMA_TEMP_A)
	{
		clase = A;
	}

	else if (temp>MAXIMA_TEMP_A && temp<=MAXIMA_TEMP_B)
	{
		clase = B;
	}

	else if (temp>MAXIMA_TEMP_B && temp<=MAXIMA_TEMP_O)
	{
		clase = O;
	}


	switch (clase){
		case M:
			puts(MSJ_COLOR_ROJO);
			break;

		case K:
			puts(MSJ_COLOR_NARANJA);
			break;

		case G:
			puts(MSJ_COLOR_AMARILLO);
			break;

		case F:
			puts(MSJ_COLOR_BLANCO_AMARILLENTO);
			break;

		case A:
			puts(MSJ_COLOR_BLANCO);
			break;

		case B:
			puts(MSJ_COLOR_BLANCO_AZULADO);
			break;

		default:
			puts(MSJ_COLOR_AZUL);
	}

	return EXIT_SUCCESS;
}