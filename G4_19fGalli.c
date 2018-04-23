#include <stdio.h>
#include <stdlib.h>

#include "ejercicio19.h"

int main (void)
{   int M[MAX_FILAS][MAX_COLUMNAS], det;
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
	if(nfilas==2)
		det = determinante(M);

	else if (nfilas==3)
	{
		det = determinante3x3(M);
	}
	printf("%d\n", det);
	
	
	return EXIT_SUCCESS;
}

int determinante(int M[][MAX_COLUMNAS]){
	
	
		
	return (M[0][0]*M[1][1])-(M[0][1]*M[1][0]);
}

int determinante3x3(int M[][MAX_COLUMNAS]){
	return M[0][0]*(M[1][1]*M[2][2]-M[1][2]*M[2][1])-M[0][1]*(M[1][0]*M[2][2]-M[1][2]*M[2][0])+M[0][2]*(M[1][0]*M[2][1]-M[1][1]*M[2][0]);
}