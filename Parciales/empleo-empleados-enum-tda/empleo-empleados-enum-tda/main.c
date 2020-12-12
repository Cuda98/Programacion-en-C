#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empleo.h"
#include "empleados.h"
enum menu{crear,mostrar,agregar};//crear=0  , mostrar=1   ,   agregar=2  , salir=3
int main()
{
    empleo e;
    empleado aux;
    int opc;
    do{
        printf("\n0.CREAR EMPLEO\n");
        printf("    1.MOSTRAR EMPLEO/EMPLEADOS\n");
        printf("        2.AGREGAR EMPLEADOo\n");
        printf("            3.SALIR\n");
        scanf("%d",&opc);
        switch(opc){
            case crear:
                e= crearEmpleoPorTeclado();// cargo datos del empleo y los retorn a crearEmpleo donde se almacenan en la struct
                break;
            case mostrar:
                mostrarEmpleo(e);
                break;
            case agregar:
            {
                aux = crearEmpleadoPorTeclado(); //lo mismo que EMPLEO pero sus empleados
                setEmpleado(e,aux); // contador
                break;
            }
        }
    }while(opc!=3);
    return 0;
}
