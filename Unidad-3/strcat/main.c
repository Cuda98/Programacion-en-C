#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLON 80

int main()
{
    //                                ---EJEMPLO CON STRCAT---

    char string1[] = "Joaquin ";
    char string2[] = "Cuda";
    char finalString[200] = "";

    unirCadenasStrcat(string1,string2,finalString);
    mostrarCadenasStrcat(finalString);

    system("PAUSE");
    system("CLS");

    printf("\n\n"); // Espacios para el siguiente ejemplo

    //                                ---EJEMPLO CON STRCPY---

    char texto1[]="corta";
    char texto2[]="mediana";
    char texto3[]="larguisima";

    strcpy(texto2, texto1); // copia el contenido de texto1 y lo almacena en texto2
    puts(texto2);
    strcpy(texto3, texto2); // copia el contenido de texto2 y lo almacena en texto3
    puts(texto3);

    system("PAUSE");
    system("CLS");


    //                              ---EJEMPLO CON STRLEN---
    char string[MAXLON];
    int longitud = 0; // Es necesario crear una variable para almacenar la devolucion de la función strlen

    printf("Escribi algo: ");
    gets(string);
    longitud = strlen(string); // strlen(string) devuelve el total (entero) de caracteres que conforman una cadena (en este caso, la cadena string)
    printf("\nLonguitud de la cadena: %d\n",longitud);

    system("PAUSE");
    system("CLS");


    //                              ---EJEMPLO DE STRCMP(string comparision)---
    // strcmp(a,b)
    //<0 si la cadena a es menor que b
    //0 si la cadena a es igual que b
    //>0 si la cadena a es mayor que b

    char s1[] = "Abejaa";
    char s2[] = "Abeja";
    int i = 0; // Donde se va a almacenar la devolución de la función

    i = strcmp(s1, s2);

    printf("s1 es");
    if(i<0)printf(" menor que ");
    else if(i>0)printf(" mayor que ");
    else if(i==0)printf(" igual a ");
    printf("s2\n");


    return 0;
}

void unirCadenasStrcat(char s1[], char s2[], char fS[200])
{
    strcat(fS, s1); // agrega el contenido de s1 y lo almacena al final de la cadena fS (primer cadena)
    strcat(fS, s2);
}

void mostrarCadenasStrcat(char fS[200])
{
    puts(fS);
}
