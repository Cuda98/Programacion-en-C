#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Ingrese el numero que desea convertir a binario: ");
    scanf("%d",&x);
    printf("\nEl numero %d en binario es: %d",x,decABin(x));

    return 0;
}


void decABin(int n)
{
    if (n!=0)
    {
        decABin(n/2);
        printf("%i",n%2);
    }
}
