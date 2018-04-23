#include <stdio.h>
#include <stdlib.h>

#include "ejercicio19.h"

int main (void)
{   double M[MAX_FILAS][MAX_COLUMNAS], traza;
	size_t i, j;
	int  nfilas, ncols;
	char c;
	
	printf("%s\n", MSJ_INGRESO_FILAS);
	if(scanf("%d",&nfilas)!=1){
		fprintf(stderr, "%s\n",MSJ_ERROR_FILAS);
		return EXIT_FAILURE;
	}
	while((c=getchar())!='\n'&& c!= EOF)
		;

	ncols=nfilas;

	puts(MSJ_INGRESO_MATRIZ);
	for (i=0; i<nfilas; i++){
		for (j = 0; j < ncols; j++)
		{	
			if(scanf("%lf",&M[i][j])!=1){
				fprintf(stderr, "%s\n",MSJ_ERROR_INGRESO_MATRIZ);
				return EXIT_FAILURE;
			}
			while((c=getchar())!='\n'&& c!= EOF)
				;
		}
	}
	traza = traza_matriz(M,nfilas,ncols);

	

	printf("%f\n", traza);

	return EXIT_SUCCESS;
}

double traza_matriz(double M[][MAX_COLUMNAS], size_t nfilas, size_t ncols){
	size_t i;
	int suma=0;

	for (i = 0 ; i < nfilas ; i++)
	{
			suma += M[i][i];
		
	}
	return suma;
}

