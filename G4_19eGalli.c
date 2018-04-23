#include <stdio.h>
#include <stdlib.h>

#include "ejercicio19.h"

int main (void)
{   int M[MAX_FILAS][MAX_COLUMNAS];
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
	if(ncols<0 || ncols>MAX_COLUMNAS){
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

	signo_matriz(M, nfilas, ncols);
	
	

	return EXIT_SUCCESS;
}


int signo_matriz(int M[][MAX_COLUMNAS], size_t nfilas, size_t ncols){
	size_t i, j;
	int variableVector[3];

	for(i=0 ; i<nfilas; i++){
		for(j=0; j<ncols; j++){
			*variableVector=vec(variableVector, M[i][j]);			
		}
	}
	if (variableVector[0]==1){
		if(variableVector[1]==1){
			if(variableVector[2]==1){
				printf("%s\n",MSJ_MATRIZ_SIN_SIGNO);
			}else{
				printf("%s\n",MSJ_MATRIZ_NO_NEGATIVA);
			}
		}
		else{
			printf("%s\n", MSJ_MATRIZ_NEGATIVA);
		}
	}else{
		if(variableVector[2]==1){
			if(variableVector[1]==1){
				printf("%s\n", MSJ_MATRIZ_NO_POSITIVA);
			}else{
				printf("%s\n", MSJ_MATRIZ_POSITIVA);
			}
		}
	}
	return EXIT_SUCCESS;
}

int vec(int v[], int valorActual){
	if(valorActual<0){
		v[0]= 1;
	}
	else if(valorActual==0){
		v[1]= 1;
	}
	else v[2]=1;

	return *v;
}