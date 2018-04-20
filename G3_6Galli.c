#include <stdio.h>
#include <stdlib.h>

#include "ejercicio6.h"

double cilindro_diametro(double radio);
double cilindro_circunferencia(double radio);
double cilindro_base(double radio);
double cilindro_volumen(double radio, double altura);


int main (void)
{
	double radio, altura, diametro, circunferencia, base, volumen;
	char c;

	puts(MSJ_INGRESO_RADIO);
	if(scanf("%lf",&radio)!=1){
		fprintf(stderr, "%s\n",MSJ_ERROR_LECTURA_RADIO);
		return EXIT_FAILURE;
	}
	while((c=getchar())!='\n'&& c!= EOF)
		;

	puts(MSJ_INGRESO_ALTURA);
		if(scanf("%lf",&altura)!=1){
		fprintf(stderr, "%s\n",MSJ_ERROR_LECTURA_ALTURA);
		return EXIT_FAILURE;
	}
	while((c=getchar())!='\n'&& c!= EOF)
		;

	diametro = cilindro_diametro(radio);
	printf(MSJ_DIAMETRO_CILINDRO"%f\n", diametro);

	circunferencia = cilindro_circunferencia(radio);
	printf(MSJ_CIRCUNFERENCIA_CILINDRO"%f\n", circunferencia);

	base = cilindro_base(radio);
	printf(MSJ_BASE_CILINDRO"%f\n", base);

	volumen = cilindro_volumen(radio, altura);
	printf(MSJ_VOLUMEN_CILINDRO"%f\n", volumen);

	return EXIT_SUCCESS;
}

double cilindro_diametro(double radio){
	return radio*2;
}

double cilindro_circunferencia(double radio){
	return 2*M_PI*radio;
}

double cilindro_base(double radio){
	return M_PI*radio*radio;
}

double cilindro_volumen(double radio, double altura){
	return M_PI*radio*radio*altura;
}