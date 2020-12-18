#include <stdio.h>

/* function declaration */
int max(int num1, int num2);

int main () {

   /* local variable definition */
   int a = 100;
   int b = 200;
   int ret;

   /* calling a function to get max value */
   ret = max(a, b);

   printf( "Max value is : %d\n", ret );

   return 0;
}

/* function returning the max between two numbers */
int max(int num1, int num2) {

   /* local variable declaration */
   int result;


   if (num1 > num2)
      result = num1;
   else
      result = num2;

   return result;
}











/*
El usuario elije el tamaño que debe tener un array de números enteros.
Una vez que se eligió el tamaño se carga el vector por teclado.
Cuando el vector ya está cargado se pide que muestren por pantalla la cantidad de números pares e impares, además pedimos que muestren por pantalla el menor de los pares y su posición.
Además, se pide la cantidad de números negativos.
*/
