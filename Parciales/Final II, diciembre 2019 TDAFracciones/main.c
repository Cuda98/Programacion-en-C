#include <stdio.h>
#include <stdlib.h>
#include "fraccion.h"



int main()
{
    printf("----TDA Fraccion----\n\n");

    // Creamos una fraccion y la mostramos junto a su valor en decimal
    Fraccion frac1 = crearFraccion(7, 5);
    mostrarFraccion(frac1);

    printf("\n\n");

    Fraccion frac2 = crearFraccion(2, 4);
    mostrarFraccion(frac2);

    // SUMAMOS E IMPRIMIMOS DEPENDIENDO SI F1 ES MAYOR O MENOR QUE F2

    printf("\n\nFRACCION SUMADA:\n\n");

    Fraccion suma=calcularSuma(frac1, frac2);
    mostrarFraccion(suma);

    printf("\n\n");

    if(relacionar(frac1, frac2) == 0)
    {
        printf("Fraccion 1 es menor que la fraccion 2");
    }
    else
    {
        printf("Fraccion 1 es mayor que la fraccion 2");
    }

    printf("\n\n\n");

    printf("Suma de fracciones simplificada: \n");

    Fraccion sumaSimplificada = simplificar(suma);
    mostrarFraccion(sumaSimplificada);


    return 0;
}
