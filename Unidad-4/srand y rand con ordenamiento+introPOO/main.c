#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h" // se incluye el funciones.h

int main()
{
    int size = 10;
    int array[size];
    int array2[size];



    srand(time(NULL)); // Cada vez que ejecutemos el programa en un segundo distinto, genera numeros aleatorios distintos

    printf("---VECTOR 1 ALEATORIO [-50 A 50]---");
    cargarVectorAleatorio(array, size);
    mostrarVectorAleatorio(array, size);

    printf("---VECTOR 2 ALEATORIO [-50 A 50]---");
    cargarVectorAleatorio(array2, size);
    mostrarVectorAleatorio(array2, size);

    printf("La posicion en donde se encuentra el numero minimo es en el array 1 es: %d\n\n",posMin(array,size));

    printf("\nLa suma de array y array 2 da como resultado: ");
    int arraySuma[size];
    sumaVectores(array,array2,arraySuma,size);
    mostrarVector(arraySuma,size);


    printf("\n\nEl array 1 ordenado con Bubble Sort queda de la siguiente manera: ");
    bubbleSort(array,size);
    mostrarVector(array,size);
    printf("\n\n");

    printf("\n\nEl array 2 ordenado con Seleccion queda de la siguiente manera: ");
    selectionSort(array2,size);
    mostrarVector(array2,size);
    printf("\n\n");

    printf("\n\nEl array 3 ordenado con Insercion queda de la siguiente manera: ");
    insertionSort(arraySuma,size);
    mostrarVector(arraySuma,size);
    printf("\n\n");


    return 0;
}


