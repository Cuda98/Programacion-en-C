#include <stdio.h>
#include <stdlib.h>

// Crear un login usando Do While

int main()
{
    int valida = 711; // La clave correcta es 711
    int clave = 0;

    do
    {
        printf("Ingresa tu clave: \n");
        scanf("%d",&clave); // Solicitamos el ingreso de la clave y la almacenamos
        if(clave != valida) // Si la contrase�a es distinta de 711, es inv�lida
        {
            printf("Contrase�a invalida\n");
        }

    }

    while(clave!=valida); // Esto se va a repetir siempre y cuando la clave sea distinta de "valida"
    printf("Contrase�a aceptada\n");


    return 0;
}
