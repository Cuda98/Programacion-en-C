#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void mostrarVectorAleatorio(int v[], int tam);
void cargarVectorAleatorio(int v[], int tam);
int posMin(int v[], int tam);
void sumaVectores(int v[], int v2[], int v3[], int tam);
void mostrarVector(int v[], int tam);
void bubbleSort(int v[], int tam);
void selectionSort(int v[], int tam);

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

    printf("La posicion en donde se encuentra el numero minimo es: %d\n\n",posMin(array,size));

    printf("La suma de array y array 2 da como resultado: ");
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

    return 0;
}


void mostrarVectorAleatorio(int v[], int tam)
{
    printf("\n\n");
    for(int i=0; i< tam; i++)
    {
        printf("%d ",v[i]);
    }
    printf("\n\n");

    // printf("La posicion en donde se encuentra el numero minimo es: %d\n",posMin(v,tam)); // Podemos invocarla desde acá cambiando solamente los parametros q le pasamos desde la funcion


}

void cargarVectorAleatorio(int v[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        v[i] = -50 + rand()% 101;
    }
}

int posMin(int v[], int tam)
{
    int i = 0;
    int pos = 0;
    int min = v[0];

    for(i = 0; i<tam; i++)
    {
        if(v[i]<min)
        {
            min = v[i];
            pos = i;
        }

    }

return pos;
}

void sumaVectores(int v[], int v2[], int v3[], int tam)
{
    for(int i = 0; i<tam; i++)
    {
        v3[i] = v[i] + v2[i];
    }
}

void mostrarVector(int v[], int tam)
{
    for(int i = 0; i< tam; i++)
    {
        printf("%d, ",v[i]);
    }

}

void bubbleSort(int v[], int tam)
{
    int aux,i,j;

    for(i=0; i<tam; i++)
    {
        for(j=0; j<tam-1; j++)
        {
            if(v[j]>v[j+1]) // > ordena de menor a mayor, < ordena de mayor a menor
            {
                aux=v[j]; // aux toma el valor del valor almacenado en J
                v[j] = v[j+1]; // v[j] toma el valor del valor almacenado en J+1
                v[j+1] = aux; //v[j+1] toma el valor de aux
            }
        }
    }



}

void selectionSort(int v[],int tam)
{
    int i,j,min,tmp;

    for(i=0; i<tam-1; i++)
    {
        min=i;
        for(j=i+1; j<tam; j++)
        {
            if(v[j] < v[min])
                min=j;
        }
        tmp = v[i];
        v[i] = v[min];
        v[min] = tmp;
    }
}
