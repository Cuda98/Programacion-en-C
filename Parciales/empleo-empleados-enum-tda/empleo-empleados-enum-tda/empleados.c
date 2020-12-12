#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empleados.h"
//datos del empleado
struct empleadoE{
    char nombre[30];
};
//almaceno datos
empleado crearEmpleado(char nombre[]){
    empleado e = malloc(sizeof(struct empleadoE));
    strcpy(e->nombre,nombre);

    return e;
}
//cargo datos y los retorno a funcion crearEmpleado
empleado crearEmpleadoPorTeclado(){
    char nombre[30];

    printf("INGRESE NOMBRE EMPLEADO :");
    fflush(stdin);
    gets(nombre);

    return crearEmpleado(nombre);
}
//GET
char * getNombreEmpleado(empleado e){
    return e->nombre;
}
//SET
void setNombreEmpleado(empleado e,char nombre[]){
    strcpy(e->nombre,nombre);
}
//MOSTRAR
void mostrarEmpleado(empleado e){
    printf("NOMBRE EMPLEADO : %s\n",e->nombre);
}
