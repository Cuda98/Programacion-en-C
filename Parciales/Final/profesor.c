#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "materia.h"
#include "profesor.h"

struct ProfesorE
{
    char nombreP[20];
    int antiguedad;
    int sueldo;
};


Profesor cargarProfesor()
{
    Profesor p = malloc(sizeof(struct ProfesorE));

    char auxP[20];
for(int i = 0; i<4; i++)
{



    printf("Ingrese el nombre del profesor: ");
    fflush(stdin);
    gets(auxP);
    strcpy(p->nombreP, auxP);

    printf("Ingrese la antiguedad del profesor: ");
    scanf("%d",&p->antiguedad);

    printf("Ingrese el sueldo del profesor: ");
    scanf("%d",&p->sueldo);


}
    return p;
}

void mostrarProfesor(Profesor p)
{
    printf("Nombre del profesor: %s\n",p->nombreP);
    printf("Antiguedad: %d",p->antiguedad);
    printf("Sueldo: %d",p->sueldo);
}


char * getNombreProfesor(Profesor p)
{
    return p->nombreP;
}
int  getAntiguedadProfesor(Profesor p)
{
    return p->antiguedad;

}
int  getSueldo(Profesor p)
{
    return p->sueldo;
}

void setNombreProfesor(Profesor p, char nombreN[])
{
    strcpy(p->nombreP, nombreN);

}

void setAntiguedadProfesor(Profesor p, int antiguedadN)
{
    p->antiguedad = antiguedadN;
}

void setSueldo(Profesor p, int sueldoN)
{
    p->sueldo = sueldoN;

}

