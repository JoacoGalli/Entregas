#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "G5_2Galli.h"

int main(void)
{
	int segundos;
	char c;

	printf("%s\n", MSJ_INGRESO_SEGUNDOS);
	if(scanf("%d",&segundos)!=1){
		fprintf(stderr, "%s\n",MSJ_ERROR_SEGUNDOS);
		return EXIT_FAILURE;
	}
	while((c=getchar())!='\n'&& c!= EOF)
		;

	
	convertir (segundos);

	return EXIT_SUCCESS;
}

void convertir(int segundos){
	int hora, min, seg, v[3], i;


	min = segundos/60;

	hora = min/60;

	seg = segundos%60;

	min = min%60;

	v[0]=hora;
	v[1]=min;
	v[2]=seg;

	printf("%s", MSJ_IMPRIMIR_HORA);
	
	

		printf("%d h ",*(v+0));
		printf("%d m ",*(v+1));
		printf("%d s ",*(v+2));
	
}