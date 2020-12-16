#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empresa.h"
#include "empleado.h"

int posicionFibonacci(int n);

int main()
{
// EJERCICIO "A"
printf("\n--------------EJERCICIO A-----------------\n");

empresa e = crearEmpresa("29 de Septiembre",01155335600,"Facultad");

agregarEmpleado(e,"Alejandra","Vranic",15);
agregarEmpleado(e,"Nicolas","Perez",16);
agregarEmpleado(e,"Ezequiel","Scordamaglia",17);
agregarEmpleado(e,"Marianela","Ponzo",18);
mostrarEmpresa(e);

modificarEmpleado(e,"Alejandra");
eliminarEmpleado(e,"Ezequiel");
mostrarEmpresa(e);

//EJERCICIO "B"
printf("\n--------------EJERCICIO B-----------------\n");

int posicion=7;
int fibonacci;

fibonacci=posicionFibonacci(posicion);

printf("\nPOSICION : %d\nVALOR : %d\n\n",posicion,fibonacci);

    return 0;
}

int posicionFibonacci(int n){

    if (n==0){return 0;}
    if (n==1){return 1;}

    return ((posicionFibonacci(n-1))+(posicionFibonacci(n-2)));
}


// EJERCICIO "C"
/*
1- DIFERECIAS

Las diferencias entre estas estructuras de datos son la manera en la que se ingresan los datos.
Las listas son de tamaño dinamico, esto quiere decir que va cambiando a medida que ingresamos o removemos un elemento, podemos ingresar tanto en el inicio, como en el final,
    como en la posición que nosotros elijamos, estan constituidas por nodos (conjunto de elemento + puntero), el puntero apunta a la siguiente posición de la lista,
    en caso de ser el final apunta a la pos 0...
Las pilas son estructuras de dato dinámicas de tipo LIFO (last in first out), uno siempre elimina/agrega un elemento en la última posición, un ejemplo de esto es una pila de platos,
    si vos sacás el primer plato que dejaste, vas a tirar todo.
Las colas son un tipo de lista de tipo FIFO (first in first out), esto quiere decir que el primero que entra es el primero en salir, podemos pensar esto como la fila del supermercado.
    Para agregar se hace en la última posición al igual q las pilas, pero la diferencia es que para obtener/eliminar un dato tiene que ser el del INICIo si o si,
    la cola no se puede recorrer y tiene solo 2 funciones, agregarFinal y obtener/eliminarPrimero


2-FUNCIONES/PROCEDIMIENTOS

crearLista();
liberarLista(lista);
obtenerElemento(Lista,variable para guardar el valor,posicion);
Imprimir(lista);

PARA LAS LISTAS:
insertarInicio(Lista,valor);
insertarFin(Lista,valor)
insertar(Lista,valor,posicion);
removerInicio(Lista,variable para guardar el valor);
removerFin(Lista,variable para guardar el valor)
remover(Lista,variable para guardar el valor,posicion);

PARA LAS PILAS:
insertarFin(Pila,valor)
removerFin(Pila,variable para guardar el valor)

PARA LAS COLAS:
insertarFin(Cola,valor)
removerInicio(Cola,variable para guardar el valor);

3-VIRTUDES

La ventaja que presentan frente un array por ej la lista es que al ser dinámica, no tenés q saber el tamaño desde un principio, son utilizadas cuando el vector es muy grande.

*/
