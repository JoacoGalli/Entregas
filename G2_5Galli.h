#include <stdio.h>


#ifndef ejercicio5__H
#define ejercicio5__H 1

#define MSJ_INGRESE_TEMP "Ingrese la temperatura del cuerpo celeste en kelvin"
#define MSJ_ERROR_LECTURA "Error al leer la temperatura"
#define CLASE_O "O"
#define CLASE_B "B"
#define CLASE_A "A"
#define CLASE_F "F"
#define MINIMA_TEMP 1700
#define MAXIMA_TEMP 50000
#define MSJ_ERROR_TEMP "La temperatura indicada no esta en el rango adecuado para los cuerpos celestes"
#define MAXIMA_TEMP_M 3200
#define MAXIMA_TEMP_K 4600
#define MAXIMA_TEMP_G 5700
#define MAXIMA_TEMP_F 7100
#define MAXIMA_TEMP_A 9600
#define MAXIMA_TEMP_B 28000
#define MAXIMA_TEMP_O 50000
#define MSJ_COLOR_ROJO "El color de dicho espectro es Rojo"
#define MSJ_COLOR_NARANJA "El color de dicho espectro es Naranja"
#define MSJ_COLOR_AMARILLO "El color de dicho espectro es Amarillo"
#define MSJ_COLOR_BLANCO_AMARILLENTO "El color de dicho espectro es Blanco Amarillento"
#define MSJ_COLOR_BLANCO "El color de dicho espectro es Blanco"
#define MSJ_COLOR_BLANCO_AZULADO "El color de dicho espectro es Blanco Azulado"
#define MSJ_COLOR_AZUL "El color de dicho espectro es Azul"

typedef enum {
	CLASE_O,
	CLASE_B,
	CLASE_A,
	CLASE_F,
	CLASE_G,
	CLASE_K,
	CLASE_M
} espectral_t;

#endif