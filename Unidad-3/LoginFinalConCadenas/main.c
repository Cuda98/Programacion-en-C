#include <stdio.h>
#include <stdlib.h>
/*
Crear  un  Login.

Si el usuario supera 3 intentos, se terminará el programa
Si el usuario ingresa un 0, se termina el programa
*/


int main()
{
    char userValido[] = "Joaquin";
    char pwValida[] = "chocotorta123"; // Contraseña válida para salir del bucle

    char user[20];
    char pw[20]; // Se inicializa la pw para que no acarree basura

    int intento=0;
    int ingreso=0;


    printf("\t\nBienvenido al sistema de MercadoLibre, a continuacion ingrese sus datos (0 para salir del sistema)\n\n");


    do
    {
        system("cls");
        printf("\n\t\t\tINICIO DE SESION\n");
        printf("\n\t\t\t----------------\n\n");
        printf("Tipee un 0 en su codigo para salir del programa\n\n");
        printf("Ingrese su nombre de usuario: ");
        gets(user);
        printf("Ingrese su codigo de acceso: ");    // Primera parte, se piden datos.
        gets(pw);

        if(strcmp(pw, "0") == 0) // Si se tipea 0, se cierra el programa
            {
                printf("\t\nCERRANDO PROGRAMA\n\n");
                system("PAUSE");
                exit(-1);
            }

        else if(strcmp(user, userValido) == 0 && strcmp(pw, pwValida) == 0)
        {
            ingreso = 1; // Se habilita el ingreso del usuario
        }
        else
        {
            printf("\nDatos incorrectos\n\n");
            intento++;
            system("pause");

        }


    }while(ingreso == 0 && intento < 3); // Este bucle se va a repetir hasta que pw sea distinto a 123, una vez que sea igual, dará el cartel de login exitoso
        if(ingreso == 1)
        {
        printf("\n\n\t***LOGIN EXITOSO***\n");
        printf("\n\nBienvenido %s\n\n",userValido);
        system("PAUSE");
        }
        else
        {
            printf("\nExcedio el limite de intentos\n\n");
            exit(-1); // Es necesario usar el -1 para dar por finalizado el programa y que no siga ejecutando las linas de abajo
        }




printf("\nAhora puede seguir interactuando con el sistema, disfrute su estadia\n\n");



    return 0;
}
