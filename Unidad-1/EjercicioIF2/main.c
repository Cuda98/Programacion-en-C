#include <stdio.h>
#include <stdlib.h>

/*
Hacer un programa en C para una tienda de helado da un descuento por compra a sus clientes con membresía dependiendo de su tipo,
 sólo existen tres tipos de membresía, tipo A, tipo B y tipo C. Los descuentos son los siguientes:

Tipo A 10% de descuento
Tipo B 15% de descuento
Tipo C 20% de descuento

*/

int main()
{
    int monto;
    int montoFinal;
    char tipo = ' ';

    printf("Bienvenido al sistema de la heladeria Volta, por favor ingrese el monto a pagar:");
    scanf("%d",&monto);
    printf("\nTipos de membresia:\nA\nB\nC\n\n");
    printf("Le queremos recordar que el sistema es sensible a las mayusculas\n");
    printf("Ingrese su tipo de membresia:");

    fflush(stdin); // Se limpia el buffer
    scanf("%c",&tipo);

    if(tipo == 'A'){ // Si el usuario tipea una A se aplicará un 10% de descuento
        int descuento = 10;
        printf("\nUsted tiene la membresia A, se aplicara un 10 porciento de descuento a su monto final\n\n");
        montoFinal = (monto - (descuento * monto) / 100);
        printf("Su monto final es de: %d$\n\n",montoFinal);
    }
    else if(tipo == 'B'){ // Si el usuario tipea una B se aplicará un 15% de descuento
        int descuento = 15;
        printf("\nUsted tiene la membresia B, se aplicara un 15 porciento de descuento a su monto final\n\n");
        montoFinal = (monto - (descuento * monto) / 100);
        printf("Su monto final es de: %d$\n",montoFinal);
    }

    else if(tipo == 'C'){ // Si el usuario tipea una C se aplicará un 20% de descuento
        int descuento = 20;
        printf("\nUsted tiene la membresia C, se aplicara un 20 porciento de descuento a su monto final\n\n");
        montoFinal = (monto - (descuento * monto) / 100);
        printf("Su monto final es de: %d$\n",montoFinal);
    }
    else
    {
        printf("\nUsted no tiene una membresia valida, el monto a pagar es de: %d$\n\n",monto);
    }



    return 0;
}
