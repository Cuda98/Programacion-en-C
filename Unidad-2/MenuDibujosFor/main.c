#include <stdio.h>
#include <stdlib.h>

// Crear un menú en el cual dependiendo la opción que se ingresa se dibujará una forma distinta con un for

void menu();
void escalera();
void escaleraInversa();
void escaleraInversaConEspacios();

int main()
{
    menu();

    return 0;
}

void menu()
{
    int opc;
    printf("Bienvenido a un menu basico. \nDigite 1 para realizar una escalera. \nDigite 2 para realizar una escalera inversa.\nDigite 3 para realizar una Escalera inversa con espacios.\n");
    scanf("%d",&opc);
    switch(opc)
    {
        case 1: escalera();
            break;
        case 2: escaleraInversa();
            break;
        case 3: escaleraInversaConEspacios();
            break;
    }
}

void escalera()
{
    int renglones=0;

    printf("Ingrese la cantidad de renglones: ");
    scanf("%d",&renglones);


    for(int i=0; i<renglones; i++) // i = renglones
    {
        for(int j=0; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void escaleraInversa()
{
    int renglones;
    char caracter;

    printf("Ingrese la cantidad de renglones: ");
    scanf("%d",&renglones);

    for(int i=0; i<renglones; i++)
    {
        for(int j=i; j<renglones; j++)
        {
            printf("+");
        }
        printf("\n");
    }
}

void escaleraInversaConEspacios()
{
    int renglones = 0;
    printf("Digite la cantidad de renglones: ");
    scanf("%d",&renglones);

    for(int i=renglones; i>0; i--)
    {
        for(int j=0; j<i; j++)
        {
            printf(" ");
        }
        printf("*\n");
    }
}


