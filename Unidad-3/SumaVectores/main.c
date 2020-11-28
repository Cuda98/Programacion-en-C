#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int arraySize = 0;
    printf("Defina el size del vector: ");
    scanf("%d",&arraySize);

    int array1[arraySize];
    int array2[arraySize];
    int array3[arraySize];

       printf("\t\t\t\n\n---RELLENO E IMPRESION DEL VECTOR 1---\n\n");

    for(int i = 0; i<arraySize; i++) // Relleno de vector 1
    {
        printf("Posicion: %d, ingrese el valor: ",i);
        scanf("%d",&array1[i]);
    }

     for (int i = 0; i < arraySize; i++) // Impresion del vector 1
    {
        printf("En la posicion: %d, el valor es de: %d\n",i,array1[i]);
    }

    printf("\t\t\t\n\n---RELLENO E IMPRESION DEL VECTOR 2---\n\n");

    for(int i = 0; i < arraySize; i++) // Relleno del vector 2
    {
        printf("Posicion: %d, ingrese el valor: ",i);
        scanf("%d",&array2[i]);
    }

    for (int i = 0; i < arraySize; i++) // Impresion del vector 2
    {
        printf("En la posicion: %d, el valor es de: %d\n",i,array2[i]);
    }

    // -------------------------------- Sumatoria de array 1 y 2 --------------------------------------- //

    for (int i = 0; i<arraySize; i++)
    {
        array3[i] = array1[i] + array2[i];
    }

    printf("La sumatoria de los 2 vectores es: ");
    for (int i = 0; i<arraySize; i++)
    {
        printf("%d, ",array3[i]);
    }

    return 0;
}
