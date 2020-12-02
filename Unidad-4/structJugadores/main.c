#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Defino string.h para poder usar strcpy

struct Jugador // Declarás la estructura
{
    char nombreYApellido[60];
    int edad;
    float altura;
};
// PROTOTIPADO DE FUNCIONES, en un futuro van al .h
// -------------------------------------------------- PARTE 1
struct Jugador cargarJugadorPorTeclado();
void mostrarJugador (struct Jugador j);
// -------------------------------------------------- PARTE 2
void cargarJugadores(struct Jugador j[], int t);
void mostrarJugadores(struct Jugador j[], int t);
// -------------------------------------------------- PARTE 3
void ordenarJugadoresPorEdad(struct Jugador j[], int t);
void ordenarJugadoresPorNombre(struct Jugador j[], int t);


int main()
{
   // struct Jugador j1 = cargarJugadorPorTeclado();  // PARTE 1
   // mostrarJugador(j1);                             // PARTE 1

   int tam = 3; // Definís el tamaño de la estructura
   struct Jugador jugadores[tam]; // Asignás el tamaño al array de estructuras


   // ---------- PARTE 2
   cargarJugadores(jugadores, tam); // Cargas y mostras jugadores por consola
   mostrarJugadores(jugadores, tam);

   // ---------- PARTE 3
   //ordenarJugadoresPorEdad(jugadores, tam); // Una vez cargados se ordenan
   //printf("\n\n--------------JUGADORES ORDENADOS POR EDAD--------------\n\n");
   //mostrarJugadores(jugadores, tam); // Y se imprimen

   ordenarJugadoresPorNombre(jugadores, tam);
   printf("\n\n--------------JUGADORES ORDENADOS POR NOMBRE Y APELLIDO--------------\n\n");
   mostrarJugadores(jugadores, tam);





    return 0;
}


struct Jugador cargarJugadorPorTeclado() // Cargar un jugador por teclado (individualmente)
{
    struct Jugador jugador; // Referencia en mayuscula, con minuscula la variable
    char aux[60] = " ";

    printf("Ingrese el nombre y apellido del jugador: \n"); // Pedir datos y almacenarlos
    fflush(stdin);
    gets(aux);
    strcpy(jugador.nombreYApellido, aux);

    printf("Ingrese la edad del jugador: \n");
    scanf("%d",&jugador.edad);

    printf("Ingrese la altura del jugador: \n");
    scanf("%f",&jugador.altura);

    return jugador;
};

void mostrarJugador(struct Jugador j) // Mostrar un jugador individual
{
    printf("\n    Nombre: %s\n",j.nombreYApellido);
    printf("    Edad: %d\n",j.edad);
    printf("    Altura: %.2f\n",j.altura);
}

// ------------------------------------------------- PARTE 2

void mostrarJugadores(struct Jugador j[], int t) // Recorrer el array de estructura e imprimir todos los jugadores
{
    for(int i=0; i < t; i++)
    {
        mostrarJugador(j[i]);
    }
}

void cargarJugadores(struct Jugador j[], int t) // Cargar jugador en cada estructura
{
    for(int i = 0; i < t; i++)
    {
        j[i] = cargarJugadorPorTeclado();
    }
}

// ------------------------------------------------- PARTE 3

void ordenarJugadoresPorEdad(struct Jugador j[], int t) // Ordenar una estructura ya cargada con bubbleSort
{
    struct Jugador aux; // Para ordenar estructuras, no tenemos que contener un numero en aux
                        // Ahora vamos a contener una estructura para poder ordenarlas
    int x,y;

    for(x = 0; x < t; x++)
    {
        for(y = 0; y < t; y++)
        {
            if(j[y].edad > j[y+1].edad) // si edad en la posición y es mayor a edad a su derecha
            {
                aux=j[y];
                j[y] = j[y+1];
                j[y+1] = aux; // swap
            }
        }
    }
}

void ordenarJugadoresPorNombre(struct Jugador j[], int t)
{
    struct Jugador aux; // Para ordenar estructuras, no tenemos que contener un numero en aux
                        // Ahora vamos a contener una estructura para poder ordenarlas
    int x,y;

    for(x = 0; x < t; x++)
    {
        for(y = 0; y < t; y++)
        {
            if(strcmp(j[y].nombreYApellido, j[y+1].nombreYApellido) == 1 ) // si edad en la posición y es mayor a edad a su derecha
            {
                //strcmp devuelve un entero, 0 si son iguales, 1 nombre1 está después de nombre2, -1 nombre1 está antes de nombre2
                aux=j[y];
                j[y] = j[y+1];
                j[y+1] = aux; // swap
            }
        }
    }
}
