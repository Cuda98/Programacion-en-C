#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Listas-Pilas-Colas \n\n");

    //ARRAY --> Conjunto de muchos datos de un mismo tipo
    //PROBLEMA --> Hay que conocer el tam del array

    //LISTA --> Conjunto de MUCHOS DATOS pero de UN MISMO TIPO
    //NO TIENEN ESE PROBLEMA: el tam se va modificando en cada instante
    //Lista = {} -------- tam = 0;
    //Agrego 1 ------ Lista = {1} ----------- tam = 1
    //Agrego 32 ----- Lista = {1, 32} -------- tam = 2
    //Agrego 44 ----- Lista = {1, 32, 44} ------- tam = 3
    //Agrego 11-pos>1 -Lista = {1, 11, 32, 44} ---- tam = 4
    //Agrego 100 ->Inicio -Lista = {100, 1, 11, 32, 44} --- tam = 5
    //Agrego 22 ->Final -Lista = {100, 1, 11, 32, 44, 22} --- tam = 6

    //Eliminar 32 ---- Lista = {100, 1, 11, 44, 22} ---- tam = 5
    //Eliminar el primero ---- Lista = {1, 11, 44, 22} ---- tam = 4
    //Eliminar el ultimo ----- Lista = {1, 11, 44} ---- tam = 3

    //Obtener el elemento (2) ----> 11
    //Obtener su tamaño ------> 3

    int resultado = 0;

    // Construir a la lista (llamar al constructor)



    ListaEnC lista = crearLista();

    insertarInicio (lista, 11); // Se inserta el 11, en la lista, en la pos 0
    insertarInicio (lista, -22);
    insertar(lista, -8, 1);
    insertarFin (lista, 23); // Se inserta el 23, en la lista, en la pos final
    insertar(lista, 16, 1); // parámetros= en que lista quiero insertar, cual es el elemento que quiero insertar, y en que posicion lo quiero insertar
    insertarInicio(lista -19);
    insertarFin(lista, 53);
    insertar(lista, 16, 1)

    imprimirLista(lista); // {-19, 16, -22, 16, -8, 11, 23, 53}

    removerInicio(lista, &resultado); // Necesita la lista, y un puntero a una determinada variable,
    removerFin(lista, &resultado);
    remover(lista, &resultado, 3); // Este requiere aparte de la lista y el puntero, la posición q va a eliminar

    printf("\n--->ELIMINE: %d\n", resultado); // Imprime el numero que eliminé

    obtenerElemento(lista, &resultado, 1);

    printf("\n--->Agarrando: %d", resultado);

    imprimirLista(lista); // {16, -22, 16 , 11, 23}

    obtenerTamanio(lista, &resultado); // Necesita un puntero al tamaño, porque el tamaño va a quedar guardado en una variable que uno manda por parámetro
    //en definitiva, hay que mandar una variable en la cual vamos a almacenar el tamaño
    //la función te retorna el tamaño pero lo guarda en &resultado



    printf("\n --->TAM: %d\n"); //  5


    return 0;
}


/*
-------MAIN PARTE 1, SIN REMOVER
    printf("Listas-Pilas-Colas \n\n");

    //ARRAY --> Conjunto de muchos datos de un mismo tipo
    //PROBLEMA --> Hay que conocer el tam del array

    //LISTA --> Conjunto de MUCHOS DATOS pero de UN MISMO TIPO
    //NO TIENEN ESE PROBLEMA: el tam se va modificando en cada instante
    //Lista = {} -------- tam = 0;
    //Agrego 1 ------ Lista = {1} ----------- tam = 1
    //Agrego 32 ----- Lista = {1, 32} -------- tam = 2
    //Agrego 44 ----- Lista = {1, 32, 44} ------- tam = 3
    //Agrego 11-pos>1 -Lista = {1, 11, 32, 44} ---- tam = 4
    //Agrego 100 ->Inicio -Lista = {100, 1, 11, 32, 44} --- tam = 5
    //Agrego 22 ->Final -Lista = {100, 1, 11, 32, 44, 22} --- tam = 6

    //Eliminar 32 ---- Lista = {100, 1, 11, 44, 22} ---- tam = 5
    //Eliminar el primero ---- Lista = {1, 11, 44, 22} ---- tam = 4
    //Eliminar el ultimo ----- Lista = {1, 11, 44} ---- tam = 3

    //Obtener el elemento (2) ----> 11
    //Obtener su tamaño ------> 3

    int resultado = 0;

    // Construir a la lista (llamar al constructor)



    ListaEnC lista = crearLista();

    insertarInicio (lista, 11); // Se inserta el 11, en la lista, en la pos 0
    insertarInicio (lista, -22);
    insertar(lista, -8, 1);
    insertarFin (lista, 23); // Se inserta el 23, en la lista, en la pos final
    insertar(lista, 16, 1); // parámetros= en que lista quiero insertar, cual es el elemento que quiero insertar, y en que posicion lo quiero insertar
    insertarInicio(lista -19);
    insertarFin(lista, 53);
    insertar(lista, 16, 1)

    imprimirLista(lista); // {-19, 16, -22, 16, -8, 11, 23, 53}

    obtenerTamanio(lista, &resultado); // Necesita un puntero al tamaño, porque el tamaño va a quedar guardado en una variable que uno manda por parámetro
    //en definitiva, hay que mandar una variable en la cual vamos a almacenar el tamaño
    //la función te retorna el tamaño pero lo guarda en &resultado

    printf("\n --->TAM: %d\n"); // 8

return 0;
*/
