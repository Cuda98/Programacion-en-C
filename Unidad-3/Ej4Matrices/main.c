#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Desarrolle un programa que rellene una matriz 5 * 3. Luego en otra matriz del mismo tamaño,
guarde los valores almacenados en la primera matriz
elevado al cubo los almacenados en columnas pares
y elevando al cuadrado los almacenados en posiciones impares
*/

//Predefinicion de funciones
void cargarMatriz (int m[5][3]);
void mostrarMatriz (int m[5][3]);






int main()
{
    // Variables
    int matriz[5][3];
    int matrizCopia[5][3] = { {0,0,0}, {0,0,0},{0,0,0},{0,0,0},{0,0,0} };
    int i = 0; // filas,lineas,rows
    int j = 0; // columnas

    cargarMatriz(matriz);
    printf("\n---MATRIZ---\n\n");
    mostrarMatriz(matriz);
    printf("\n---FIN MATRIZ---\n\n");

    // Guardar valores en la matriz 2 con sus respectivas condiciones

    for(i=0; i<5; i++) // FILAS
    {
        for(j=0; j<3; j++) // COLUMNAS
        {
            if(j%2==0) // En caso que la columna sea par, el valor almacenado en matrizCopia[i][j] toma el valor de la matriz[i][j] elevado al cubo
            {
                matrizCopia[i][j] = pow(matriz[i][j],3);
            }
            else // Si es impar (no se cumple la condición), se eleva al cuadrado
            {
                matrizCopia[i][j] = pow(matriz[i][j],2);
            }
        } // FIN COLUMNAS
    } // FIN FILAS

    // Impresión matriz 2

    printf("\n\n---MATRIZ 2---\n");
    for(i=0; i<5; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d  ",matrizCopia[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}

void cargarMatriz (int m[5][3])
{
    int i=0;
    int j=0;

    for(i=0; i<5; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Ingrese el valor de la posicion %d %d: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
}

void mostrarMatriz (int m[5][3])
{
    int i=0;
    int j=0;

    for(i=0; i<5; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d  ",m[i][j]);
        }
        printf("\n\n");
    }
}
