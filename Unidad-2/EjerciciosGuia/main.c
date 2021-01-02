#include <stdio.h>
#include <stdlib.h>


int main()
{



return 0;
}



/*
c)Crea un programa que escriba en pantalla los números pares del 26 al 10.
    int pares = 0;

    for(int i = 26; i > 10; i--)
    {
        if(i%2==0)
        {
            pares++;
        }
    }

    printf("Hay %d numeros pares",pares);
*/

/*



d)Crear un programa calcule cuantas cifras tiene un número entero positivo (pista: se puede hacer dividiendo varias veces entre 10).

    int n=0;
    int cont=1;


    printf("Ingrese el numero que desea calcular cuantas cifras tiene: ");
    scanf("%d",&n);

    while(n/10>0)
    {
        n=n/10;
        cont++;
    }

    printf("El numero tiene %d cifras",cont);


*/
/*



e)Crear un programa que  pida números positivos al usuario,  y  vaya  calculando la suma de todos ellos (terminará cuando se teclea un número negativo o cero o cuando la suma supere los 1500).
    int suma = 0;
    int n = 0;
    for(int i = 0; i<1500; i++)
    {
       if(suma>=0 && suma<=1500)
       {
        printf("Ingrese un numero: ");
        scanf("%d",&n);
        suma = suma + n;

        printf("La suma acumulada es de: %d\n",suma);
       }

        if(suma >= 1500 )
        {
            printf("\nExcedio la suma de 1500\n");
            break;
        }
        else if(n <= 0)
        {
            printf("\nIngreso un numero negativo o un cero\n");
            break;
        }
    }

*/
/*

f)Crear un programa que muestre los números del 15 al 5, descendiendo (pista: en cada pasada habrá que descontar 1, por ejemplo, haciendo i--).
    for(int i=15; i>=5; i--)
    {
        printf("%d, ",i);
    }

    return 0;
*/

/*
g)Crear un programa que muestre los primeros ocho números pares (pista: en cada pasada  habrá  que  aumentar  de  2  en  2,  o  bien  mostrar  el  doble  del  valor  que  hace  de contador).
    int cont = 0;
    int limite = 16; // 8 numeros pares = 16 numeros enteros

    for(int i = 2; i <= limite; i+=2)
    {

        printf("%d, ",i);
    }

*/

/*
h)Crear un programa que escriba en pantalla la tabla de multiplicar del 6.
    for(int i = 1; i<=10; i++)
    {
        printf("%d, ",i*6);
    }

*/

/*
i)Crear  un  programa  que  escriba  en  pantalla  los números  del  1  al  50  que  sean múltiplos  de  3  (pista:  habrá  que  recorrer  todos  esos  números y ver si el resto de la divisiónentre 3 resulta 0).
   int contMult=0;
    for(int i=1; i<=50; i++)
    {
        if(i%3==0)
        {
            contMult++;
        }
    }

    printf("Hay %d multiplos de 3",contMult);

*/
