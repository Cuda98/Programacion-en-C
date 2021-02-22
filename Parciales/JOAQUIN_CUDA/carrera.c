#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANT 10
#include "materia.h"
#include "carrera.h"

// Declaramos una estructura
struct CarreraE
{
    int duracion;
    char nombre[40];
    Materia materias[CANT];
};

//CONSTRUCTOR
Carrera crearCarrera(char n[40],int duracion)
{

    Carrera c = malloc(sizeof(struct CarreraE)); // Reservamos espacio de memoria
    strcpy(c->nombre, n);
    c->duracion = duracion;

    for(int i = 0; i < CANT; i++)  // recorre la cantidad de materias pedidas y las crea a todsa vacias
    {
        c->materias[i] = crearMateria(-1,"VACIO",-1);
    }

    return c;
}

//toString
void mostrarCarrera(Carrera c)
{
    printf("\n--------Carrera--------\n");
    printf("Nombre: %s",c->nombre);
    printf("\nDuracion: %d\n\n",c->duracion);

     for(int i = 0; i < CANT;i++) // Bucle necesario para recorrer las materias y mostrar las que no estén vacias
    {
        int aux;
        aux = getcargaHoraria(c->materias[i]); // lo mismo de la linea 55
        if(aux != -1) // Si la carga horaria de la materia es distinta de -1, imprimí la materia
        {
            mostrarMateria(c->materias[i]);
        }
    }
}
//agregarMateria individual
void agregarMateria(Carrera c , Materia m)
{
    for(int i = 0 ; i<CANT ; i++) // Recorre las materias
    {
        int aux;
        int flag = 0;
        aux = getcargaHoraria(c->materias[i]); // asignamos el vlaor de cargaHoraria de una materia a aux
        if(aux == -1) // en el caso q sea -1
        {
            c->materias[i] = m; // le asignamos el valor que le pasamos por parámetro
            flag = 1; // y levantamos la flag
        }
        if(flag == 1) // si la flag es 1, salimos del bucle
        {
            break;
        }
    }
}

//eliminar una materia de la carrera
void eliminarMateria(Carrera c,Materia m)
{
    for(int i=0;i<CANT;i++)
    {
        if(c->materias[i] == m)
        {
            c->materias[i] = crearMateria(-1,"VACIO",-1);
        }
    }
}

//DESTRUCTOR DE CARRERA
void eliminarCarrera(Carrera c)
{
    free(c);
}

//GETTER
char *getNombre(Carrera c)
{
    return c->nombre;
}
int getDuracion(Carrera c)
{
    return c->duracion;
}
//SETTER
void setNombre(Carrera c, char nuevoNombre[40])
{
    strcpy(c->nombre,nuevoNombre);
}
void setduracion(Carrera c, int nuevaDuracion)
{
    c->duracion = nuevaDuracion;
}

//Sumatoria de alumnos de una carrera
int cantidadDeAlumnos(Carrera c)
{
    int aux = 0;
    for(int i=0;i<CANT;i++)
    {
        if(getcantidadInscriptos(c->materias[i])!= -1)
        {
            aux = aux + getcantidadInscriptos(c->materias[i]);
        }
    }
    return aux;

}

//Ordenamiento por Bubble Sort

void ordenarMateriasPorTitular(Carrera c){
    ordenar(c->materias); //llamo al procedimiento que ordena a las materias por nombre de titular,
                            //le paso por parametro donde se encuentra alojada.
}
