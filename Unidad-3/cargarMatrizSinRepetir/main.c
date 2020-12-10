#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[6][6];




    return 0;
}


void cargarMatrizSinRepetir(int m[6][6])
{
    int numero = 0;

    for(int i = 0; i<6; i++)
    {
        for(int j = 0; j<6; j++)
        {
            do
            {
                numero= 1000+ rand()%9000;
            }while((numero)%2!=0 || (buscarEnMatriz(m,numero)==1));

            m[i][j] = numero;
        }
    }
}

int buscarEnMatriz(int m[6][6], int datoBuscado)
{
    int encontrado = -1;

    for(int i = 0; i<6; i++)
    {
        for(int j = 0; j<6; j++)
        {
            if(m[i][j]==datoBuscado)
            {
                encontrado = 1;
            }
        }
    }
    return encontrado;
}
