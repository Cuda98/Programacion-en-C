#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "persona.h"

struct PersonaEstructura
{
    int dni;
    char nombre[40];
};

// typedef no es necesario ya que está en el .h



void mostrarPersona(Persona p)
{
    printf("\n");
    printf("Nombre: %s --- DNI: %d",p->nombre, p->dni);
    // Ya no se accede con p.persona porque p es una Persona, y Persona no es más un struct, es un puntero.. Ahora se accede con la ->
}

// ---------------------------- CONSTRUCTOR ----------------------------

Persona cargarPersonaPorTeclado() // crearPersona, cargarPersonaPorTeclado....... distintos nombres.
{ // Para cargar una persona, hay que definir de forma local una Persona, recordar que ahora Persona es un puntero

    Persona p = malloc(sizeof(struct PersonaEstructura)); // No agregamos la palabra struct adelante ya que ahora Persona es un tipo de dato

    char aux[40] = " "; // generamos un aux para pasarle primero el dato y evitar que se almacene basura

    printf("Ingrese el DNI: \n");
    scanf("%d",&p->dni);

    printf("Ingrese el nombre: \n");
    fflush(stdin);
    gets(aux);
    strcpy(p->nombre, aux); // Asignamos el valor de aux a nombre con un puntero.

    return p;
}

Persona crearPersonaPorParametro(int d, char n[])
{
    Persona p = malloc(sizeof(struct PersonaEstructura));

    p->dni = d;
    strcpy(p->nombre, n);

    return p;
}


// ---------------------------- DESTRUCTOR ----------------------------
void destruirPersona(Persona p)
{
    free(p);
}

// ---------------------------- GETTERS ----------------------------

int getDni(Persona p)
{
    return p->dni;
}

char *getNombre(Persona p)
{
    return p->nombre;
}

// ---------------------------- SETTERS ----------------------------

void setDni(Persona p, int nuevoDni)
{
    p->dni = nuevoDni;
}
void setNombre(Persona p, char nuevoNombre[40])
{
    strcpy(p->nombre, nuevoNombre);
}
