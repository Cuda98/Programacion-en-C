#include <stdio.h>
#include <stdlib.h>

// Se cargan por teclado tres notas distintas. Mostrar por pantalla la mayor de ellas.

int main()
{
   int n1;
   int n2;
   int n3;

   printf("Ingrese el valor de n1: \n");
   scanf("%d",&n1);
   printf("Ingrese el valor de n2: \n");
   scanf("%d",&n2);
   printf("Ingrese el valor de n3: \n");
   scanf("%d",&n3);

   printf("\n");
   printf("El numero mayor de los 3 es el: ");

   if(n1>n2) // si n1 > n2
   {
       if(n1>n3) // y n1>n3
       {
           printf("%d",n1); // imprimir n1
       }
       else // caso contrario
       {
           printf("%d",n3); // imprimir n3
       }
   }
   else
   {
       if(n2>n3)
       {
           printf("%d",n2);
       }
       else
       {
           printf("%d",n3);
       }
   }

    return 0;
}
