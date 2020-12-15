#include <stdio.h>
#include <stdlib.h>

int main()
{
    int slot; // Definimos variables
    int max=0;
    int min=0;
    int aux=0;
    float mayor=0;
    float may=-12.3;

    printf("Ingrese la cantidad de slots que quiere en su array: \n"); // Pedimos la cantidad de slots en el array
    scanf("%d",&slot);

    int array[slot]; // Asignamos el valor de slot al tamaño del array

    printf("Ingrese los valores del array: \n");
    for(int i=0; i<slot; i++) // Recorremos el vector asignando un valor por posición
    {
        printf("");
        scanf("%d",&array[i]);

        max=array[0]; //Le asignamos el primer elemento del array
        min=array[0]; //Así empezamos a comparar


        if(array[i]>may) // Si el valor almacenado en la posición de i es > a float may, mayor incrementa en 1
        {
            mayor++;
        }

        if(array[i]>max) // Si el valor almacenado en la posición de i es > max,
        {
            max=array[i]; // Maximo va a tomar el valor del valor almacenado en la posición i para luego mostrarse como el maximo
        }
        if(array[i]<min) // Misma lógica que el max, solamente que en version "mostrar minimo"
        {
            min=array[i];
        }

    }
printf("\n\n"); // Espacios para emprolijar el programa, posterior a eso, impresiones respectivas.
printf("El maximo es: %d\n",max);
printf("El minimo es: %d\n",min);
printf("Cantidad de numeros mayores a -12,3: %d",mayor);



    return 0;
}
