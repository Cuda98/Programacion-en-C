#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empleado.h"


Empleado crearEmpleado(){

    Empleado e = malloc(sizeof(struct estructura));
    int dias;
    char aux[20]="";
    float s;
    float sT;

    printf("Por favor ingrese el nombre \n");
    fflush(stdin);
    gets(aux); //Recordar que siempre es mejor el strcpy
    strcpy(e->nombre, aux);

    printf("Ingrese los dias trabajados\n");
    scanf("%d",&e->dias);

    printf("Ingrese el sueldo diario\n"); // scanf("%d",&p->dni);
    scanf("%f", &e->sueldoDiario);



    sT = (e->sueldoDiario)* ((float) (e->dias));
    e->sueldoTotal = sT;



    return e;
}


void destruirEmpleado(Empleado e){free(e);}

char *getNombre(Empleado e){return e->nombre;}
int getDias(Empleado e){return e->dias;}
float getSueldoDiario(Empleado e){return e->sueldoDiario;}
float getSueldoTotal(Empleado e){return e->sueldoTotal;}

void setNombre(Empleado e, char nuevo[20]){
    strcpy(e->nombre, nuevo);}

    //Alteran tambien al total
void setDias(Empleado e, int nuevo){
    e->dias = nuevo;
    e->sueldoTotal = (e->sueldoDiario)* ((float) (e->dias));
    }


void setSueldoDiario(Empleado e, float nuevo){
    e->sueldoDiario = nuevo;
    e->sueldoTotal = (e->sueldoDiario)* ((float) (e->dias));
    }


void mostrar(Empleado e){

    printf("%s ---- %d ---- %f ---- %f\n", e->nombre, e->dias, e->sueldoDiario, e->sueldoTotal);

}





