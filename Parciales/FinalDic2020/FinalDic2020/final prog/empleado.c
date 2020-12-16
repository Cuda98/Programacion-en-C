#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empresa.h"
#include "empleado.h"

struct empleadoE{

    char nombre[30];
    char apellido[30];
    int edad;
    int sueldo;

};
//CONSTRUCTOR
empleado crearEmpleado(){

    empleado e =malloc(sizeof(struct empleadoE));
        strcpy(e->nombre,"-");
        strcpy(e->apellido,"-");
        e->edad=-1;
        e->sueldo=-1;

    return e;
}
void cargarEmpleado(empleado e,char nombre[30],char apellido[30],int edad){
    strcpy(e->nombre,nombre);
    strcpy(e->apellido,apellido);
    e->edad=edad;
    e->sueldo=(50000+(edad*30));
}
//DESTRUCTOR
void borrarEmpleado(empleado e){free(e);}
//GETS
char* getNombre(empleado e){return e->nombre;}
char* getApellido(empleado e){return e->apellido;}
int getEdad(empleado e){return e->edad;}
int getSueldo(empleado e){return e->sueldo;}
//SETS
void setNombre(empleado e,char nNombre[30]){strcpy(e->nombre,nNombre);}
void setApellido(empleado e,char nApellido[30]){strcpy(e->apellido,nApellido);}
void setEdad(empleado e,int nEdad){
    e->edad=nEdad;
    e->sueldo=(50000+(nEdad*30));
}
//IMPRIMIR
void mostrarEmpleado(empleado e){
    printf("\nNOMBRE : %s\nApPELLIDO : %s\nEDAD : %d\nSUELDO : %d\n",e->nombre,e->apellido,e->edad,e->sueldo);
}

void copiarEmpleados(empleado e1,empleado e2){

    strcpy(e2->nombre,e1->nombre);
    strcpy(e2->apellido,e1->apellido);
    e2->edad=e1->edad;
    e2->sueldo=e1->sueldo;
}
