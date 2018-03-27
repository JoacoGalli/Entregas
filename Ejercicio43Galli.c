#include <stdio.h>
#include <stdlib.h>

#define MSJ_INGRESO_KM "Ingrese los kilometros recorridos(-1 para terminar)"
#define MSJ_INGRESO_PRECIO_COMBUSTIBLE "Ingrese el precio del combustible por litro"
#define MSJ_INGRESO_MONTO_TOTAL "Ingrese el monto total utilizado en esta compra"
#define MSJ_ERROR "Error el ingresar"
#define MSJ_RENDIMIENTO "Rendimiento (l/100km) de este tanque"
#define MSJ_RENDIMIENTO_PROM "Rendimiento promedio (l/100km)"
#define MSJ_MEJOR_RENDIMIENTO "Mejor rendimiento (l/100km)"
#define MSJ_PEOR_RENDIMIENTO "Peor rendimiento (l/100km)"
#define MSJ_DISTANCIA_TOTAL "Distancia total recorrida (km)"
#define MSJ_COMBUSTIBLE_TOTAL "Combustible total consumidos (l)"
#define MSJ_COSTO_TOTAL "Costo total de su vehiculo ($)"


int main(void)
{
	int km, litro, distTotal=0, autos=0, c;
	float precio, rendimiento, promedio=0,rendimientoMin=999, rendimientoMax=-1, combTotal=0, costoTotal=0;



	puts(MSJ_INGRESO_KM);
	if (scanf("%d\n", &km)!=1){
		fprintf(stderr, "%s\n", MSJ_ERROR);
		return EXIT_FAILURE;
	}
	while((c=getchar())!='\n' && c!=EOF)
		;
	if (km != -1){
	while(km != -1){
		puts(MSJ_INGRESO_PRECIO_COMBUSTIBLE);
		if (scanf("%d\n", &litro)!=1){
			fprintf(stderr, "%s\n", MSJ_ERROR);
			return EXIT_FAILURE;
		}
		while((c=getchar())!='\n' && c!=EOF)
		;
		puts(MSJ_INGRESO_MONTO_TOTAL);
		if (scanf("%f\n", &precio)!=1){
			fprintf(stderr, "%s\n", MSJ_ERROR);
			return EXIT_FAILURE;
		}
		while((c=getchar())!='\n' && c!=EOF)
		;
		rendimiento=litro/km;
		printf("%s >> %.2f\n",MSJ_RENDIMIENTO,rendimiento);
		autos++;
		promedio+=rendimiento;
		if (rendimientoMin>rendimiento)
			rendimientoMin=rendimiento;
		if(rendimientoMax<rendimiento)
			rendimientoMax=rendimiento;
		distTotal+=km;
		combTotal=combTotal + (precio/litro);
		costoTotal+=precio;
		puts(MSJ_INGRESO_KM);
		if (scanf("%d\n", &km)!=1){
			fprintf(stderr, "%s\n", MSJ_ERROR);
			return EXIT_FAILURE;
		}
		while((c=getchar())!='\n' && c!=EOF)
		;
	}
	
	printf("%s >> %.4f \n",MSJ_RENDIMIENTO_PROM, promedio);
	printf("%s >> %.2f \n",MSJ_MEJOR_RENDIMIENTO, rendimientoMin);
	printf("%s >> %.2f \n",MSJ_PEOR_RENDIMIENTO, rendimientoMax);
	printf("%s >> %d \n",MSJ_DISTANCIA_TOTAL, distTotal);
	printf("%s >> %.2f \n",MSJ_COMBUSTIBLE_TOTAL, combTotal);
	printf("%s >> %.2f \n",MSJ_COSTO_TOTAL, costoTotal);
}
	else fprintf(stderr, "%s\n", MSJ_ERROR);

	return EXIT_SUCCESS;
}