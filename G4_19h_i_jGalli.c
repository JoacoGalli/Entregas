#include <stdio.h>
#include <stdlib.h>

#include "ejercicio19.h"

int main(void){
int A[MAX_FILAS][MAX_COLUMNAS];
	size_t i, j;
	int  nfilas, ncols, mayor_elemento;
	char c;

	
	printf("%s\n", MSJ_INGRESO_FILAS);
	if(scanf("%d",&nfilas)!=1){
		fprintf(stderr, "%s\n",MSJ_ERROR_FILAS);
		return EXIT_FAILURE;
	}
	while((c=getchar())!='\n'&& c!= EOF)
		;

	printf("%s\n", MSJ_INGRESO_COLUMNAS);
	if(scanf("%d",&ncols)!=1){
		fprintf(stderr, "%s\n",MSJ_ERROR_COLUMNAS);
		return EXIT_FAILURE;
	}
	while((c=getchar())!='\n'&& c!= EOF)
		;

	puts(MSJ_INGRESO_MATRIZ);
	for (i=0; i<nfilas; i++){
		for (j = 0; j < ncols; j++)
		{	
			printf(MSJ_INGRESO_VALORES"[%d][%d]\n",i,j);
			if(scanf("%d",&A[i][j])!=1){
				fprintf(stderr, "%s\n",MSJ_ERROR_INGRESO_MATRIZ);
				return EXIT_FAILURE;
			}
			while((c=getchar())!='\n'&& c!= EOF)
				;
		}
	}

	/*mayor_elemento= mayor(A, nfilas, ncols);*/
	mayor_elemento = suma_filas(A, nfilas, ncols);
	printf(MSJ_MAYOR"%d\n", mayor_elemento);

	return EXIT_SUCCESS;
}


int mayor(int A[MAX_FILAS][MAX_COLUMNAS], size_t nfilas, size_t ncols){
	int mayor=A[0][0];
	size_t i, j;
	

	for (i = 0; i < nfilas; i++){
		for(j=0; j<ncols; j++){
			if(A[i][j]<A[i+1][j+1])
				mayor=A[i+1][j+1];
		}
	}
	return mayor;
}

int suma_filas(int A[MAX_FILAS][MAX_COLUMNAS], size_t nfilas, size_t ncols){

	int suma, mayor;
	size_t i,j;
	int v[MAX_COLUMNAS];


	for( i=0; i<nfilas; i++){
		suma=0;
		for( j=0; j<ncols; j++){
			suma+=A[i][j];
		}
		v[i]=suma;
	}
	mayor = v[0];
	for(i=0; i<nfilas; i++){
		if (v[i]<v[i+1]){
			mayor=v[i+1];
		}
	}
	return mayor;
}

int suma_cols(int A[MAX_FILAS][MAX_COLUMNAS], size_t nfilas, size_t ncols){

	int suma, mayor, v[MAX_COLUMNAS];
	size_t i,j;

	
	for( i=0; i<ncols; i++){
		suma=0;
		for( j=0; j<nfilas; j++){
			suma+=A[j][i];
		}
		v[i]=suma;
	}
	mayor = v[0];
	for(i=0; i<nfilas; i++){
		if (v[i]<v[i+1]){
			mayor = v[i+1];
		}
	}
	return mayor;
}