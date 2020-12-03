#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("------PUNTEROS------\n\n");
    //Un puntero es un número donde se almacena la posición de memoria

    int numero = 11;

    int * puntero1; // puntero1 va a apuntar a un int
    puntero1 = &numero; // Señalamos a donde apuntar

    printf("---> %d\n",numero); // va a imprimir el valor alojado el numero (11)
    printf("---> %d\n",puntero1); // va a imprimir la posición de memoria en donde está guardado número
    printf("---> %d\n",*puntero1); // dame el número q está guardado en esa posición

    // Puntero con vector

    int vector[5] = {6, -1, 66, 3, 21};
    int * puntero2;
    puntero2 = &vector[0];

    printf("\n\nPuntero con vectores");
    printf("\n---> %d\n",puntero2);
    printf("---> %d\n",*puntero2);

    puntero2 = &vector[1]; // apunto a la dirección 1
    printf("\n---> %d\n",puntero2); // mmuestro la posición/direccion
    printf("---> %d\n",*puntero2); // muestro el valor almacenado en esa dirección

    printf("\n-----------------------------PARTE 2-----------------------------\n\n");

    int n1 = 3;
    int n2 = 0;

    int * ptrEntero;

    ptrEntero = &n1;
    printf("%d - Puntero\n",ptrEntero);
    printf("%d - Dato\n\n",*ptrEntero);

    ptrEntero = &n2; // apunta a la dirección de memoria de n2
    printf("%d - Puntero\n",ptrEntero);
    printf("%d - Dato\n\n",*ptrEntero);

    *ptrEntero = 11; // Le asignamos el valor 11 a la posición a la cual está apuntando, en este caso n2
    printf("%d - Puntero\n", ptrEntero);
    printf("%d - Dato\n", *ptrEntero);
    printf("%d n1, %d n2 \n",n1,n2);

    printf("\n-----------------------------PARTE 3, PUNTEROS CON VECTORES-----------------------------\n\n");

    char letra = 'b';
    char palabra[10] = "Nicolas";

    //Creamos un puntero a un array
    char * ptrArray;
    ptrArray = &letra;

    printf("%d Puntero\n",ptrArray); // Imprime la posición en donde está alojado el char
    printf("%c Valor\n\n",*ptrArray); // Imprime el valor de la posición de memoria a la cual apunta

    ptrArray = &palabra[0]; // podría ser ptrArray = palabra y apuntaría a la primer posición del array palabra.

    printf("%d Puntero\n",ptrArray);
    printf("%c Valor\n\n",*ptrArray);

    ptrArray= &palabra[1];

    printf("%d Puntero\n",ptrArray);
    printf("%c Valor\n\n",*ptrArray);

    ptrArray = &palabra[2];

    printf("%d Puntero\n",ptrArray);
    printf("%c Valor\n\n",*ptrArray);

    ptrArray = palabra; // apunta a la primer posición del vector palabra

    printf("%c Valor\n",*ptrArray);
    printf("%c Valor\n",*(ptrArray+1));
    printf("%c Valor\n",*(ptrArray+2));
    printf("%c Valor\n",*(ptrArray+3));
    printf("%c Valor\n",*(ptrArray+4));
    printf("%c Valor\n",*(ptrArray+5));
    printf("%c Valor\n",*(ptrArray+6));



    return 0;
}
