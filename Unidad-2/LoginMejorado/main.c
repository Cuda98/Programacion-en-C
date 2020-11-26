#include <stdio.h>
#include <stdlib.h>
/*
Crear  un  programa  que  pida  al  usuario  su  contraseña  (numérica).
Deberá terminar  cuando  introduzca  como  contraseña  el  número  123,  pero  volvérsela  a  pedir tantas veces como sea necesario
Si el usuario supera 3 intentos, se terminará el programa
Si el usuario ingresa un 0, se termina el programa
*/
int main()
{
    int pw=0; // Se inicializa la pw para que no acarree basura
    int pwValida=123; // Contraseña válida para salir del bucle
    char nombre[20];
    char apellido[20];
    int intento=3; // Se inicializa en 3 intentos para irlos decrementando y avisandole al usuario

    printf("\t\nBienvenido a la VPN de MercadoLibre, a continuacion ingrese sus datos (0 para salir del sistema)\n\n");
    printf("Ingrese su nombre: ");
    gets(nombre);
    fflush(stdin);
    printf("Ingrese su apellido: ");
    gets(apellido);

    do
    {
        printf("Ingrese su contraseña: ");
        scanf("%d",&pw);

        if(pw == 0) // Si se tipea 0, se cierra el programa
            {
                printf("\t\nCERRANDO PROGRAMA\n\n");
                system("PAUSE");
                exit(-1);
            }

            if(pw != pwValida) // Si la pw ingresada es distinta a 123, se resta un intento al usuario
            {
                intento--;
                printf("\nContraseña incorrecta,(Numero de intentos restantes: %d) \n\n",intento);
            }

            if(intento==0) // Si el numero de intentos llega a 0, se cierra el programa.
            {
                printf("Usted excedio el numero de intentos, se cerrara el programa\n\n");
                system("PAUSE");
                exit(-1); // Acá podría usarse un return 0;
            }





    }while(pw != pwValida); // Este bucle se va a repetir hasta que pw sea distinto a 123, una vez que sea igual, dará el cartel de login exitoso


    printf("\n\n\t***LOGIN EXITOSO***\n");
    printf("\n\nBienvenido %s %s\n\n",nombre,apellido);
    system("PAUSE");

    return 0;
}







