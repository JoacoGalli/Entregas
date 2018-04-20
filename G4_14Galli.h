#include <stdio.h>


#ifndef ejercicio1404__H
#define ejercicio1404__H 1


#define MSJ_INGRESO_OBJETIVO "Ingrese el objetivo del 1 al 5"
#define MSJ_ERROR_LECTURA_OBJETIVO "No se puede leer el objetivo"
#define MSJ_ERROR_OBJETIVO "El numero elegido como objetivo es invalido"
#define MSJ_ENCONTRADO "El valor existe y esta en la posicion"
#define MSJ_NO_ENCONTRADO "El valor no existe en el vector"

int busqueda_binaria(const int v[], int objetivo, int valorMedio, size_t izq, size_t der);

#endif