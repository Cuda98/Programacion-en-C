#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"

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

void insertionSort(int v[], int tam)
{
    int i, j, temp;

    for(i=0; i<tam; i++)
    {
        temp = v[i];
        j=i-1;
        while(j>=0 && v[j] > temp)
        {
            v[j+1] = v[j];
            j--;
        }

        v[j+1] = temp;
    }
}

int buscarEnVector(int v[], int tam, int busco)
{
    int pos = -1;

    for(int i=0; i<tam; i++)
    {
        if( v[i] == busco)
        {
            pos = i;
        }

    }

return pos;
}

int busquedaBinaria(int v[], int tam, int num)
{
    int posInicial = 0;
    int posFinal = 0;
    int posCentral = 0;

    posFinal = tam - 1;
    while(posInicial <= posFinal)
    {
        posCentral = (posFinal + posInicial) / 2; // Va a actualizar la posCentral cada vez que vuelva a entrar al while
        if(v[posCentral] == num)
        {
            return posCentral;
        }
        else
        {
            if(num>v[posCentral])
            {
                posInicial = posCentral + 1;
            }
            else
            {
                posFinal = posCentral -1;
            }
        }
    }
    return -1;
}

