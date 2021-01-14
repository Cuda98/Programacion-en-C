#include <stdio.h>
#include <stdlib.h>
// Solicitar un rango de números y calcular la cantidad de números pares que hay en ese rango
int main()
{
    int par=0;
    int inicio=0;
    int limite=0;
    printf("Ingrese el numero inicial: ");
    scanf("%d",&inicio);
    printf("Ingrese el numero final: ");
    scanf("%d",&limite);

    for(int i=inicio; i<limite; i++) // Inicializamos en el numero inicial, se va a repetir hasta que i sea menor  al limite y va a incrementar i en 1
    {
        if(i%2==0)
        {
            par++;
        }
    }

    printf("\nLa cantidad de numeros pares entre %d y %d es de: %d\n\n",inicio,limite,par);

    system("PAUSE");



    return 0;
}
