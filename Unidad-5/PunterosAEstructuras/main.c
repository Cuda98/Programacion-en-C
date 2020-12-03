#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Persona
{
    int dni;
    char nombre[20];
};

int main()
{
    printf("\n-----------------------PUNTEROS A ESTRUCTURAS -----------------------\n\n");

    struct Persona p1; //Instanciamos la estructura
    struct Persona * punteroAEstructura; // Creamos una variable de tipo puntero que apunta a la estructura Persona
    punteroAEstructura = &p1; // Apuntamos a la posición de memoria de la instancia que creamos (p1)
    (*punteroAEstructura).dni = 40897210; // Asignamos valor a dni
    strcpy((*punteroAEstructura).nombre, "Joaquin"); // asignamos valor a nombre

    printf("%s --- %d\n\n",(*punteroAEstructura).nombre, (*punteroAEstructura).dni); // Imprimimos el valor alojado en las posiciones de p1.nombre y p1.dni

    // ACTUALIZAMOS LOS DATOS
    printf("Datos Actualizados\n\n");

    punteroAEstructura -> dni = 14589587; // Manera más practica de actualizar los datos a donde está apuntando el puntero
    strcpy(punteroAEstructura -> nombre, "Roberto");

    printf("%s --- %d\n",(*punteroAEstructura).nombre, (*punteroAEstructura).dni);


    return 0;
}
