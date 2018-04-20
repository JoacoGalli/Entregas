#include <stdio.h>
#include <stdlib.h>

#include "ejercicio2.h"

int main(void){
	int matriz [3][4] = {{1, 2, 3, 4},{5,6,7,8},{9,10,11,12}};
	int *ptr;
	int (*ptr2vector)[4];
	int fila=3, col=4;
	size_t i, j;

	
	for (i=0; i <fila; i++){
		for(j=0; j <col; j++){
			printf("%s [%d][%d] %d\n",MSJ_IMPRIMIR_MATRIZ, i+1, j+1, *(*(matriz+i)+j) );
		}
	}
	printf("\n");
	printf("\n");

	ptr2vector=matriz;

	for(i=0; i<fila; i++){
		for(j=0; j<col; j++){
			printf("%s [%d][%d] %d\n",MSJ_IMPRIMIR_MATRIZ, i+1, j+1, *(*(ptr2vector+i)+j));
		}
	}
	printf("\n");
	printf("\n");

	ptr=(int *)matriz;

	for(i=0; i<col*fila; i++){
		printf("%s [%d][%d] %d\n",MSJ_IMPRIMIR_MATRIZ, i+1, j+1, *(ptr+i));
	}

	printf("\n");
	printf("\n");

	return EXIT_SUCCESS;
}