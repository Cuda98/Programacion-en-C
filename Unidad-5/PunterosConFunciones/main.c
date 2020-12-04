#include <stdio.h>
#include <stdlib.h>

void cargarNumero(int * n); // va a recibir un puntero al n�mero que quiere cargar

int main()
{
    int numero= 10;
    printf("Numero: %d\n",numero);

    //int * ptr; // creamos un puntero
    //ptr = &numero; // que apunte a la posici�n de memoria de la variable "numero"
    //cargarNumero(ptr); // y le enviamos eso como par�metro a la funcion, record� que la funci�n recibe un puntero

    // --------------------------
    //Si quer�s evitar generar una variable puntero, asignarla y mandarla como parametro, pod�s crear una funci�n que le mande la direcci�n de memoria de la variable
    // a la cual le quer�s cargar el n�mero.
    //cargarNumero(&numero)

    cargarNumero(&numero);

    printf("\nNumero nuevo: %d\n",numero);




    return 0;
}

void cargarNumero(int * n)
{
    *n = 1999; // en esta direcci�n de memoria quiero guardar el valor 1999
}
