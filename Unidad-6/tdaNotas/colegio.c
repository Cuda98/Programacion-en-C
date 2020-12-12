#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "colegio.h"
#include "alumno.h"

struct EstructuraColegio{
    char nombre[20];
    int direccion;
    Alumno alumnos[2];

};

Colegio cargarColegio(char nombre[20], int direccion){

   Colegio c = malloc(sizeof(struct EstructuraColegio));

   char auxN[20];
   int i;
   strcpy(c->nombre, auxN);
   c-> direccion = direccion;

   for(i=0;i<1;i++){

        c->alumnos[i] = cargarAlumnoporteclado();
   }

    return c;

}
void mostrarColegio (Colegio c){

printf("----- %s ------",c->nombre);
printf("Direccion = %d",c->direccion);
int i;
for(i=0;i<2;i++){

    mostrarAlumno(c->alumnos[i]);

}
}
