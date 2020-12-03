#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Defino string.h para poder usar strcpy
#define CANTJUGADORES 30
//PARTE 5, cargar a los jugadores de a uno, y a cargar a los q haya q cargar, no a todos juntos
// ESTRUCTURAS

struct Jugador // Declarás la estructura
{
    char nombreYApellido[60];
    int edad;
    float altura;
};

struct Equipo
{
    char nombre[40];
    struct Jugador plantel[CANTJUGADORES];
    int cantDeAgregados; // Si agregas a un jugador, lo tenés que agregar en ESTA posición porq esa es la cantidad de jugadores q ya agregamos
}; // Siempre se va a modificar el equipo, ya que cuando hagamos (ABM) de un jugador, se va a modificar el EQUIPO

// PROTOTIPADO DE FUNCIONES, en un futuro van al .h
// -------------------------------------------------- PARTE 1
struct Jugador cargarJugadorPorTeclado();
void mostrarJugador (struct Jugador j);
// -------------------------------------------------- PARTE 2, CARGA
void cargarJugadores(struct Jugador j[], int t);
void mostrarJugadores(struct Jugador j[], int t);
// -------------------------------------------------- PARTE 3 ORDENAMIENTO
void ordenarJugadoresPorEdad(struct Jugador j[], int t);
void ordenarJugadoresPorNombre(struct Jugador j[], int t);
int buscarJugadoresEdad(struct Jugador j[], int t, int e);
// -------------------------------------------------- PARTE 4, Struct EQUIPO
void mostrarEquipo(struct Equipo e);
struct Equipo cargarEquipo(); // Lo mando por parametros en vez de cargar x teclado

// ------------------------------------------------- PARTE 5 ------ ABM ----------------
// ALTA
struct Equipo agregarJugador(struct Equipo e, struct Jugador j); // básicame "el JUGADOR pepe va a ser agregado al EQUIPO Boca"
//cada vez que se ejecute esta funcion se va a agregar a un jugador distinto al equipo que se elija
//una vez que se finaliza, va a retornar al Equipo para que los cambios no se pierdan

//BAJA
struct Equipo bajarJugador(struct Equipo e, int edad); // vamos a borrar a un jugador con determinada edad, "En este equipo, va a eliminar al jugador que tenga este dni", recordar q si edad = -1, no imprime
//MODIFICACION "cambiar variables
struct Equipo modificarJugador(struct Equipo e, int edad); // Vamos a modificar un jugador de este equipo al que tenga la edad que se le pase como argumento

// LO NUEVO 1
// ENUMERADORES
// básicamente, ponerle nombre a los números ¿?
enum color{rojo, azul, verde=33, amarillo}; // a estas palabras, le asignan números, empiezan en 0 y se van incrementando de 1 en 1, podés asignarle un numero a cada palabra (si le pones 34, va a seguir en 35,36,etc)
//           0     1      33       34
enum busqueda{no_encontrado = -1}; // vas a la funcion buscarJugadoresEdad y en vez de resultado = -1, ponés resultado = no_encontrado;
// Un ej para un switch
enum opciones{salir, cargar, mostrar, eliminar, modificar, limpiar};
//              0       1      2        3         4          5
//en vez de case 0, pones case salir

//LO NUEVO 2
// PUNTEROS




