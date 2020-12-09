#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Se tienen 3 estructuras anidadas, Persona, Fecha y Vehículo.

Las personas tienen una fecha de nacimiento (año, mes, día), UN SOLO vehículo (entero modelo, char[10] patente) , nombre, apellido y DNI.
Crear un menú con enumeradores, que permita,
1 decidir cuantas personas cargar,
2 cargar las personas,
3 ver las personas,
4 ordenar las personas por patente de vehículo.
*/

enum opciones {salir, elegirersonasCargar, crearPersonas, mostrarPersonas, ordenarPatente};

struct Fecha
{
    int anio;
    int mes;
    int dia;
};

struct Vehiculo
{
    int modelo; // de q año es el auto
    char patente[10];
};

struct Persona
{
    char nombre[40];
    char apellido[40];
    int dni;
    struct Fecha nacimiento;
    struct Vehiculo ve;
};

void ordenarPorPatente(struct Persona vP[], int cantidad);

int busquedaBinariaDNI (struct Persona vP[], int cantidad, int busco);

// -------------

void cargarPersonas(struct Persona vP[], int t);
void verPersonas(struct Persona vP[], int t);


//void guardarEnArchivo(struct Persona personas[], int cantidad); //con cualquier formato se debe guardar, pero delimitando con algún carácter.

int main()
{


    int size = cantidadPersonas();
    // Se elije la cantidad de personas a cargar

    struct Persona personas[size]; // Se carga dependiendo de la cantidad de personas q se tipeo
    scanf("%d",&size);
    cargarPersonas(personas, size);

    verPersonas(personas, size);

    ordenarPorPatente(personas, size);

    verPersonas(personas, size);

/*
    printf("\n\n----BUSQUEDA BINARIA-----");
    ordenarDNI(personas, size);

    printf("\n1= DNI ENCONTRADO\n-1= DNI NO ENCONTRADO\nRESULTADO: %d\n",busquedaBinariaDNI(personas,size,4089721));

*/
    return 0;
}


int cantidadPersonas() // Recibe un numero
{
    int tam = 0;
    printf("Ingrese la cantidad de personas que desea cargar: ");
    return tam;
}


void cargarPersonas(struct Persona vP[], int t)
{
    char aux1[40];
    char aux2[40];
    char pat[10];
    for(int i = 0; i < t; i++)
    {
    printf("Ingrese el nombre de la persona --->: ");
    fflush(stdin);
    gets(aux1);
    strcpy(vP[i].nombre, aux1);
    printf("Ingrese el apellido de la persona --->: ");
    fflush(stdin);
    gets(aux2);
    strcpy(vP[i].apellido, aux2);
    printf("Ingrese el DNI de la persona --->: ");
    scanf("%d",&vP[i].dni);
    printf("Ingrese su fecha de nacimiento (dd/mm/aaaa) --->: ");
    scanf("%d %d %d",&vP[i].nacimiento.dia,&vP[i].nacimiento.mes,&vP[i].nacimiento.anio);
    printf("Ingrese el modelo de su auto: ");
    scanf("%d",&vP[i].ve.modelo);
    printf("Ingrese la patente de su auto: ");
    fflush(stdin);
    gets(pat);
    strcpy(vP[i].ve.patente, pat);
    }


}


void verPersonas(struct Persona vP[], int t)
{
    printf("\n\n------PERSONAS------\n\n");
    for (int i = 0; i < t ; i++)
    {
        printf("Nombre de la persona --> %s\n",vP[i].nombre);
        printf("Apellido de la persona ---> %s\n",vP[i].apellido);
        printf("DNI de la persona ---> %d\n",vP[i].dni);
        printf("Fecha de nacimiento de la persona ---> %d/%d/%d\n",vP[i].nacimiento.dia, vP[i].nacimiento.mes, vP[i].nacimiento.anio);
        printf("Datos del auto\n MODELO ---> %d, PATENTE --->%s\n",vP[i].ve.modelo, vP[i].ve.patente);

        printf("\n\n-------------------------------------------------\n\n\n");
    }
}

void ordenarPorPatente(struct Persona vP[], int cantidad)
{
    int i,j;
    struct Persona aux;

    for(i=0; i<cantidad; i++)
    {
        for(j=0; j<cantidad-1; j++)
        {
            if( strcmp(vP[j].ve.patente, vP[j+1].ve.patente) == 1 )
            {
                aux=vP[j];
                vP[j] = vP[j+1];
                vP[j+1] = aux;
            }
        }
    }

}

void ordenarDNI(struct Persona vP[], int cantidad)
{
    int i,j;
    struct Persona aux;

    for(i=0; i<cantidad; i++)
    {
        for(j=0; j<cantidad-1; j++)
        {
            if(vP[j].dni > vP[j+1].dni)
            {
                aux=vP[j];
                vP[j] = vP[j+1];
                vP[j+1] = aux;
            }
        }
    }
}

int busquedaBinariaDNI(struct Persona vP[], int cantidad, int busco) // tam num
{
    int posInicial = 0;
    int posFinal = 0;
    int posCentral = 0;


    posFinal = cantidad - 1;
    while(posInicial <= posFinal)
    {
        posCentral = (posFinal + posInicial) / 2; // Va a actualizar la posCentral cada vez que vuelva a entrar al while
        if(vP[posCentral].dni == busco)
        {
            return posCentral;
        }
        else
        {
            if(busco>vP[posCentral].dni)
            {
                posInicial = posCentral + 1;
            }
            else
            {
                posFinal = posCentral -1;
            }
        }
    }
    return -1;

}








/*
// enum opciones {salir, cuantasPersonasCargar, cargarPersonas, verPersonas, ordenarPorPatente};
void menu()
{
        int opc;
        printf("1.Elegir la cantidad de personas que va a cargar: \n");
        printf("2.Cargar las personas\n");
        printf("3.Ver las personas cargadas\n");
        printf("4.Ordenados por patente
        printf("0.Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d",&opc);

    switch(opc)
    {
        case salir: printf("Hasta luego\n"); default;
        case cuantasPersonasCargar: elegirCantPersonas(); break;
        case cargarPersonas: cargarPersonas(); break;
        case verPersonas: verPersonas();  break;
        case ordenarPorPatente: ordenarPorPatente(); break;
    }

}

*/
