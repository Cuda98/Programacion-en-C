#include <stdio.h>
#include <stdlib.h>

// Se piden dos números, desarrollar una función que compare dichos números y devuelva el mayor de ellos

int main()
{
    int a,b;
    printf("Ingrese un numero: ");
    scanf("%d",&a);
    printf("Ingrese otro numero: ");
    scanf("%d",&b);

    system("PAUSE");

    printf("\nEl mayor de los dos numeros que tipeo es el: %d\n\n",compararNumeros(a,b));



    return 0;
}

int compararNumeros(int n1, int n2) // Se le van a pasar 2 enteros como parámetro
{
    int mayor; // Alojamos el numero mayor en una variable para devolverlo posteriormente

    if(n1>n2) // Si n1 es mayor que n2
    {
        mayor = n1; // Entonces asignamos el valor de n1 a la variable mayor
    }
    else // Caso contrario
    {
        mayor = n2; // Asignamos el valor de n2 a la variable mayor
    }

return mayor; // Devolvemos el resultado de la variable mayor
}
