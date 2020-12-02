#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Si escribimos typedef struct Persona, ahora ya se sabe q persona es una struct y no hace falta aclararlo por ej en la linea 14 y 15
//quedaría como void cargarPersonas(Persona p[5]);
struct Persona
{
    int edad;
    float altura;
    char nombre[40];
    char apellido[40];
};

void cargarPersonas(struct Persona p[5], int tam);
void mostrarPersonas(struct Persona p[], int tam);


int main()
{
    int sizeStruct = 5;
    struct Persona personas[sizeStruct];


    // CARGA DE ESTRUCTURA
    cargarPersonas(personas,sizeStruct);
    //IMPRESION DE ESTRUCTURA
    printf("-------------------------------------------------------------\n");
    mostrarPersonas(personas,sizeStruct);

    return 0;
}





void cargarPersonas(struct Persona p[5], int tam)
{

     for(int i = 0; i<tam; i++)
    {
        char aux1[40];
        char aux2[40];
        printf("Ingrese la edad de la persona %d: ",i);
        scanf("%d",&p[i].edad);

        printf("Ingrese la altura de la persona %d: ",i);
        scanf("%f",&p[i].altura);

        printf("Ingrese el nombre de la persona %d: ",i);
        fflush(stdin);
        gets(aux1);

        printf("Ingrese el apellido de la persona %d: ",i);
        fflush(stdin);
        gets(aux2);

        strcpy(p[i].nombre, aux1);
        strcpy(p[i].apellido, aux2);

        printf("\n\n");
    }

}



void mostrarPersonas(struct Persona p[], int tam) //Parametro: nombre de la estructura
{
for(int i=0; i<tam; i++)
    {
        printf("La edad de la persona %d es: %d\n",i,p[i].edad);
        printf("La altura de la persona %d es: %.2f\n",i,p[i].altura);
        printf("El nombre de la persona %d es: %s\n",i,p[i].nombre);
        printf("El apellido de la persona %d es: %s\n",i,p[i].apellido);
        printf("\n\n");

        system("pause");

        printf("\n\n");
    }
}



