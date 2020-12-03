#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Materia
{
    int codigo;
    char nombre[40];
    char turno; // n - t - m
};

struct Carrera
{
    char titulo[40];
    int duracion;
    struct Materia vectorMaterias[3]; // Este numero tiene que ser fijo si o si, no se puede pedir por teclado la cantidad de materias
    // Carrera tiene un titulo y una duración
    // pero además esa Carrera tiene 3 materias (no voy a llenar 42 materias así q pongo 3)
    //vectorMaterias va a ser la referencia para cargar los datos cuando estemos en la carga del struct CARRERA
};



void cargarMaterias(struct Materia vM[], int t); // Definimos como la vamos a invocar a la struct Materia, en este caso vM[]
void mostrarMaterias(struct Materia vM[], int t);
// ----------------------------------------------
void cargarCarreras(struct Carrera vC[],int t); // Definimos como la vamos a invocar a la struct Carrera, en este caso vC[]
void mostrarCarreras(struct Carrera vC[],int t);


int main() // materias y carreras (los arrays contenedores de struct solo se llaman así en el main)
{
    int cantidadMaterias = 3;
    struct Materia materias[cantidadMaterias];

    int cantidadCarreras = 2;
    struct Carrera carreras[cantidadCarreras];



    //cargarMaterias(materias, cantidadMaterias);
    //printf("-------------------------\n");
    //mostrarMaterias(materias, cantidadMaterias);

    cargarCarreras(carreras, cantidadCarreras);
    printf("\n\n\t\t----CARRERAS----\n\n");
    mostrarCarreras(carreras, cantidadCarreras);



    return 0;
}


void cargarMaterias(struct Materia vM[], int t)
{
    char aux[40];

    for(int i = 0; i < t; i++)
    {
        printf("Ingrese el codigo de la materia %d: ",i+1);
        scanf("%d",&vM[i].codigo);

        printf("Ingrese el nombre de la materia %d: ",i+1);
        fflush(stdin);
        gets(aux);
        strcpy(vM[i].nombre, aux);

        printf("Ingrese el turno de la materia %d: ",i+1);
        scanf("%c",&vM[i].turno);

    }

}


void mostrarMaterias(struct Materia vM[], int t)
{
    printf("\n-------MATERIAS-------\n");
    for(int i = 0; i < t; i++)
    {

        printf("\nCodigo de la materia %d: %d\n",i+1,vM[i].codigo);
        printf("Nombre de la materia %d: %s\n",i+1,vM[i].nombre);
        printf("Turno de la materia %d: %c\n",i+1,vM[i].turno);
        printf("-----------------------------------------------\n");
    }

}


void cargarCarreras(struct Carrera vC[],int t)
{
    for(int i = 0; i < t; i++)
    {
        int aux[40];

        printf("Ingrese el titulo de la carrera %d: ",i+1);
        fflush(stdin);
        gets(aux);
        strcpy(vC[i].titulo, aux);

        printf("Ingrese la duracion de la carrera %d: ",i+1);
        scanf("%d",&vC[i].duracion);

        cargarMaterias(vC[i].vectorMaterias, 3); // Se invoca con el nombre que se le dió en la struct

        system("pause");

    }

}

void mostrarCarreras(struct Carrera vC[],int t)
{
    for(int i=0; i<t; i++)
    {
        printf("\n------CARRERA %d------ \n\n",i+1);
        printf("Titulo de la carrera %d: %s\n",i+1,vC[i].titulo);
        printf("Duracion de la carrera %d: %d\n",i+1,vC[i].duracion);
        mostrarMaterias(vC[i].vectorMaterias, 3); //Invocamos la función mostrarMaterias, y le pasamos como parámetro vC[i].vectorMaterias
                                                  // vectorMaterias es el nombre de la variable en la estructura Carrera.

    }
}
