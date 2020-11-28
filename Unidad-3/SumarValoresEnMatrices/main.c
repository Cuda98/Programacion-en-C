#include <stdio.h>
#include <stdlib.h>

int main()
{
    //            DEFINICION DE LA MATRIZ
    int m[2][3] = {
    {5, 1, 19},
    {7, 2, 3}
}; // i => 0 y 1 ...... j => 0, 1 y 2

    int sumaFilas[2] = {0,0}; // INICIALIZAR SIEMPRE LOS VECTORES PARA Q NO ACARREEN BASURA
    int sumaColumnas[3] = {0,0,0};
    //            IMPRESIÓN DE LA MATRIZ
    for(int i=0;i<2;i++)
    {
        for(int j=0; j<3;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    //            SUMA DE LOS ELEMENTOS DE UNA MATRIZ POR FILA

    for(int i=0; i<2;i++)
    {
        for(int j=0; j<3; j++)
        {
            sumaColumnas[j]=sumaColumnas[j]+ m[i][j];
            sumaFilas[i]=sumaFilas[i] + m[i][j];
        }
        printf("\n");
    }



        for(int j=0; j<3; j++)
        {
            printf("\nTotal de la columna %d: %d",j,sumaColumnas[j]);
        }

        for (int i=0; i<2; i++)
        {
            printf("\nTotal de la fila %d: %d",i,sumaFilas[i]);
        }






    return 0;
}


//         SUMAR ELEMENTOS DE UN VECTOR
/*
    int v[3] = {5, 1, 19};
    int vTot;

    printf("\t --------------------\n");
    for(int i=0; i<3; i++)
    {
        printf("%d ",v[i]);
        vTot= vTot + v[i];
    }
    printf("\nLa suma del vector es: %d",vTot);

*/
