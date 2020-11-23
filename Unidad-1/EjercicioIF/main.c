#include <stdio.h>
#include <stdlib.h>

/*
 Hacer un programa en C para una tienda de zapatos que tiene una promoción de descuento para vender al mayor, esta dependerá del número de zapatos que se compren.
 Si son más de diez, se les dará un 10% de descuento sobre el total de la compra;
 si el número de zapatos es mayor de veinte pero menor de treinta, se le otorga un 20% de descuento;
 y si son más treinta zapatos se otorgará un 40% de descuento. El precio de cada zapato es de $100.
*/

int main()
{
    int cantidad = 0;
    int precioFinal = 0;


    printf("Bienvenido a la tienda de Ricky Sarkany, por favor elija la cantidad de pares de zapatos que desea comprar: ");
    scanf("%d",&cantidad);
    printf("\n");

    int precio = 100 * cantidad; // Establecemos que el precio de cada zapato es de 100$ y lo multiplicamos por la cantidad de zapatos que el usuario desea comprar

    if(cantidad>=0 && cantidad <10){ // Creamos un bucle en el cual si se ingresa una cantidad de 0 a 9 no se aplicará descuento
            printf("No aplica descuento");
            }else{

    if(cantidad>=10 && cantidad<20){ // Si el usuario compra 10 zapatos o más, pero menos de 20, se le aplica 10% de descuento
            int descuento = 10;
            printf("Total a pagar sin descuento: %d$\n",precio);
            precioFinal = (precio - (descuento * precio ) / 100); // Regla de 3 simples para calcular el descuento


            printf("Su total a pagar con descuento es de:%d$\n\n",precioFinal);

    }
    if(cantidad>=20 && cantidad <30){ // Si el usuario compra 20 zapatos o más, pero menos de 30, se le aplica 20% de descuento
            int descuento = 20;
            printf("Total a pagar sin descuento: %d$\n",precio);
            precioFinal = (precio - (descuento * precio ) / 100); // Regla de 3 simples para calcular el descuento


            printf("Su total a pagar con descuento es de:%d$",precioFinal);

    }
    if(cantidad>=30){ // Si el usuario compra 30 zapatos o más, se le aplica 40% de descuento
            int descuento = 40;
            printf("Total a pagar sin descuento: %d$\n",precio);
            precioFinal = (precio - (descuento * precio ) / 100); // Regla de 3 simples para calcular el descuento


            printf("Su total a pagar con descuento es de:%d$",precioFinal);
    }



          }




    return 0;
}
