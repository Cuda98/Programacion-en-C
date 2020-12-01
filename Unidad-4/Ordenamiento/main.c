#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 10

int main()
{

    int vector[TAMANIO] = {1,2,5,71,99,0,5,16,26,3};

    printf("VECTOR ORIGINAL: ");
    for(int i = 0; i<TAMANIO; i++)
    {
        printf("%d, ",vector[i]);
    }
    printf("\n");

    selectionSort(vector,TAMANIO);
    print("SelectionSort ",vector,TAMANIO);

    IBinaria(vector,TAMANIO);
    print("Insercion binaria ",vector,TAMANIO);

    IDirecta(vector,TAMANIO);
    print("Isercion Directa ",vector,TAMANIO);

    bubbleSort(vector,TAMANIO);
    print("Burbuja ",vector,TAMANIO);

    system("PAUSE");

    return 1;
}

void print(char function[100], int array[TAMANIO], int n)
{
    int x;
    printf("%s",function);
    for(x = 0; x < n; x++)
    {
        printf("%i, ",array[x]);
    }
    printf("\n");
}

void bubbleSort(int array[TAMANIO], int n)
{
    int x,y,tmp;
    for(x = 1; x < n; x++)
    {
        for(y = 0; y < n - x; y++)
        {
            if(array[y]>array[y+1]) // Cambiar > por < en caso de querer ordenar de mayor a menor
            {
                tmp = array[y];
                array[y] = array[y + 1];
                array[y + 1] = tmp;
            }
        }
    }
}

void IDirecta(int array[TAMANIO], int n) // Insertion Sort
{
    int x,val,y;
    for(x = 1; x < n; x++)
    {
        val = array[x];
        y = x - 1;
        while(y>=0 && array[y]>val)
        {
            array[y+1]=array[y];
            y--;
        }
        array[y + 1] = val;
    }
}

void IBinaria(int array[TAMANIO], int n)
{
    int x,y,m,tmp,izq,der;

    for(x = 1; x < n; x++)
    {
        tmp = array[x];
        izq = 0;
        der = x - 1;

        while(izq <= der)
        {
            m = (izq + der) / 2;
            if(tmp< array[m])
            {
                der = m - 1;
            } else
            {
                izq = m + 1;
            }
        }

        y = x - 1;
        while(y>=izq)
        {
            array[y+1] = array[y];
            y = y - 1;
        }
        array[izq]=tmp;
    }
}

void selectionSort (int array[TAMANIO], int n)
{
    int i,j,min,tmp;

    for(i = 0; i<n-1; i++)
        min = i;
    {
        for(j = i+1 ; j<n; j++)
        {
            if(array[j] < array[min])
            {
                min = j;
            }
        }
        tmp = array[i];
        array[i] = array[min];
        array[min] = tmp;
    }
}
