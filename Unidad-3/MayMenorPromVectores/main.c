#include <stdio.h>
#include <stdlib.h>

// Calcular el mayor y menor elemendo en un vector
// Calcular el promedio de la suma de los elementos de un vector

int main()
{
    int array[5] = {7,9,2,5,-3}; // Definimos un array de 5 elementos
    int max = -9999;
    int min = 9999;
    int suma = 0;
    int prom = 0;

    for(int i = 0 ; i<5; i++)
    {
        suma = suma + array[i];
        prom = suma/5;

        if(array[i]>max)
        {
            max = array[i];
        }
        else
        {
            min = array[i];
        }
    }

    printf("El valor maximo del array es: %d\n",max);
    printf("El valor minimo del array es: %d\n",min);
    printf("La sumatoria de los elementos del array es de: %d\n",suma);
    printf("El promedio de la sumatoria es de: %d",prom);

    return 0;
}