int main()
{
    printf("---ENUMERADORES---\n\n");
    printf("---> %d\n",rojo);
    printf("---> %d\n",azul);
    printf("---> %d\n",verde);
    printf("---> %d\n",amarillo);












    // ------------------------------------------------- PARTE 4
    // defino al equipo con basura
    ///struct Equipo equipo1; // declaro un equipo
    //cargar al equipo con su nombre, cantDeAgregados 0 y el vector(plantel) con basura
    ///equipo1 = cargarEquipo(); // cargo un equipo

    ///mostrarEquipo(equipo1); // va a mostrar el equipo con 30 jugadores cargados con basura

    // al equipo 1 le voy a agregar a un jugador

    ///struct Jugador j1, j2, j3; //declaro un jugador
    ///j1 = cargarJugadorPorTeclado(); // lo cargo
    ///j2 = cargarJugadorPorTeclado();
    ///j3 = cargarJugadorPorTeclado();

    ///equipo1 = agregarJugador(equipo1, j1); // le asigno a equipo el jugador agregado
    ///equipo1 = agregarJugador(equipo1, j2);
    ///equipo1 = agregarJugador(equipo1, j3);
   /// mostrarEquipo(equipo1); // muestro el equipo con el jugador agregado

    ///equipo1 = bajarJugador(equipo1, 30); // el que tenga edad de 30 en el equipo 1, fuera
   /// mostrarEquipo(equipo1); // Muestra el equipo otra vez, si hay alguien con edad 30, lo saca.

    ///equipo1 = modificarJugador(equipo1, 40); // al que tiene edad 40 lo modificamos, porq no se puede tener esa edad
    ///mostrarEquipo(equipo1); // Muestra con edad modificada
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
    { // Ahora para controlar la basura con la edad -1, vamos a crear un if
        if(j[i].edad != -1)
        {
        mostrarJugador(j[i]); // Va a mostrar SOLAMENTE jugadores con la edad distinta de -1
        }
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
        for(y = 0; y < t-1; y++)
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
        for(y = 0; y < t-1; y++)
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

int buscarJugadoresEdad(struct Jugador j[], int t, int e) // se pasa por parametros la edad (e) que vamos a buscar
{
    int resultado = no_encontrado;

    for (int x = 0; x < t; x++)
    {
        if(j[x].edad == e)
        {
            resultado = x;
        }
    }

    return resultado;
}

// --------------- PARTE 4

void mostrarEquipo(struct Equipo e)
{
    printf("\n------------------EQUIPO------------------\n");
    printf("Nombre del equipo: %s\n", e.nombre);

    mostrarJugadores(e.plantel, CANTJUGADORES);

}

struct Equipo cargarEquipo()
{
    struct Equipo e;

    e.cantDeAgregados = 0; // Si estoy cargando el equipo por primera vez, no tengo ningún jugador agregado

    char aux[40];
    printf("Escriba el nombre del equipo: \n");
    fflush(stdin);
    gets(aux);
    strcpy(e.nombre, aux);


    // CARGA A TODOS LOS JUGADORES
    // cargarJugadores(e.plantel, CANTJUGADORES);

    for (int i = 0; i<CANTJUGADORES; i++)
    {
        e.plantel[i].edad = -1; // una bandera que indica que es basura (no cargué nada)
    }

    return e;
};

// PARTE 5 ---------------------ABM------------------------


struct Equipo agregarJugador(struct Equipo e, struct Jugador j)
{
    int i = e.cantDeAgregados; //Como es la primera vez q agrego a alguien, está en 0, así que se agrega en la pos 0
    if(i<CANTJUGADORES) // Siempre q la Cant de agregados sea menor que la cantidad de jugadores
    {
    e.plantel[i] = j; // agrego un jugador al equipo
    // En qué posición agrego a j? 0...1...CANTJUGADORES, lo hacemos con un contador de jugadores, linea 19, linea 199
    // e.plantel hace referencia al array que está dentro del equipo, entonces, agrego a un jugador en e.plantel y lo igualo al jugador que nosotros queremos
    e.cantDeAgregados = e.cantDeAgregados + 1; // Se suma un jugador, y se incrementa el contador
    }
    return e;
};

struct Equipo bajarJugador(struct Equipo e, int edad) // hay que buscar al jugador para que nos diga en que posición esta
{
    int i = buscarJugadoresEdad(e.plantel, CANTJUGADORES, edad);
    // Si yo busco al jugador con edad X y lo encuentra en la posición q sea, edad pasa a ser -1 (si es -1 no lo muestra, recordar la impresion)

    if(i!=-1) // en caso de no encontrar al jugador, no hace nada, es necesario para q no colapse
    {
    e.plantel[i].edad = -1; // en la posición q se encontró le asigna la edad a -1 y no lo va a mostrar
    }

    return e;
};

struct Equipo modificarJugador(struct Equipo e, int edad) // tengo un equipo y quiero modificar al jugar que tiene la edad pasada por argumento
{
    int i = buscarJugadoresEdad(e.plantel, CANTJUGADORES, edad); // lo buscamos en el plantel

    if(i!=-1) //  Si lo encuentro, vuelvo a pedirle los datos
    {
    struct Jugador j = cargarJugadorPorTeclado();
    e.plantel[i] = j; // y los almaceno en la posición que lo encontró
    }

    return e;
};






/*
 MAIN BACKUP

     // -------------------------------------------------- PARTE 1
   // struct Jugador j1 = cargarJugadorPorTeclado();
   // mostrarJugador(j1);

  /// int tam = 3; // Definís el tamaño de la estructura
  /// struct Jugador jugadores[tam]; // Asignás el tamaño al array de estructuras


   // -------------------------------------------------- PARTE 2, CARGA
  /// cargarJugadores(jugadores, tam); // Cargas y mostras jugadores por consola
  /// mostrarJugadores(jugadores, tam);

   // -------------------------------------------------- PARTE 3 ORDENAMIENTO POR EDAD
   //ordenarJugadoresPorEdad(jugadores, tam); // Una vez cargados se ordenan
   //printf("\n\n--------------JUGADORES ORDENADOS POR EDAD--------------\n\n");
   //mostrarJugadores(jugadores, tam); // Y se imprimen

   // -------------------------------------------------- PARTE 3 ORDENAMIENTO POR NOMBRE

  /// ordenarJugadoresPorNombre(jugadores, tam);
  /// printf("\n\n--------------JUGADORES ORDENADOS POR NOMBRE Y APELLIDO--------------\n\n");
  /// mostrarJugadores(jugadores, tam);

   // -------------------------------------------------- PARTE 3, BUSQUEDA SECUENCIAL X EDAD

   /// printf("\nEl jugador con edad 21 se encuentra en la posicion: %d",buscarJugadoresEdad(jugadores, tam, 21));









*/
