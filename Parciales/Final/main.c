#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "materia.h"
#include "profesor.h"

int main()
{
    int aux = 0;



    Materia m1 = crearMateria();
    mostrarMateria(m1); // crashea a la hora de mostrar la materia con los 4 profesores, me rindo.







    int x;
    int suma= 0;
    printf("Digite un numero: ");
    scanf("%d",&x);

    for(int i = 0; i<=x; i++)
    {

        printf("%d",sucFib(i)); // Muestra la sucesion, no puedo sumarla para mostrar el valor de la pos
    }



    return 0;
}

int sucFib (int n)
{
    if (n<2)
        {
            return 1;
        }

     else
        {


         return sucFib(n-1) + sucFib(n-2);
        }

}


///////////////////// EJERCICIO 3

/*
c- ¿Cuáles son las diferencias fundamentales entre una lista, pila y cola? ¿Cuáles son las
funciones/procedimientos que caracterizan a estas? ¿Qué virtudes tienen frente a un
array? (2 puntos)


Las diferencias entre estas estructuras de datos son la manera en la que se ingresan los datos.
Las listas son de tamaño dinamico, esto quiere decir que va cambiando a medida que ingresamos o removemos un elemento, podemos ingresar tanto en el inicio, como en el final, como en la posición que nosotros elijamos, estan constituidas por nodos (conjunto de elemento + puntero), el puntero apunta a la siguiente+
+ posición de la lista, en caso de ser el final apunta a la pos 0...
Las pilas son estructuras de dato dinámicas de tipo LIFO (last in first out), uno siempre elimina/agrega un elemento en la última posición, un ejemplo de esto es una pila de platos, si vos sacás el primer plato que dejaste, vas a tirar todo.
Las colas son un tipo de lista de tipo FIFO (first in first out), esto quiere decir que el primero que entra es el primero en salir, podemos pensar esto como la fila del supermercado. para agregar se hace en la última posición al igual q las pilas, pero la diferencia+
es que para obtener/eliminar un dato tiene que ser el del INICIo si o si, la cola no se puede recorrer y tiene solo 2 funciones, agregarFinal y obtener/eliminarPrimero


La ventaja que presentan frente un array por ej la lista es que al ser dinámica, no tenés q saber el tamaño desde un principio, son utilizadas cuando el vector es muy grande.
*/
