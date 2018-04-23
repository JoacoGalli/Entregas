#include <stdio.h>
#include <stdlib.h>

#include "ejercicio19.h"

int main (void)
{   int M[MAX_FILAS][MAX_COLUMNAS], num;
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
			
			if(scanf("%d",&M[i][j])!=1){
				fprintf(stderr, "%s\n",MSJ_ERROR_INGRESO_MATRIZ);
				return EXIT_FAILURE;
			}
			while((c=getchar())!='\n'&& c!= EOF)
				;
		}
	}
	puts(MSJ_INGRESO_NUMERO_MULT);
	if(scanf("%d",&num)!=1){
		fprintf(stderr, "%s\n",MSJ_ERROR_NUMERO);
		return EXIT_FAILURE;
	}
	while((c=getchar())!='\n'&& c!= EOF)
		;

	mult_numero(M,nfilas,ncols,num);
	for (i = 0; i < nfilas; i++)
	{
		for (j = 0; j < ncols; j++)
		{
			printf("%d\n", M[i][j]);
		}
	}
	
	return EXIT_SUCCESS;
}

int mult_numero(int M[][MAX_COLUMNAS], size_t nfilas, size_t ncols, int num){
	size_t i, j;
	
	
	for (i = 0; i < nfilas; i++)
	{
		for (j = 0; j < ncols; j++)
		{
			 M[i][j] *= num;
		
		}
	}
	return EXIT_SUCCESS;
}