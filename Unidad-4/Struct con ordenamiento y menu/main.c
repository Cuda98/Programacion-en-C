#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct fecha{
    int dia;
    int mes;
    int anio;
};

struct empleados{
    char nombre[20];
    char apellido[20];
    int dni;
    int edad;
    struct fecha ingreso;
    struct fecha nacimiento;
    } empleado[5], aux;

void cargarempleados ()
{
    int i;
    for(i=0; i<5; i++)
        {
            fflush(stdin);
                printf("Ingrese su nombre: ");
                gets(empleado[i].nombre);
                fflush(stdin);
                printf("ingrese su apellido: ");
                gets(empleado[i].apellido);
      fflush(stdin);
                printf("ingrese su dni: ");
                scanf("%d", &empleado[i].dni);
      fflush(stdin);
                printf("Ingrese su edad: ");
                scanf("%d", &empleado[i].edad);
      fflush(stdin);
                printf("ingrese su fecha de nacimiento (dd mm aaaa):");
                scanf("%d %d %d", &empleado[i].nacimiento.dia, &empleado[i].nacimiento.mes, &empleado[i].nacimiento.anio);
                printf("ingrese su fecha de ingreso (dd mm aaaa):");
                scanf("%d %d %d", &empleado[i].ingreso.dia, &empleado[i].ingreso.mes, &empleado[i].ingreso.anio);
                printf("\n");

        }
        system("pause");
        menu();
}
void mostrarempleado()
{

  for (int i=0;i<5;i++) {
      printf("\n\nDatos empleado n°%i\n",i+1);
      printf("Nombre: %s\n",empleado[i].nombre);
      printf("Apellido: %s\n",empleado[i].apellido);
      printf ("Fecha de nacimiento: %d%d%d\n",empleado[i].nacimiento.dia, empleado[i].nacimiento.mes, empleado[i].nacimiento.anio);
      printf("Fecha de ingreso: %d/%d/%d\n",empleado[i].ingreso.dia, empleado[i].ingreso.mes, empleado[i].ingreso.anio);
      printf("DNI: %d\n",empleado[i].dni);
      printf("Edad: %d\n",empleado[i].edad);

        }
        system("pause");
        menu();

}
//void burbuja();

void OrdenarDni(){

int i=0;//declaramos las variables
int aux=0;
int j=0;

    for(i=0;i<5;i++){
      for(j=0;j<8-i;j++){
        if(empleado[i].dni>empleado[i+1].dni);
            aux=empleado[i].dni;
            empleado[i].dni=empleado[i+1].dni;
            empleado[i+1].dni=aux;
      }
    }

      printf("Los empleados en funcion de su DNI son: \n");

    for(i=0;i<5;i++){
      printf("\n%d. %d \n\n",i,empleado[i].dni);
    }
    system("pause");
    menu();
}


void insercion()// ordenamiento por apellido
  /* el ordenamiento por insercion compara el numero actual con el anterior, si el de la izquierda es mayor los intercambia*/
{
    int i,j,pos;
    for(i=0;i<5;i++)
    {
        int pos;
        pos=i;
        aux=empleado[i];
        while((pos>0)&&(strcmp(aux.apellido, empleado[pos-1].apellido)==-1))
              {
              empleado[pos]=empleado[pos-1];
              pos--;
              }
              empleado[pos]=aux;
    }

    for(i=0;i<5;i++){
      printf("\n%d. %s",i+1,empleado[i].apellido);
    }
    printf("\n");
    printf("\n");
    mostrarempleado();
    system("pause");
    system("cls");
    menu();
}


//void seleccion();
void seleccion()
  //el ordenamiento por seleccion, busca el minimo del grupo y lo intercambi con el numero actual
{
    int i, j, min;
    for(i=0;i<5;i++)
    {
        min=i;

        for(j=i+1;j<5;j++)
        {
            if(strcmp(empleado[j].nombre, empleado[min].nombre) < 0)
            {
                min = j;
            }
        }
        aux = empleado[i];
        empleado[i] = empleado[min];
        empleado[min] = aux;
    }

    printf("\n");
        for(i=0;i<5;i++){
      printf("%d. %s\n",i+1,empleado[i].nombre);
    }
    printf("\n");
    mostrarempleado();
    system("pause");
    system("cls");
    menu();
}




void menu()
{
        int opc;
        printf("1.Cargar empleados: \n");
        printf("2.Mostrar empleado:\n");
        printf("3.Ordenados por Apellido (Insersion)\n");
        printf("4.Ordenados por Nombre (Seleccion)\n");
        printf("5.Ordenar por DNI (Bubble Sort)");
        printf("0.Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d",&opc);

        switch(opc)
        {
            case 1: cargarempleados(); break;
            case 2: mostrarempleado(); break;
            case 3: insercion(); break;
            case 4: seleccion (); break;
            case 5: OrdenarDni();break;
            case 0: printf("Hasta luego;\n");
            default:  menu();
        }
}

int main()
{

    menu();
    return 0;
}
