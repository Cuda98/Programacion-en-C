#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "persona.h"
#include "materia.h"

int main()
{
    printf("----TDA Anidados----\n\n");

    Materia m1 = crearMateria("Programacion");
    mostrarMateria(m1);



    return 0;
}






































/*
-----------------------------BACKUP MAIN-----------------------------


    Persona persona1 = cargarPersonaPorTeclado();
    mostrarPersona(persona1);

    // ---------------------------- GETTERS ---------------------

    printf("\n\nMUESTRA EL DNI -----> %d\n", getDni(persona1));
    printf("MUESTRA EL NOMBRE -----> %s\n", getNombre(persona1));

     // --------------------------- SETTERS ---------------------

     setDni(persona1, 32548975);
     setNombre(persona1, "Claviver");

     //---Corroboramos que los datos cambiados hayan quedado bien

     printf("\n\nNUEVO DNI: ----> %d\n",getDni(persona1));
     printf("NUEVO NOMBRE: ----> %s\n",getNombre(persona1));

     printf("\n\n\tDATOS ACTUALIZADOS IMPRESOS CON UNA FUNCION:\n");
     printf("\t-------------------------------------------\n\n");

     mostrarPersona(persona1);
     printf("\n\n\n");

     printf("\tCREACION DE PERSONA 2 POR PARAMETRO\n");
     printf("\t------------------------------------\n\n");

     Persona persona2 = crearPersonaPorParametro(15454, "Duki");
     mostrarPersona(persona2);

     setDni(persona2, 51982);
     setNombre(persona2, "YSY A");

     printf("\n\n\tUPDATE DE DATOS\n");
     printf("\t---------------");
     printf("\n\nNUEVO DNI: ----> %d\n",getDni(persona2));
     printf("NUEVO NOMBRE: ----> %s\n",getNombre(persona2));

     printf("\n\n\nARRAY CON TDA\n\n\n"):
     // ARRAY CON TDA

     int cantidad = 3;
     Persona personas[cantidad];

     for(int i = 0; i < cantidad; i++)
     {
         personas[i] = cargarPersonaPorTeclado();
     }

     for(int i = 0; i<cantidad; i++)
     {
         mostrarPersona(personas[i]);
     }



*/
