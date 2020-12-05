#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "materia.h"
#include "persona.h" // hay que incluir la persona.h para tener todas las funciones
//define CANT 3

struct MateriaE
{
    char nombreM[40];

    //anidada con personas
    //Persona personas[CANT];
    Persona personas[3];
};

Materia crearMateria(char n[40])
{
    Materia m = malloc(sizeof(struct MateriaE));

    strcpy(m->nombreM, n);

    for(int i = 0; i < 3; i++)
    {
        m->personas[i] = cargarPersonaPorTeclado(); // y en esa posición, se carga 1 persona por teclado, osea se hacen 3 personas por teclado y quedan guardadas en el array de la materia
        //m->personas[i] // accedo al array en la posición que me marca el iterador
    }


    return m;
}

void mostrarMateria(Materia m)
{
    printf("\n----------MATERIA----------\n");
    printf("NOMBRE DE LA MATERIA: %s",m->nombreM);

    for(int i = 0; i < 3; i++)
    {
        mostrarPersona(m->personas[i]);
    }


}
