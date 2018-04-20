#include <stdio.h>
#include <stdlib.h>

void funcion (void){
	static int x = 0;
	x++;
	printf("%d\n", x);
}

int main(void)
{
	funcion();
	funcion();
	funcion();
	funcion();
	funcion();

	return EXIT_SUCCESS;
}

/* Este programa lo que hace es llamar a la funcion 
5 veces, en la primera inicializa una variable
x en cero y la incrementa en 1 para asi imprimirla.
Como esta variable es de modo static, una vez
terminada la funcion, el valor de x que se imprmio
se guarda autamoticamente como el nuevo valor de x,
en la segunda llamada a la funcion, por mas que 
se intente iniciar esta variable de vuelta en cero,
no le hace caso por que no puede ser modificada 
una variable estatica. la incrementa en 1 y ahora
vale 2, y asi lo hace sucesivamente en cada llamado}
hasta el quinto llamado, donde el valor de x es 4
y lo incrementa por ultima vez, y asi el ultimo valor
es el 5 como muestra en la compilacion. */