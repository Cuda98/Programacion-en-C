#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"
#define RENGLONES 3



int main()
{
    srand(time(NULL));

    printf("\t ---MATRICES--- \n\n");

    int columna=5;

    float matriz1[columna][RENGLONES]; // En esta caso va a ser 5 columnas, 3 renglones

    cargarMatrizAleatoria(matriz1, columna);
    mostrarMatrizAleatoria(matriz1, columna);

    // -------------------------------------------- SUMA X RENGLONES -------------------------------------------

    float vectorSumaRenglon[RENGLONES] = {0, 0, 0}; // Se define un vector en donde se va a almacenar el resultado de c/renglon

    sumarRenglones(vectorSumaRenglon, columna, matriz1);
    mostrarSumaRenglones(vectorSumaRenglon, RENGLONES);


    return 0;
}





































// BACKUP MAIN
/*
int main()
{
    srand(time(NULL));

    printf("\t ---MATRICES--- \n\n");

    int col=5;

    float matriz1[col][RENGLONES]; // En esta caso va a ser 5 columnas, 3 renglones
    int columna = 0;
    float suma[3] = {0, 0, 0}; // Suma de renglones

    // CARGA MATRIZ

    for(renglon = 0; renglon < 3; renglon ++)
    {
        for(columna = 0; columna < 5; columna ++)
        {
            matriz1[renglon][columna] = ((float) (rand()%5000))/100; // 5000 / 100 = 50, cargar una matriz flotante de 0 a 50
        }
    }



    // MOSTRAR MATRIZ

    for(renglon = 0; renglon < 3; renglon ++)
    {
        for(columna = 0; columna< 5; columna ++)
        {
            printf("%.2f  ",matriz1[renglon][columna]);
        }
        printf("\n\n");
    }

    // SUMA POR RENGLONES

    for(renglon = 0; renglon < 3; renglon ++)
    {
        for(columna = 0; columna < 5; columna ++)
        {
            suma[renglon] = suma[renglon] + matriz1 [renglon][columna];
        }
        printf("\n");
    }

    //IMPRESION DE SUMA POR RENGLONES

    printf("La suma del renglon 0 es de: %.2f\n",suma[0]);
    printf("La suma del renglon 1 es de: %.2f\n",suma[1]);
    printf("La suma del renglon 2 es de: %.2f\n",suma[2]);

       // O SINO PUEDE SER ASÍ
//    for(renglon=0;renglon<3;renglon++)
//   {
//       printf("La suma del renglon %d es de: %.2f\n",renglon,suma[renglon]);
//  }

    return 0;
}
*/
