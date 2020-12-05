#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Persona
{
    int dni;
    char nombre[40];
};

struct Persona pasarCharAStruct(char c[], int tam);

int main()
{
     printf("Archivos\n");
     printf("--------\n\n\n");
/*
     //Paso 1, abrir el archivo
     FILE * archivoEscribir; //crear un puntero a un tipo de dato FILE

     archivoEscribir = fopen("archivo1.txt", "a"); // Hacemos que el puntero ejecute la acción fopen, la misma abre el archivo "archivo1.txt" y lo va a abrir para "a" osea, agregar información

    //Paso 2, escribir


    fprintf(archivoEscribir, "\n\nMODO DIABLO NAZEEEE");

    //Paso 3, cerrar el archivo

    fclose(archivoEscribir);
*/
/*
    // Ahora vamos a leer un archivo
    FILE * archivoLeer;

    archivoLeer = fopen("archivo2.txt", "r");

    while(!feof(archivoLeer))
    {
        char aux[40] = " ";
        fgets(aux, 40, archivoLeer); // fgets va leyendo renglon por renglon, lee hasta q encuentra un \n, un eof, o hasta que lea 40 caracteres (el 40 lo definis vos si queres)
                                        // Recordar q el 40 se reinicia por cada renglon, osea, lee el renglon 1, si pasa los 40 caracteres, no lee mas, y así con el renglon 2
                                        //Lo lee y lo guarda en la variable aux[40]
        printf("----> %s", aux); // una vez leido, lo muestra por pantalla para corroborar q lo leyó bien
    }

    fclose(archivoLeer);
*/


    // Los archivos q leo, recuperarlos y utilizarlos para algo, ese algo va a ser una estructura

    struct Persona personasVector[50];

    int contador = 0; // Contador para saber cuantas personas tenemos leidas

    FILE * archivoAStruct;

    archivoAStruct = fopen("personas.txt", "r");

    while(!feof(archivoAStruct)) // Leo mientras no sea el final del archivo
    {
        char aux[60] = " ";

        fgets(aux, 60, archivoAStruct); // leemos renglon por renglon hasta 50 posiciones,

      //  printf("\n---->Linea:     %s, aux); // cada renglon q lees lo podés mostrar

      personasVector[contador] = pasarCharAStruct(aux, 60);
      contador++;
    }

    fclose(archivoAStruct);

        for(int i = 0; i<50; i++)
        {
            printf("%s\n",personasVector[i].nombre); // Mostramos solo el nombre para ver q se haya hecho bien la lectura
        }



    return 0;
}

struct Persona pasarCharAStruct(char c[], int tam) // la función recibe el vector de char y el tamaño del vector
{
    struct Persona p;

    //olvidamos de los archivos

    int posicionPrimerMes = 0; //Vamos a buscar donde está el + (delimitador), el + nos define donde se separa una variable de la otra, ej 40242+Joaquin

    char dniChar[10] = " ";
    char nombreChar[20] = " "; // definimos 2 aux para guardar el dni y el nombre

    for (int i = 0; i<tam; i++)
    {
        if(c[i]=='+') // buscamos el +
           {
               posicionPrimerMes = i; // Cuando lo encuentra, lo asigna a una variable
           }
    }

    for(int i = 0; i<posicionPrimerMes; i++)
    { // Una vez encontrado el +, entra a este for que lee desde la pos 0, hasta donde está el mas
        dniChar[i]= c[i]; // para ir guardando el dni
    }

    for(int i=posicionPrimerMes+1; i<tam; i++) // Le desde la posicion siguiente del +, hasta el tamaño, osea recorre la segunda parte
    {
        nombreChar[i-posicionPrimerMes-1] = c[i]; // Para ir guardando el nombre, a i se le resta el corrimiento q tenia en el inicio del for
    }

    //Una vez que tenemos el dni separado del nombre en 2 char distintos, los asignamos

    strcpy(p.nombre, nombreChar); // Asignamos el nombre de la persona, al nombre de char
    p.dni = atoi(dniChar); // atoi transforma una cadena de caracteres, en un número
    //asignamos a la persona el dni

    return p;

};





/*
Primer archivo se crea con lo siguiente

    fprintf(archivoEscribir,
            "Estoy escribiendo un archivo\n<---deje un renglon\nAhora muestro un numero entero: %d",55);

    fprintf(archivoEscribir, "\n\nBasta, ya escribí demasiado");


    ahora dependiendo si el archivo en el fopen está en a o w(modo de escritura), va a pasar lo siguiente
    si está en a, borramos los 2 printf y agregamos uno q diga "skere" se va a agregar el skere
    ,si está en w, va a borrar todo y va a aparecer solamente skere

    para no perder datos, el modo de escritura tiene q estar en 'a'
*/
