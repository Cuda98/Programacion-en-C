#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h" // se incluye el funciones.h

int buscarEnVector(int v[], int tam, int busco);
int busquedaBinaria(int v[], int tam, int num);

int main()
{
    int size = 10;
    int array[size];
    int array2[size];
    int buscar = 0;



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

    printf("---BUSQUEDA SECUENCIAL---\n\n");

    printf("Ingrese el numero que desea buscar en el vector 1 (Ya ordenado): "); // Va a buscar en el array (recordar que array ahora est� ordenado)
    scanf("%d",&buscar);
    printf("El numero %d se encuentra en la posicion %d (Si devuelve un -1, el numero no se encuentra)\n\n",buscar,buscarEnVector(array, size, buscar));


    printf("\n---BUSQUEDA BINARIA---\n\n");

    printf("Ingrese el numero que desea buscar en el vector 2 (Ya ordenado): "); // Va a buscar en el array (recordar que array ahora est� ordenado)
    scanf("%d",&buscar);
    printf("El numero %d se encuentra en la posicion %d \n\n",buscar,busquedaBinaria(array2, size, buscar));



    return 0;
}




