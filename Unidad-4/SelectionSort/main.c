#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf(" Arreglo dinamico\n");

    int tam=6;
    int v[6] = {99, 7, 4, 2, 12, 1}; // Arreglado : 1 2 4 7 12 99

ordenamientoSeleccion(v,tam);
mostrarVector(v,tam);



    return 0;
}


void print(char function[100], int array[6], int n)
{
    int x;
    printf("%s",function);
    for(x = 0; x < n; x++)
    {
        printf("%i, ",array[x]);
    }
    printf("\n");
}

void ordenamientoSeleccion(int array[6],int n)
{
    int i,j,min,tmp;

    for(i=0; i< n-1; i++)
    {
        min = i;
        for(j = i + 1; j < n; j++)
        {
            if(array[min] > array[j])
                min = j;
        }
        tmp = array[min];
        array[min] = array[i];
        array[i] = tmp;
    }
}

void mostrarVector(int array[6], int n)
{
    for(int i=0; i<6; i++)
    {
        printf("%d, ",array[i]);
    }
}
