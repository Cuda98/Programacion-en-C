#include <stdio.h>
#include <stdlib.h>


int main()
{
int numero;
int opcion=-9;

   while(opcion!=0){
       printf("\n1-Creciente:\n");
       printf("2-Decreciente:\n");
       printf("3-Factorial:\n");
       printf("4-Binario:\n");
       printf("5-Sumar hasta N:\n");
       printf("0-Salir\n");
        scanf("%d",&opcion);

switch(opcion){
        case 1:printf("\nIngrese numero:\n");
           scanf("%d",&numero);
           mostrarcreciente(numero);
        break;

        case 2:printf("\nIngrese numero:\n");
           scanf("%d",&numero);
           mostrardecreciente(numero);
        break;

        case 3:printf("\nIngrese numero:\n");
           scanf("%d",&numero);
           printf("=%d",factorial(numero));
        break;

        case 4 :printf("\nIngrese numero\n");
        scanf("%d",&numero);
        decABin(numero);
        break;

        case 5:printf("\nIngrese numero: \n");
        scanf("%d",&numero);
        printf("%d",sumarHastaN(numero));
        case 0:break;
        }
   }

    return 0;
}

void mostrarcreciente(int numero){
    if(numero>0){
        mostrarcreciente(numero-1);
        printf("%d",numero);
    }
    }
void mostrardecreciente(int numero){
    if (numero>0){
        printf("%d",numero);
        mostrardecreciente(numero-1);
    }
    }
int factorial(int numero){
    if( numero > 1 ){
            printf("*%d",numero);
        numero = numero*(factorial(numero-1));
    }
    else{
        return numero;
    }
}

void decABin(int n)
{
    if (n!=0)
    {
        decABin(n/2);
        printf("%i",n%2);
    }
}

int sumarHastaN(int n)
{
if(n==1)
return 1;
else
return (sumarHastaN(n-1)+n);
}

