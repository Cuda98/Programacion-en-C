#include <stdio.h>
#include <stdlib.h>
/*
Se desea crear un programa que simule una calculadora simple, lee dos enteros y un caracter.
Si el caracter es un +, se imprime la suma.
Si el caracter es un -, se imprime la diferencia.
Si es un *, se imprime el producto.
Si es un /, se imprime el cociente.

Crear un procedimiento.
void calculadora(int numero1, int numero2, char simbolo)
*/


int main()
{
    int a,b,c;
    printf("Ingrese el valor del numero 1:");
    scanf("%d",&a);
    printf("Ingrese el valor del numero 2:");
    scanf("%d",&b);
    fflush(stdin);
    printf("Ingrese un caracter (+, -, *, /  ): ");
    scanf("%c",&c);
    fflush(stdin);

    printf("El resultado es: %d",calculadora(a,b,c));

    return 0;
}

void calculadora(int numero1, int numero2, char simbolo) // Definimos un procedimiento que no va a devolver algo
{ // Simplemente queremos que ejecute una operación de suma, resta, etc, sin que devuelva el resultado
    int resultado = 0; // Variable en la cual almacenamos el resultado

    if(simbolo == '+') // Si el simbolo es +
    {
        resultado = numero1 + numero2; // Resultado =
    }

    if(simbolo == '-')
    {
        resultado = numero1 - numero2;
    }

    if(simbolo == '*')
    {
        resultado = numero1 * numero2;
    }

    if(simbolo == '/')
    {
        resultado = numero1 / numero2;
    }

    return;
}
