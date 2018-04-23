#include <stdio.h>
#include <stdlib.h>

#include "ejercicio19.h"

int main (void)
{   int A[MAX_FILAS][MAX_COLUMNAS], B[MAX_FILAS][MAX_COLUMNAS], C[MAX_FILAS][MAX_COLUMNAS];
	size_t i, j;
	int  afilas, acols, bfilas2, bcols2;
	char c;

	
	printf("%s\n", MSJ_INGRESO_FILAS);
	if(scanf("%d",&afilas)!=1){
		fprintf(stderr, "%s\n",MSJ_ERROR_FILAS);
		return EXIT_FAILURE;
	}
	while((c=getchar())!='\n'&& c!= EOF)
		;

	printf("%s\n", MSJ_INGRESO_COLUMNAS);
	if(scanf("%d",&acols)!=1){
		fprintf(stderr, "%s\n",MSJ_ERROR_COLUMNAS);
		return EXIT_FAILURE;
	}
	while((c=getchar())!='\n'&& c!= EOF)
		;

	puts(MSJ_INGRESO_MATRIZ);
	for (i=0; i<afilas; i++){
		for (j = 0; j < acols; j++)
		{	
			printf(MSJ_INGRESO_VALORES"[%d][%d]\n",i+1,j+1);
			if(scanf("%d",&A[i][j])!=1){
				fprintf(stderr, "%s\n",MSJ_ERROR_INGRESO_MATRIZ);
				return EXIT_FAILURE;
			}
			while((c=getchar())!='\n'&& c!= EOF)
				;
		}
	}

	bfilas2 =acols;

	printf("%s\n", MSJ_INGRESO_COLUMNAS);
	if(scanf("%d",&bcols2)!=1){
		fprintf(stderr, "%s\n",MSJ_ERROR_COLUMNAS);
		return EXIT_FAILURE;
	}
	while((c=getchar())!='\n'&& c!= EOF)
		;

	puts(MSJ_INGRESO_MATRIZ);
	for (i=0; i<bfilas2; i++){
		for (j = 0; j < bcols2; j++)
		{	
			printf(MSJ_INGRESO_VALORES"[%d][%d]\n",i+1,j+1);
			if(scanf("%d",&B[i][j])!=1){
				fprintf(stderr, "%s\n",MSJ_ERROR_INGRESO_MATRIZ);
				return EXIT_FAILURE;
			}
			while((c=getchar())!='\n'&& c!= EOF)
				;
		}
	}
	printf(MSJ_MATRIZ_A"\n");
	printf("\n");
	for(i=0; i<afilas; i++){
		printf("\n");
		for(j=0; j<acols;j++){
			printf("%2d", A[i][j] );
		}
	}
	printf("\n");
	printf(MSJ_MATRIZ_B"\n");
	printf("\n");
	for(i=0; i<bfilas2; i++){
		printf("\n");
		for(j=0; j<bcols2;j++){
			printf("%2d", B[i][j] );
		}
	}
	printf("\n");
	mult_matriz(A,afilas,acols,B, bfilas2,bcols2,C);
	
	printf(MSJ_MATRIZ_C"\n");
	printf("\n");
	for(i=0; i<afilas; i++){
		printf("\n");
		for(j=0; j<bcols2; j++){
			printf("%2d", C[i][j]);		
		}
	}
	printf("\n");

	return EXIT_SUCCESS;
}




int mult_matriz(int A[][MAX_COLUMNAS], size_t afilas, size_t acols,int B[][MAX_COLUMNAS], size_t bfilas2, size_t bcols2,int C[MAX_FILAS][MAX_COLUMNAS]){
	 
	size_t i,j,k;

	for(i=0; i<afilas; i++){    /*para las filas de la matriz O*/
		for(j=0; j<bcols2; j++){    /*para las columnas de la matriz O*/
			C[i][j]=0;

			for(k=0; k<acols; k++){
				C[i][j]+= A[i][k]*B[k][j];

				
			}
		}
	}
	return EXIT_SUCCESS;
}


