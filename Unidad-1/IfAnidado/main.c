#include <stdio.h>
#include <stdlib.h>

// Un programa que pida 3 números y los muestre de mayor a menor

int main()
{
    int a,b,c;
    printf("Ingrese 3 numeros:\n");
    scanf("%d",&a); // 2
    scanf("%d",&b); // 1
    scanf("%d",&c); // 6
    //printf("Los numeros que eligio son: %d,%d,%d\n",a,b,c);




    if(a>b && a>c){
        if(b>c){
            printf("Caso 1: Orden de mayor a menor: %d,%d,%d",a,b,c);
        }else{printf("Caso 2: Orden de mayor a menor: %d, %d, %d",a,c,b);}
    }


    if(b>a && b>c){
        if(a>c){
            printf("Caso 3: Orden de mayor a menor: %d,%d,%d",b,a,c);
        }else{printf("Caso 4: Orden de mayor a menor: %d,%d,%d",b,c,a);}
    }

    if(c>a && c>b){
        if(b>a){
            printf("Caso 5: Orden de mayor a menor: %d,%d,%d",c,b,a);
        }else{printf("Caso 6: Orden de mayor a menor: %d,%d,%d",c,a,b);}
    }






    return 0;
}



