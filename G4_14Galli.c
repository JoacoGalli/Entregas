#include <stdio.h>
#include <stdlib.h>

#include "ejercicio1404.h"

int main(void){

	int v[]={1,2,3,4,5},objetivo;
	size_t der=5, izq=0;
	int valorMedio;
	char c;

	printf("%s\n",MSJ_INGRESO_OBJETIVO);
	if(scanf("%d",&objetivo)!=1){
		fprintf(stderr, "%s\n",MSJ_ERROR_LECTURA_OBJETIVO);
		return EXIT_FAILURE;
	}
	while((c=getchar())!='\n'&& c!= EOF)
		;

	if (objetivo>der)
	{
		fprintf(stderr, "%s\n", MSJ_ERROR_OBJETIVO);
		return EXIT_FAILURE;
	}
	else
	{

	printf("El valor buscado existe y se ubica en: %d\n",busqueda_binaria(v, objetivo, valorMedio, izq, der));

	}


	return EXIT_SUCCESS;
}

int busqueda_binaria(const int v[], int objetivo, int valorMedio, size_t izq, size_t der){
	

		do
		{
			valorMedio = ((der - izq)/2) + izq;
			
		
			if (v[valorMedio]>objetivo)
			{
				izq = izq;
				der = valorMedio;
				
			/*printf("%s %d\n",MSJ_ENCONTRADO, valorMedio);*/
			
			}

			else if (v[valorMedio]<objetivo)
			{
				izq = valorMedio;
				der = der;
			}
			fprintf(stderr, "objetivo = %d\n", valorMedio);
			/*printf("%s %d\n",MSJ_ENCONTRADO, valorMedio);*/
			
		}
			while( v[valorMedio] != objetivo);
	return valorMedio;
}







