#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"

void cargarMatrizAleatoria(float m[][RENGLONES], int col)
{
    for(int r = 0; r<RENGLONES; r++)
    {
        for(int c = 0; c < col; c++)
        {
            m[c][r] = ((float) (rand()%5000))/100; // 5000 / 100 = 50, cargar una matriz flotante de 0 a 50
        }
    }
}

void mostrarMatrizAleatoria(float m[][RENGLONES], int col)
{
    printf("\n");
    for(int r = 0; r<RENGLONES; r++)
    {
        for(int c = 0; c < col; c++)
        {
            printf("%.2f   ",m[c][r]);
        }
        printf("\n\n");
    }
}


void sumarRenglones(float suma[], int col, float m[][RENGLONES])
{
    for(int r=0; r<RENGLONES; r++)
    {
        for(int c=0; c<col; c++)
        {
            suma[r] = suma[r] + m[c][r];
        }
    }
}

void mostrarSumaRenglones(float suma[], int col)
{
    for(int r=0; r<RENGLONES; r++)
    {
        printf("La suma del renglon %d es de: %.2f\n",r,suma[r]);
    }


}
