#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Toma el valor de...

int main()
{

    char v1[100] = "Joaquin ";
    char Apellido[100] = "Cuda";
    char vCopiada[100];
    char v3[100];

    char SKERE[100];



    printf("Cadena 1: %s\n\n",v1); // Imprime el array 1
    printf("Cadena copiada: %s\n\n",copiarCadena(v1, vCopiada)); // Imprime el procedimiento para copiar cadena
    compararCadena(v1,vCopiada); // Va a comparar v1 con vCopiada, si son iguales, devuelve un "Son iguales"
    compararCadena(v1,v3); // Va a comparar v1 con v3, al ser distintas, va a devolver otra impresión.

    unirCadena(v1, Apellido);
    printf("Unir la cadena del nombre con la del apellido: %s\n\n",v1);




    return 0;
}

void copiarCadena(char a[], char b[])
{
    strcpy(b, a);
}

void compararCadena(char a[], char b[])
{
    if(strcmp(b, a) == 0) // Si el contenido de la cadena a es igual al de la b, ingresa al bucle
    {
        printf("Son iguales\n\n");
    }
    else
    {
        printf("Son distintas\n\n");
    }
}

void unirCadena(char a[], char b[])
{
    strcat(a, b);
}

/*

 char nombre[] = "Joaquin";
    char apellido[] = "Cuda"; // Al estar predefiniendo la cadena, no es necesario llenar el [] con un número

    char nombreCopiado[50];
    char apellidoCopiado[50];

    printf("Su nombre es: %s\n",nombre);
    printf("Su apellido es: %s\n", apellido);

    printf("\n\n\n");

    printf("Su nombre copiado es %s\n",copiarCadena(nombre,nombreCopiado));
    printf("Su apellido copiado es %s\n\n\n",copiarCadena(apellido,nombreCopiado));



    return 0;

*/
