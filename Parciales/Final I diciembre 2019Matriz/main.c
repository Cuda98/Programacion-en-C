#include <stdio.h>
#include <stdlib.h>

void cargarMatriz(int matriz[2][3]); // DONE
void mostrarMatriz(int matriz[2][3]); // DONE
void calcularPromKioscos(int matriz[2][3], float promKioscos[2]); // DONE
void calcularPromMes(int matriz[2][3], float promMes[3]); // DONE
void mostrarPromKioscos(float promKioscos[2]); // DONE
void mostrarPromMes(float promMes[3]); // DONE
int maximoMatriz(int matriz[2][3]); // DONE
void generarReporte(int matriz[2][3]);

int main()
{
    printf("\n----EJERCICIO 1----\n");


    //Cargar matriz y mostrarla
    int m[2][3];
    cargarMatriz(m);
    mostrarMatriz(m);


    //Calcular promedios por kiosco y mes
    float promK[2];
    float promM[3];
    calcularPromKioscos(m,promK);
    calcularPromMes(m,promM);


    //mostrar promedios
    printf("\n----PROMEDIOS POR MES Y KIOSKO----\n");
    mostrarPromKioscos(promK);
    mostrarPromMes(promM);


    //maximo matriz
    printf("\n----NUMERO MAXIMO EN LA MATRIZ----\n");
    printf("El numero maximo en la matriz es: %d\n",maximoMatriz(m));
    int maximo = maximoMatriz(m);

    int * max;
    max = &maximo;

    generarReporte(m);
    return 0;
}

void cargarMatriz(int matriz[2][3])
{
    int i=0;
    int j=0;


    for(i = 0; i < 2; i++)
    { // Inicio de for que recorre los kioscos
        for(j = 0; j < 3; j++)
        {
            printf("--->POS[%d, %d] Ingrese el valor deseado: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
}


void mostrarMatriz(int matriz[2][3])
{
    printf("\n\nMATRIZ");
    printf("\n----------\n\n");


    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
}


void calcularPromKioscos(int matriz[2][3], float promKioscos[2])
{
    float suma = 0;


    for(int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            suma = suma + matriz[i][j];
        }
        promKioscos[i]=suma/3;
        suma = 0; // Reiniciar suma para que no acumule.
    }
}


void calcularPromMes(int matriz[2][3], float promMes[3])
{
    float suma = 0;
    int j = 0;
    int i = 0;


    for(int j = 0; j < 3; j++)
    {
        for(int i = 0; i < 2; i++)
        {
            suma = suma + matriz[i][j];
        }
        promMes[j] = suma/2;
        suma = 0; // Reiniciar suma para que no acumule.
    }
}


void mostrarPromKioscos(float promKioscos[2])
{
    for(int i = 0; i < 2; i ++)
    {
        printf("Promedio del kiosko %d = %.2f\n",i,promKioscos[i]);
    }
}


void mostrarPromMes(float promMes[3]){


int i = 0;
    for (i=0; i<3; i++){


        printf("Prom del mes : %d es: %f\n", i, promMes[i]);
    }
}


int maximoMatriz(int matriz[2][3])
{
    int i = 0;
    int j = 0;
    int max = -9999;


    for(i = 0; i< 2; i++)
    {
        for(j = 0; j< 3; j++)
        {
            if(matriz[i][j] > max)
            {
                max = matriz[i][j];
            }
        }
    }
    return max;
}

void generarReporte(int matriz[2][3]){
FILE * archivo;
archivo = fopen("Matriz.txt","w");
int max = 0;

fprintf(archivo, "Los datos de la matriz son: \n" );

int i,j;
int promMes[3];
int promKioscos[2];


for(i=0;i<2;i++)
    {
        for(j=0; j<3; j++)
        {
            fprintf(archivo,"%d ",matriz[i][j]);
        }
        fprintf(archivo, "\n");

    }

// void cargarMatriz(m);
// void mostrarMatriz(m);

//////////////////////////////////////////////// CALCULAR MAX
    for(i = 0; i< 2; i++)
    {
        for(j = 0; j< 3; j++)
        {
            if(matriz[i][j] > max)
            {
                max = matriz[i][j];
            }
        }
    }
/////////////////////////////////////////////// CALCULAR MAX
///////////////////////////////////////////////////////// PROMEDIO POR MES

    float suma = 0;



    for(int j = 0; j < 3; j++)
    {
        for(int i = 0; i < 2; i++)
        {
            suma = suma + matriz[i][j];
        }
        promMes[j] = suma/2;
        suma = 0; // Reiniciar suma para que no acumule.
    }
////////////////////////////////////////////////////////////
///
    for(int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            suma = suma + matriz[i][j];
        }
        promKioscos[i]=suma/3;
        suma = 0; // Reiniciar suma para que no acumule.
    }

///



    fprintf(archivo, "\nEl máximo en la matriz es: %d\n",max);

    fprintf(archivo,"\n\nPROMEDIO POR MES\n");
    fprintf(archivo,"-------------------\n\n");


    for(j = 0; j<3; j++)
    {
        fprintf(archivo, "El prom por mes es de: %d\n",promMes[j]);
    }

    fprintf(archivo,"\n\nPROMEDIO POR KIOSKO\n");
    fprintf(archivo,"-------------------\n\n");

    for(j = 0; j<2; j++)
    {
        fprintf(archivo, "El prom por kiosko es de: %d\n",promKioscos[j]);
    }


printf("\nEl reporte se genero con exito");
fclose(archivo);
}

