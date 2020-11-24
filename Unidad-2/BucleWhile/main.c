#include <stdio.h>
#include <stdlib.h>

// Generar un bucle WHILE en el cual cada número ingresado avise si es positivo o negativo, en el caso de teclear 0, se sale del programa

int main()
{
   int n=0;
    printf("Ingrese un numero(0 para salir del programa): ");
    scanf("%d",&n);

    while(n!=0) // mientras que el n sea distinto de 0, va a ejecutar el bucle
    {
        if(n>0)
        {
            printf("Es positivo");

        }
        else
        {
            printf("Es negativo");

        }
        printf("\nTeclea otro numero (0 para salir): ");
        scanf("%d",&n);
    }
    return 0;
}



/*


*/
