// Voy a explicar qué es malloc: Malloc es una función que reserva el espacio indicado de bytes en la memoria ram.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int *)malloc(4); // de esta manera indicamos que el punter *p 
                              // lleva al primer espacio de la memoria reservada por malloc.
                              // es importante castear el tipo de variable que devolverá malloc.
                              // Lo normal es usar el sizef e indicar el tipo de variable: (int *)malloc(sizeof(int))  

    //malloc no inicializa nos bloques de memoria que reserva y puede
    //darse el caso que ya hubiese información alojada en los byte.
     *p = 10;

    printf("El contenido alojado en el apuntado *p es:%d\n", *p);
}