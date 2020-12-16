#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empresa.h"
#include "empleado.h"

struct empresaE{
    char direccion[40];
    int telefono;
    char rubro[30];
    empleado empleados[30];
};
//CONSTRUCTOR
empresa crearEmpresa(char direccion[40],int telefono,char rubro[30]){

    empresa e =malloc(sizeof(struct empresaE));
    int i;

    strcpy(e->direccion,direccion);
    e->telefono=telefono;
    strcpy(e->rubro,rubro);

    for  (i=0;i<30;i++){
        e->empleados[i]=crearEmpleado();
    }

    return e;
}
//DESTRUCTOR
void borrarEmpresa(empresa e){free(e);}
//GET
char* getDireccion(empresa e){return e->direccion;}
char* getRubro(empresa e){return e->rubro;}
int getTelefono(empresa e){return e->telefono;}
//ABM
void agregarEmpleado(empresa e,char nombre[30],char apellido[30],int edad){

    int i;
    for (i=0;i<30;i++){

        if ((getEdad(e->empleados[i]))==(-1)){

            cargarEmpleado(e->empleados[i],nombre,apellido,edad);

            return;
        }
    }
}
void modificarEmpleado(empresa e,char nombre[30]){

    int i;
    int menu=1;
    char aux[30];
    int auxInt;

    for (i=0;i<30;i++){

        if((strcmp((getNombre(e->empleados[i])),nombre))==0){

            while(menu!=0){
            printf("\nQUE DESEA MODIFICAR?\n1. NOMBRE\n2. APELLIDO\n3. EDAD\n0. CANCEL\n");
            scanf("%d",&menu);

                switch(menu){

                case 1:
                        printf("NUEVO NOMBRE ? :\n");
                        fflush(stdin);
                        gets(aux);
                        setNombre(e->empleados[i],aux);
                        menu=0;
                        break;
                case 2:
                        printf("NUEVO APELLDIO ? :\n");
                        fflush(stdin);
                        gets(aux);
                        setApellido(e->empleados[i],aux);
                        menu=0;
                        break;
                case 3:
                        printf("NUEVA EDAD ? :\n");
                        scanf("%d",&auxInt);
                        setEdad(e->empleados[i],auxInt);
                        menu=0;
                        break;
                }
            }
            return;
         }
    }
    printf("\nEMPLEADO NO ENCONTRADO!!!\n");
}
void eliminarEmpleado(empresa e,char nombre[30]){

    int i;
    for(i=0;i<30;i++){

        if((strcmp((getNombre(e->empleados[i])),nombre))==0){
            borrarEmpleado(e->empleados[i]);
            e->empleados[i]=crearEmpleado();
            return;
        }
    }
    printf("\nEMPLEADO NO ENCONTRADO!!!\n");
}
//IMPRIMIR
void mostrarEmpresa(empresa e){

    empleado copiaEmpleados[30];
    empleado temp=crearEmpleado();
    int i,j;
    int min;

    for(i=0;i<30;i++){
        copiaEmpleados[i]=crearEmpleado();
        copiarEmpleados(e->empleados[i],copiaEmpleados[i]);
    }

    printf("\nDIRECCION : %s\nTELEFONO : %d\nRUBRO : %s\n\n",e->direccion,e->telefono,e->rubro);

    for(i=0;i<30;i++){

        min=i;

        for (j=(i+1);j<30;j++){

            if ((getSueldo(copiaEmpleados[min]))>(getSueldo(copiaEmpleados[j]))){
                min=j;
            }
        }
        temp=copiaEmpleados[min];
        copiaEmpleados[min]=copiaEmpleados[i];
        copiaEmpleados[i]=temp;
    }

    for(i=0;i<30;i++){

        if(getEdad(copiaEmpleados[i])!=(-1)){
            mostrarEmpleado(copiaEmpleados[i]);
        }
    }
}
