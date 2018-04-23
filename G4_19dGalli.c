#include <stdio.h>
#include <stdlib.h>

#include "ejercicio19.h"

int main (void)
{   int M[MAX_FILAS][MAX_COLUMNAS], N[MAX_FILAS][MAX_COLUMNAS];
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
	if(nfilas<0 || nfilas>MAX_FILAS){
		fprintf(stderr, "%s\n",MSJ_ERROR_FILAS);
		return EXIT_FAILURE;	
	}

	printf("%s\n", MSJ_INGRESO_COLUMNAS);
	if(scanf("%d",&ncols)!=1){
		fprintf(stderr, "%s\n",MSJ_ERROR_COLUMNAS);
		return EXIT_FAILURE;
	}
	while((c=getchar())!='\n'&& c!= EOF)
		;
	if(ncols<0 || nfilas>MAX_COLUMNAS){
		fprintf(stderr, "%s\n",MSJ_ERROR_FILAS);
		return EXIT_FAILURE;	
	}

	puts(MSJ_INGRESO_MATRIZ);
	for (i=0; i<nfilas; i++){
		for (j = 0; j < ncols; j++)
		{	
			printf(MSJ_INGRESO_VALORES"[%d][%d]\n",i,j);
			if(scanf("%d",&M[i][j])!=1){
				fprintf(stderr, "%s\n",MSJ_ERROR_INGRESO_MATRIZ);
				return EXIT_FAILURE;
			}
			while((c=getchar())!='\n'&& c!= EOF)
				;
		}
	}

	transpuesta(M, nfilas, ncols, N);

	for (i = 0; i < nfilas; i++)
	{
		for (j = 0; j < ncols; j++)
		{
			printf(MSJ_VALOR"[%d][%d]  %d\n",i+1,j+1, N[i][j]);
		}
	}

	return EXIT_SUCCESS;
}

int transpuesta(int A[][MAX_COLUMNAS], size_t nfilas, size_t ncols, int B[MAX_FILAS][MAX_COLUMNAS]){
	size_t i, j;
	
	
	for (i = 0; i < nfilas; i++)
	{
		for (j = 0; j < ncols; j++)
		{
			B[j][i]=A[i][j];
		}
		
	}
	return EXIT_SUCCESS;
}