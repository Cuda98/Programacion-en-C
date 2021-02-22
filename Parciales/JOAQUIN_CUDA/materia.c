#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 40
#include "materia.h"
#include "carrera.h"


struct MateriaE // declaramos una estructura
{
    int cargaHoraria; // creamos las variables correspondientes
    int cantidadInscriptos;
    char profesor[SIZE];
};

//CONSTRUCTOR
Materia crearMateria(int cargaHoraria,char profesor[],int cantidadInscriptos)
{
    Materia m = malloc(sizeof(struct MateriaE)); // Reservamos espacio de memoria
    m->cargaHoraria = cargaHoraria;
    m->cantidadInscriptos = cantidadInscriptos;
    strcpy(m->profesor, profesor);


    return m; // Retornamos la materia creada
}

//ORDENAMIENTO DE MAYOR A MENOR POR BUBBLE SORT
void ordenar(Materia m[]){
    Materia aux; //Creo una variable de tipo Materia para poder dumpear el contenido dentro
    int i,j;
    for(i=0;i<10;i++){
        for(j=0;j<10-1;j++){
            if(strcmp(m[j]->profesor,m[j+1]->profesor)==-1){ //uso la función strcmp para comparar el primer nombre con el que le sigue
                                                        //si devuelve -1 quiere decir que el primer parámetro es menor alfabeticamente y lo manda hacia el final, así quedan ordenados de mayor a menor.
                aux=m[j];
                m[j]=m[j+1];
                m[j+1]=aux; // Burbujeo
            }
        }
    }
}

//DESTRUCTOR
void destruirMateria(Materia m)
{
    free(m);
}

//GETTER
int getcargaHoraria(Materia m)
{
    return m->cargaHoraria;
}
int getcantidadInscriptos(Materia m)
{
    return m->cantidadInscriptos;
}

char *getprofesor(Materia m)
{
    return m->profesor;
}


//SETTER
void setcargaHoraria(Materia m, int nuevacargaHoraria)
{
    m->cargaHoraria = nuevacargaHoraria;
}
void setcantidadInscriptos(Materia m, int nuevacantidadInscriptos)
{
    m->cantidadInscriptos = nuevacantidadInscriptos;
}
void setprofesor(Materia m, char nuevoprofesor[40])
{
    strcpy(m->profesor, nuevoprofesor);
}


//toString
void mostrarMateria(Materia m)
{
    printf("------------MATERIA-----------\n");
    printf("Titular: %s \nAlumnos: %d\nHoras/sem: %d \n",m->profesor, m->cantidadInscriptos,m->cargaHoraria);
}



