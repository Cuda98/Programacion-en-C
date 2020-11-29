#include <stdio.h>
#include <stdlib.h>
// EJ 3 GUIA 4
// Se tienen 6 articulos y 4 trimestres, se pide guardar en una matriz la cantidad de articulos vendidos por trimestres
/*
                 -- TO DO --
:)
                 -- DONE --
Declarar las variables a utilizar
Cargar los datos en la matriz, por consola con printf y scanf
Mostrar datos
Calcular los totales por trimestres y por artículos, guardándolos en vectores.
Mostrar Totales
Mostrar promedios trimestrales y por artículos
Mostrar articulo más vendido y menos vendido
Mostrar articulo mas y menos vendidos por trimestres
*/




int main()
{
   int matriz[4][6];
   int i = 0; // Trimestre
   int j = 0; // Articulo
    //Variables para almacenar la sumatoria por trimestre/articulo
   int tTrim[4] = {0,0,0,0};
   int tArt[6] = {0,0,0,0,0,0};
    //Variables para almacenar el articulo mas vendido y menos vendido
    int artMax = -9999;
    int artMin = 9999;
    //Variables para almacenar el articulo más vendido y menos vendido X TRIMESTRE
    int artMaxTrim[4] = {-999, -999, -999, -999};
    int artMinTrim[4] = {999, 999, 999, 999};

   cargarMatriz(matriz); // Este procedimiento va a cargar la matriz
   printf("\n\n\t\t---MATRIZ---\n\n"); // Agregamos un simple aviso para dar prolijidad
   mostrarMatriz(matriz); // Este procedimiento va a mostrar la matriz

             // SUMATORIAS

   for(int i=0; i<4; i++) // Calcular el tTrim y el tArt
   {
       for(int j=0; j<6; j++)
       {
           tArt[j]=tArt[j]+matriz[i][j];
           tTrim[i]=tTrim[i]+matriz[i][j];
       }
   printf("\n");
   }

            // IMPRESIÓN DE LOS TOTALES

       for(int j=0; j<6; j++) // Imprimir la sumatoria de articulos vendidos
       {
           printf("El articulo %d se vendio: %d veces\n",j,tArt[j]);
       }
       for(int i=0; i<4; i++)
       {
           printf("En el trimestre %d se vendieron %d articulos\n",i,tTrim[i]);
       }

          // IMPRESIÓN DE LOS PROMEDIOS

       printf("\nPromedio de los articulos:\n");

       for(int j=0; j<6; j++)
       {
           printf("El promedio del articulo %d es: %d\n",j,tArt[j]/4);
       }

       printf("\nPromedio de los trimestres: \n");

       for(int i=0; i<4; i++)
       {
           printf("El promedio del trimestre %d es: %d\n",i,tTrim[i]/6); // Se divide por la cantidad de veces que se sumo (por trimestre hay 6 sumas)
       }

            // CALCULO DE MAX Y MIN

        for(int i=0; i<4; i++)
        {
            for(int j=0; j<6; j++)
            {
                if(matriz[i][j]>artMax)
                {
                    artMax = matriz[i][j];
                }
                if(matriz[i][j]<artMin)
                {
                    artMin = matriz[i][j];
                }

            }
        }

        printf("\nArticulo mas y menos vendido");
        printf("\n\nEl articulo mas vendido se vendio %d veces\n",artMax);
        printf("El articulo menos vendido se vendio %d veces\n",artMin);

             // CALCULO DE MAX Y MIN X TRIMESTRE
        for(int i=0; i<4; i++)
        {
            for(int j=0; j<6; j++)
            {
                if(matriz[i][j]>artMaxTrim[i])
                {
                    artMaxTrim[i] = matriz[i][j];
                }

                if(matriz[i][j]<artMinTrim[i])
                {
                    artMinTrim[i] = matriz[i][j];
                }
            }
        }


        //IMPRESION DE MAX Y MIN X TRIMESTRE
        printf("\nArticulo mas y menos vendido por trimestre:\n");
        for(int i=0; i<4; i++)
        {
             printf("El articulo mas vendido en el trimestre %d se vendio %d veces\n",i,artMaxTrim[i]);
             printf("El articulo menos vendido en el trimestre %d se vendio %d veces\n",i,artMinTrim[i]);
        }


    return 0;
}

void mostrarMatriz(int m[4][6]) // Se pasan como argumentos el tamaño de la matriz
{
    for(int i=0; i<4; i++) // for encargado de mostrar las filas o renglones
    {
        for(int j=0; j<6; j++) // for encargado de mostrar las columnas
        {
            printf("%d ",m[i][j]);
        } // cierro el for de columna
        printf("\n");
    } // cierro el for de fila o renglon
}

void cargarMatriz(int m[4][6]) // Procedimiento para cargar la matriz
{
       for(int i=0; i< 4; i++) // for encargado de cargar las filas o renglones
       {
            for(int j=0; j<6; j++) // for encargado de cargar las columnas
            {
            printf("Ingrese el trimestre %d y articulo %d: ",i,j);
            scanf("%d",&m[i][j]);
            } // Cierro for columna
       } // Cierro for filas/renglones
}

