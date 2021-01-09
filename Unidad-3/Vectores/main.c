#include <stdio.h>
#include <stdlib.h>

int main()
{
 int array[5] = {3,5,3,2,5}; // 0=3 / 1=5 / 2=3 / 3=2 / 4=5
 int aux[5] = {0};
 int i=0;
 int j=0;

for(i=0; i<5; i++)
 {
     printf("%d",aux[i]);
 }
printf("\n\n");


for(i=0; i<5; i++) // i<cantidad de slots del array
{
     for(j=0; j<5; j++)
     {
         if(array[i]==array[j]) // 3=3? / 3=5? / 3=3? / 3=2? / 3=5?
         { // Si el valor de la posición i, es igual al valor de la posición j, entonces aux++
            aux[i]=aux[i]+1;
         }
     }
     printf ("El %d salio %d veces\n",array[i],aux[i]);

 }

 printf("\n\n");

 for(i=0; i<5; i++)
 {
     printf("%d",aux[i]);
 }

 printf("\n\n");

return 0;

}
/*
El 3 salio 2 veces
El 5 salio 4 veces
El 3 salio 6 veces
El 2 salio 7 veces
El 5 salio 9 veces
99999
*/
