#include <stdio.h>
#include <stdlib.h>

#ifndef ejercicio19b__H
#define ejercicio19b__H 1



#define MAX_COLUMNAS 50
#define MAX_FILAS 50
#define MSJ_INGRESO_FILAS "Ingrese la cantidad de filas de la matriz"
#define MSJ_INGRESO_MATRIZ "Ingrese de a uno y por filas los numeros de la matriz"
#define MSJ_ERROR_FILAS "Error al ingresar las filas"
#define MSJ_ERROR_INGRESO_MATRIZ "Error al ingresar el valor para la matriz"
#define MSJ_INGRESO_NUMERO_SUMAR "Ingrese el numero a sumar"
#define MSJ_INGRESO_NUMERO_MULT "Ingrese el numero a multiplicar"
#define MSJ_ERROR_NUMERO "Error al ingresar el numero"
#define MSJ_INGRESO_VALORES "Ingrese el valor para la posicion"
#define MSJ_INGRESO_COLUMNAS "Ingrese la cantidad de columnas de la matriz"
#define MSJ_ERROR_COLUMNAS "El numero especificado para las columnas es invalido"
#define MSJ_VALOR "La transpuesta da en "
#define MSJ_MAYOR "El mayor elemento de la matriz es ="
#define MSJ_MATRIZ_A "Matriz A"
#define MSJ_MATRIZ_B "Matriz B"
#define MSJ_MATRIZ_C "Matriz C"
#define MSJ_MATRIZ_POSITIVA "La matriz es positiva"
#define MSJ_MATRIZ_NEGATIVA "La matriz es negativa"
#define MSJ_MATRIZ_NO_POSITIVA "La matriz es no positiva"
#define MSJ_MATRIZ_NO_NEGATIVA "La matriz es no negativa"
#define MSJ_MATRIZ_SIN_SIGNO "La matriz no cumple ninguna condicion"

double traza_matriz(double M[][MAX_COLUMNAS], size_t nfilas, size_t ncols);
int suma_numero(int M[][MAX_COLUMNAS], size_t nfilas, size_t ncols, int num);
int mult_numero(int M[][MAX_COLUMNAS], size_t nfilas, size_t ncols, int num);
int transpuesta(int M[][MAX_COLUMNAS], size_t nfilas, size_t ncols, int N[MAX_FILAS][MAX_COLUMNAS]);
int signo_matriz(int M[][MAX_COLUMNAS], size_t nfilas, size_t ncols);
int vec(int v[], int valorActual);
int determinante(int M[][MAX_COLUMNAS]);
int determinante3x3(int M[][MAX_COLUMNAS]);
int mult_matriz(int A[][MAX_COLUMNAS], size_t afilas, size_t acols,int B[][MAX_COLUMNAS], size_t bfilas2, size_t bcols2,int C[MAX_FILAS][MAX_COLUMNAS]);
int mayor(int A[MAX_FILAS][MAX_COLUMNAS], size_t nfilas, size_t ncols);
int suma_filas(int A[MAX_FILAS][MAX_COLUMNAS], size_t nfilas, size_t ncols);
int suma_cols(int A[MAX_FILAS][MAX_COLUMNAS], size_t nfilas, size_t ncols);

#endif