#include <stdio.h>
#include <stdlib.h>

// Crear un programa que pida un n�mero del 1 al 7 y diga el d�a de la semana correspondiente.

int main()
{
    int dia;
    printf("Ingresa el numero del dia que quieras saber: ");
    scanf("%d",&dia);


    switch(dia){
        case 1: printf("\nLunes\n");
            break;
        case 2: printf("\nMartes\n");
            break;
        case 3: printf("\nMiercoles\n");
            break;
        case 4: printf("\nJueves\n");
            break;
        case 5: printf("\nViernes\n");
            break;
        case 6: printf("\nSabado\n");
            break;
        case 7: printf("\nDomingo\n");
            break;

        default: // Si ninguno de los case se verifica verdadero luego ejecuta las instrucciones que indicamos luego de la palabra clave defalut:
            printf("\nFuera de rango\n");







    }

    system("PAUSE");

    return 0;
}
