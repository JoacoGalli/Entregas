#include <stdio.h>
#include <stdlib.h>

#define MSJ_INGRESO_NUMERO_DIA "Ingrese el numero deseado para calcular el dia"
#define MSJ_ERROR "Error al ingresar un numero"

int main(void)
{
	int i;
	int dia;

	printf("%s\n",MSJ_INGRESO_NUMERO_DIA); /*pido al usuario que ingrese un numero*/
	if(scanf("%i", &dia)!=1){
		fprintf(stderr, "%s\n", MSJ_ERROR );
	} /*leo el numero*/
	if(dia>0 && dia<365)
		{i= (dia+7)%7;

		switch (i){
			case 1:
			puts("El dia seleccionado es Domingo");
			break;
			case 2:
			puts("El dia seleccionado es Lunes");
			break;
			case 3:
			puts("El dia seleccionado es Martes");
			break;
			case 4:
			puts("El dia seleccionado es Miercoles");
			break;
			case 5:
			puts("El dia seleccionado es Jueves");
			break;
			case 6:
			puts("El dia seleccionado es Viernes");
			break;
			case 0:/*Puede ser que si no esten bien distribuidos los dias sea por esto.*/
			puts("El dia seleccionado es Sabado");
			break;
			default:
			fprintf(stderr, "%s\n",MSJ_ERROR );
		}
	}
	else fprintf(stderr, "%s\n", MSJ_ERROR);

	return EXIT_SUCCESS;
}