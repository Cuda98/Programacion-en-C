#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANIO 5
//Funcion q devuelve un entero aleatorio entre mini y max
int aleatorioEntre(int mini, int max);
void cargarVectorConAleatorios(int v[], int min, int max, int tam);
void cargarVectorConAleatoriosSinRepetir(int v[], int mini, int max, int tam);
void imprimirVector(int v[], int tam);
int busquedaSecuencial(int v[], int tam, int busco);

int main()
{
    int inicio=0;
    int fin=0;
    srand(time(NULL));
    printf("Ingrese el numero minimo: ");
    scanf("%d",&inicio);
    printf("Ingrese el numero maximo: ");
    scanf("%d",&fin);


    printf("\n\nEl numero elegido entre %d y %d es: %d",inicio,fin,aleatorioEntre(inicio, fin));

    printf("\n\n--------------------VECTOR CARGADO CON ALEATORIOS A ELECCION--------------------\n\n");

    int arraySinRepetir[TAMANIO] = {0,0,0,0,0};

    cargarVectorConAleatoriosSinRepetir(arraySinRepetir, 0, 10, TAMANIO);
    imprimirVector(arraySinRepetir,TAMANIO);

    return 0;
}


int aleatorioEntre(int mini, int max)
{
    int resultado = 0;

    resultado = mini + ( rand()%(max - mini+1));

    return resultado;
}

void cargarVectorConAleatorios(int v[], int mini, int max, int tam)
{
    for(int i=0; i<tam; i++)
    {
        v[i] = aleatorioEntre(mini, max);
    }

}

void cargarVectorConAleatoriosSinRepetir(int v[], int mini, int max, int tam)
{
    int aleatorio = 0;
    int resultadoBusqueda = 0;

    for(int i=0; i<tam; i++)
    {
        do
        {
            //Consigo un aleatorio
            aleatorio = aleatorioEntre(mini,max);
            //Busco si ya esta
            resultadoBusqueda = busquedaSecuencial(v, tam, aleatorio);
        }while(resultadoBusqueda != 1);
        //si el aleatorio no estaba, lo guardo
        v[i]=aleatorio;
    }

}


void imprimirVector(int v[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        printf("%d, ",v[i]);
    }
    printf("\n\n");
}

int busquedaSecuencial(int v[], int tam, int busco)
{
    int pos = -1;

    for(int i=0; i<tam; i++)
    {
        if( v[i] == busco)
        {
            pos = i;
        }

    }

return pos;
}
