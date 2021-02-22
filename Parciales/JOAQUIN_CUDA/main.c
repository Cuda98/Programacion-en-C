#include <stdio.h>
#include <stdlib.h>
#include "materia.h"
#include "carrera.h"


int main()
{
    printf("---------------------------------------\nALEXIS JOAQUIN CUDA --  \n---------------------------------------\n\n");

    printf("\n\nEJERCICIO 1 - crear y agregar materias a carrrera");

    //CREACI�N DE MATERIA
    Materia m1 = crearMateria(8,"Nico Perez",80);
    Materia m2 = crearMateria(8,"Ale Vranic",56);
    Materia m3 = crearMateria(6,"Luis Millan",105);
    Materia m4 = crearMateria(4,"Lau Loidi",75);
    //CREACI�N DE CARRERA
    Carrera c1 = crearCarrera("Lic. Sistemas",5);
    //ASGINAMOS LAS MATERIAS A LA CARRERA 1
    agregarMateria(c1,m1);
    agregarMateria(c1,m2);
    agregarMateria(c1,m3);
    agregarMateria(c1,m4);
    //MOSTRAMOS LA CARRERA CON LAS MATERIAS CORRESPONDIENTES QUE LE FUERON AGREGADAS
    mostrarCarrera(c1);


    printf("\n\nEJERCICIO 2 - mostrar carrera con materias ordenadas por titular \n");
    ordenarMateriasPorTitular(c1); // SE ORDENA PARA LUEGO SER MOSTRADA
    mostrarCarrera(c1);



    printf("\n\nEJERCICIO 3 - MOSTRAR cantidad de alumnos");
    printf("\nLa cantidad de alumnos de la carrera es: %d",cantidadDeAlumnos(c1)); // Se imprime la sumatoria de los alumnos de todas las materias






    printf("\n\nEJERCICIO 4 - eliminar la materia 3\n");
    eliminarMateria(c1,m3);
    mostrarCarrera(c1); // SE ELIMINA LA MATERIA 3 PARA LUEGO SER MOSTRADA LA CARRERA POR PANTALLA

    return 0;
}

/*
    EJERCICIO 5 - Definir
    1. �Qu� es una lista?
    2. �Qu� tipos de lista conoce?
    3. �En qu� se diferencia de una cola y una pila?
    4. �En qu� se podr�a aplicar en este programa?

    1. Una lista es una estructura de dato, se podr�a decir que son parecidas a los vectores debido a que son arreglos unidimensionales de muchos datos del mismo tipo
    pero con la diferencia de que las listas ofrecen una ventaja, no necesitar el tama�o de antemano, hay que recordar que al vector vos le asignabas un valor ya  // char nombre[40]
    Las listas ofrecen ventajas como una dimensi�n din�mica, al ir agregando o sacando datos el tama�o de la lista va variando. Esto significa que no van a dejar espacios de memoria vacios sin usar.
    Est�n compuestas por nodos (Un nodo contiene el dato a insertar y un puntero que apunta a un lado dependiendo de si el dato es el �ltimo, si no es el �ltimo apunta ala siguieente posici�n)
    Estas se utilizan cuando se almacenan MUCHOS datos. Presentan la desventaja de no ser nativas en C, ergo, hay que codearlas.

    2. Pilas, colas, simple enlazada.

    3. La diferencia entre ambos tipos de lista radica en la el tipo de estructura
    Las pilas  son de tipo LIFO(Last in first out), una analog�a para entenderlas mejor es el ejemplo de nico.
    si vos ten�s una pila de platos y sac�s el primer plato, se te cae toda, si sac�s el del medio tambi�n, por eso el �ltimo q entr� es el primero en salir.

    Una cola es lo mismo solamente que de tipo FIFO (First in first out), una analog�a es la cola de un banco, el primero q entra es el primero en salir, no pod�s colarte.

    4. Hagamos de cuenta que tenemos configurado un servidor de  un juego X con una capacidad de 26 jugadores en l�nea, una vez que la capacidad llegue a su l�mite vamos a necesitar una estructura de dato
    que nos permita almacenar a los jugadores que est�n queriendo entrar al servidor, entre todas las que tenemos elegimos la Cola debido a que su estructura nos sirve (FIFO)
    vamos a necesitar que el primer jugador que ingres� a la cola, sea el primero en salir de ella e ingresar al servidor.

    Y un ejemplo de una pila la verdad es que no se me viene nada a la cabeza, me imagino una playlist de youtube, que siempre reproduce el �ltimo tema que agregaste a la misma

*/
