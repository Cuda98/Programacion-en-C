#include  <stdio.h>

int main()
{
    int num=1, suma=0; // Declaramos variables
    printf("\nIngresa el primer numero: ");
    scanf(" %d", &num);
    suma=suma+num;

    while ((num>0)&&(suma<1500)) // Mientras que num sea mayor que 0 y suma menor a 1500, entra al bucle
    {

        printf("\nIngresa otro: ");
        scanf(" %d", &num);
        suma=num+suma; // suma

        if(suma>1500) // Si la suma es mayor a 1500, devuelve que se excede y corta el programa
            {
            printf("\nExcediste la suma\n");
            return 0;
            }else if(num<1){  // segundo if, si numero es menor a 1, va a cortar el programa imprimiendo el porque del error
             printf("\nEl numero no es positivo rey\n");
             return 0;}



    printf("\n La suma vale: %i", suma); // Impresion de la suma de los numeros
    }

    printf("\nNumero incorrecto BOBO\n"); // Si no cumple la condicion del while (num>0)


    return 0;
}

/*

// Crear un programa que pida números positivos al usuario y vaya calculando la suma de todos ellos, se terminará cuando la suma supere >1500 o se teclee un número negativo
#include  <stdio.h>

int main()
{
    int n1,n2,aux,suma;

    printf("Ingresa un numero positivo: ");
    scanf("%i",&n1);
    aux=aux+n2;

while ((n1>0)&&(n1<1500)){

        printf("\nEscribi otro numero pa: ");
        scanf("%d",&n2);
        suma=n1+n2;

        if(n1=0)

        if(suma>1500)
            {
            printf("\nExcediste la suma");
            return 0;
            }   //Si la suma de los numeros supera 1500, el programa corta. Si la suma es menor a 1500 va a seguir.

        printf("\nLa suma es: %d\n",suma); // Me suma n1 + n2, pero no va a acumulando

}

printf("\nNumero incorrecto\n");

    return 0;
}

*/

