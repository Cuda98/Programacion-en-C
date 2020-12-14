#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c1[]= "hola"; // definimos la cadena1
    int largo=0;       // definimos una variable para el largo de la cadena

    largo=strlen(c1);  // asignamos la longuitud de la cadena1 a la variable "largo
    char c2[largo];    // definimos una cadena secundaria en la cual va a estar la contraseña
    strcpy(c2,c1);     // copiamos el contenido de c1 a c2  (siempre empezar por el lugar a donde queremos q se copie, y despues el lugar en donde esta el contenido a copiar)

    printf("Cadena: %s\n\n",c1);
    printf("Largo de la cadena: %d\n",largo);


    for(int i=0; i<largo; i++)   // Recorremos la cadena
    {
        if(c1[i]== 'o') {        // si encuentra una 'o' en la c1, la va a reemplazar por una x
            c2[i]= 'x';
        }

    }
printf("\nCadena Convertida: %s\n",c2); // imprime la c2

    return 0;
}


