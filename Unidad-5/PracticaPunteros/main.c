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
    struct Persona p1,p2; // Instanciamos 2 veces la estructura
    struct Persona * punteroAEstructura; // Creamos un puntero que va a a puntar a una estructura
    punteroAEstructura = &p1; // apunta a la persona1

    p1.dni = 40897210;
    strcpy(p1.nombre, "Joaquin");

    p2.dni = 14589785;
    strcpy(p2.nombre, "Roberto");

    punteroAEstructura = &p2;

    printf("Direccion de memoria: %d\n",punteroAEstructura);

    printf("DNI: %d\n",punteroAEstructura -> dni);
    printf("Nombre: %s\n",punteroAEstructura -> nombre);

    printf("DNI: %d\n",punteroAEstructura -> dni);
    printf("Nombre: %s\n",punteroAEstructura -> nombre);

return 0;
}



/*
-------------------EJ 2

    int *punt; // Creamos un puntero que va a apuntar a un entero
    int x=7; // Definimos valores de x e y
    int y=5;

    punt = &x; // punt va a apuntar a la dirección de memoria de x
    x = 4; // Actualizamos el valor de x (pasa de valer 7 a 5)

    printf("%d,  %d",*punt,y); // ¿Qué imprime?
    // el valor alojado al q apunta la dirección de memoria, y el valor de y
    //       4     5

*/

/*
---------------------EJ 6
    int *punta, *puntb; // Definimos 2 punteros que van a apuntar a int
    int x=7;
    int y=5; // Definimos valores de x e y

    punta=&x; // punta apunta a la dirección de memoria de x
    *punta=3; // El valor de x pasa a ser 3

    puntb=&y; // puntb apnuta a la dirección de memoria de y
    *puntb=x; // puntb ahora pasa a valer lo mismo que x

    x=9; // X pasa a valer 9

    printf("%d, %d",*puntb, *punta); // Qué imprime?, debería imprimir un 3 y un 9

*/

/*
-------------------EJ 7
    int *punta, *puntb;
    int x=7;
    int y =5;

    punta=&x;
    *punta=3; // x = 3

    puntb=&y; // apuntamos a la posición de memoria de y
    *puntb=x; // y = 3 (el valor de puntb = valor almacenado en x)

    x=9; // x = 9

    puntb=punta; // b pasa a valer lo que está alojado en punta (en la linea 16 pusimos que x = 9)
    // Si sacamos esto, imprime un 3, 3 (linea 18)

    printf("%d, %d",*puntb, y); // Qué imprime?
           // 9, 3

*/
/*
-------------EJ 8
    int *punt,i;
    int x[5] = {1, 2, 3, 4, 5};

    punt = x; // apuntamos a la primer posición del vector x
    *punt = 9; // Asignamos valor 9 a la primer posición

    for(i=0; i<5; i++)
    {
        printf("%d, ",x[i]); // Qué imprime?
        // Debería imprimir la primer posición modificada, y el resto
    }

*/

/*
---------------EJ9
    int *punt,i;
    int x[5] = {1, 2, 3, 4, 5};

    punt = &x[0];
    *punt = 9; // x[0] = 9;

    punt[3] = 7; // x[3] = 7

     for(i=0; i<5; i++)
    {
        printf("%d, ",x[i]); // Qué imprime?
        // Debería imprimir la primer posición modificada, y la posición 3 modificada
        // 9 2 3 7 5
    }

*/

/*
-------------EJ10
    int *punt, i;
    int x[5] = {1,2,3,4,5};
    punt = x; // Apuntamos a la primer posición del vector
    *x=11; // x[0] = 11
    *(punt+3)=9 ; //x[0+3] = 9;

    for(i = 0; i<5; i++)
    {
        printf("%d, ",x[i]);
    }// 11 2 3 9 5
*/

/*
---------EJ 11
    int *punt, i;
    int x[5] = {1,2,3,4,5};

    punt = x; // Apuntamos a la primer posición del vector x
    *(punt +2) = 9; // x[0+2] = 9
    *(x+3) = 7; //x[0+3] = 7

    punt[1]=11; // x[1] = 11

    // punt = &x[2]; Si queremos apuntar a la posición 2 del vector antes de entrar al for, lo definimos así
    for(i=0; i<5; i++)
    {
        printf("%d, ",*(punt+i)); // imprime el valor de la posición a la cual está apuntando el puntero + i(0 + 0, 0 + 1, 0 + 2)
        //
    }

// x[5] = {1,11,9,7,5
*/




/*
----------EJ 12
        int *punt,i;
    int x[5]= {1, 2, 3, 4, 5};

    punt = x+4; // apunta a la posición x+4
    *(punt-2) = 9; // x[4-2] ==> x[2] = 9

    punt--; // punt -- ===> x[4-1]

    *punt = 7; // x[3] = 7
    punt[1] = 11; // punt[1] es lo mismo q punt + 1, por eso el 11 se imprime en la posición 4..... punt[3+1]

    for(i=0;i<5;i++)
    {
        printf("%d, ",*(x + i)); // se puede poner x[i]
    }//( 1, 2, 9, 7, 11 )
    return 0;
*/

/*
-----------EJ 13
    int *punt, i;
    int x[5] = {1, 2, 3, 4, 5};

    punt = &x[0]+3; // Apuntamos a x[3]
    *(punt-2)= 9; // x[3-2] = 9      x[1] = 9

    punt --; // x[3--]    x[2]
    *(punt) = 7; //x[2] = 7

    punt[1] = 11; //x[2+1] = 11        x[3]= 11
    punt = x; // apuntamos a la primer posicion de x

    for(i=0;i<5;i++)
    {
        printf("%d, ",punt[i]);
    } // 1, 9, 7, 11, 5

*/
