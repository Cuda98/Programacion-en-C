#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empleo.h"
#include "empleados.h"
//datos del empleo
struct empleoE{
    char nombre[30];
    char telefono[15];
    char direccion[30];
    empleado empleados[100];
    int contador;
};
//almaceno datos
empleo crearEmpleo(char nombre[],char telefono[],char direccion[]){
    empleo e = malloc(sizeof(struct empleoE));
    strcpy(e->nombre,nombre);
    strcpy(e->telefono,telefono);
    strcpy(e->direccion,direccion);
    e->contador = 0;
    return e;
}
//cargo datos y los retorno a funcion crearEmpleo
empleo crearEmpleoPorTeclado(){
    char nombre[30];
    char telefono[15];
    char direccion[30];
    printf("INGRESE NOMBRE EMPRESA : ");
    fflush(stdin);
    gets(nombre);
    printf("INGRESE TELEFONO EMPRESA : ");
    fflush(stdin);
    gets(telefono);
    printf("INGRESE DIRECCION EMPRESA : ");
    fflush(stdin);
    gets(direccion);
    return crearEmpleo(nombre,telefono,direccion);
}
//GET
char * getNombreEmpleo(empleo e){return e->nombre;}
char * getTelefonoEmpleo(empleo e){return e->telefono;}
char * getDireccionEmpleo(empleo e){return e->direccion;}
empleo * getEmpleadosEmpleo(empleo e){return e->empleados;}
//SET
void setNombreEmpleo(empleo e,char nombre[]){strcpy(e->nombre,nombre);}
void setTelefonoEmpleo(empleo e,char telefono[]){strcpy(e->telefono,telefono);}
void setDireccionEmpleo(empleo e,char direccion[]){strcpy(e->direccion,direccion);}
void setEmpleado(empleo e,empleado emp){
    e->empleados[e->contador] = emp;
    e->contador++;
}
//MOSTRAR
void mostrarEmpleo(empleo e){
    printf("NOMBRE EMPRESA : %s\n",e->nombre);
    printf("TELEFONO EMPRESA :%s\n",e->telefono);
    printf("DIRECCION EMPRESA :%s\n",e->direccion);
    for(int i=0;i<e->contador;i++){
        mostrarEmpleado(e->empleados[i]);
    }
}
