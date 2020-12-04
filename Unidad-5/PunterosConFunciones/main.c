#include <stdio.h>
#include <stdlib.h>

void cargarNumero(int * n); // va a recibir un puntero al número que quiere cargar

int main()
{
    int numero= 10;
    printf("Numero: %d\n",numero);

    //int * ptr; // creamos un puntero
    //ptr = &numero; // que apunte a la posición de memoria de la variable "numero"
    //cargarNumero(ptr); // y le enviamos eso como parámetro a la funcion, recordá que la función recibe un puntero

    // --------------------------
    //Si querés evitar generar una variable puntero, asignarla y mandarla como parametro, podés crear una función que le mande la dirección de memoria de la variable
    // a la cual le querés cargar el número.
    //cargarNumero(&numero)

    cargarNumero(&numero);

    printf("\nNumero nuevo: %d\n",numero);




    return 0;
}

void cargarNumero(int * n)
{
    *n = 1999; // en esta dirección de memoria quiero guardar el valor 1999
}
