#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "materia.h"
#include "profesor.h"

struct MateriaE
{
    char nombre[20];
    int cantInscriptos;
    Profesor profesores[4];
    int contador;

};



Materia crearMateria()
{
    Materia m = malloc(sizeof(struct MateriaE));

    char aux[20];

    printf("Ingrese el nombre de la materia: ");
    fflush(stdin);
    gets(aux);
    strcpy(m->nombre, aux);

    printf("Ingrese la cant de inscriptos: ");
    scanf("%d",&m->cantInscriptos);

    cargarProfesor();


        m->contador = 0;

    return m;
}

void mostrarMateria(Materia m)
{
    printf("\nNOMBRE DE LA MATERIA ---> %s\n",m->nombre);
    printf("\nCANTIDAD DE INSCRIPTOS ---> %d\n",m->cantInscriptos);

    for(int i = 0; i<4; i++)
    {
        mostrarProfesor(m->profesores[i]);
    }
}

char * getNombreMateria(Materia m)
{
    return m->nombre;
}
int getCantInscriptos(Materia m)
{
        return m->cantInscriptos;
}

void setNombreMateria(Materia m, char nombreMat[])
{
    strcpy(m->nombre, nombreMat);
}
void setCantInscriptos(Materia m, int CantidadInsc)
{
    m->cantInscriptos = CantidadInsc;
}

void setProfesor(Profesor p,Materia m)
{

}
