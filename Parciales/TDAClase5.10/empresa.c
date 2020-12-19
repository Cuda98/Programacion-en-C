#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "persona.h"
#include "empresa.h"


struct EmpresaE
{
    char nombreE[40];
    Persona personas[3];
    int contadorPersona; // Creamos un contador para agregar Personas individuales
};



Empresa cargarEmpresa(char nE[40])
{
    Empresa e = malloc(sizeof(struct EmpresaE));

    strcpy(e->nombreE, nE); // Empresa no tiene solamente un  nombre, aparte tiene personas, entonces las vamos a cargar

    for(int i = 0; i<3; i++)
    {
        e->personas[i] = cargarPersonaPorTeclado();
    }


    return e;
}

void mostrarEmpresa(Empresa e)
{
    printf("---EMPRESA---\n");
    printf("NOMBRE: %s",e->nombreE);
    for(int i = 0; i<3; i++)
    {
        mostrarPersona(e->personas[i]);
    }
}
