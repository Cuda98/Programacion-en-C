#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "persona.h"

struct PersonaE
{
    char nombre[40];
    float altura;
    float peso;
    float imc;
};



//CONSTRUCTOR
Persona cargarPersonaPorTeclado()
{
    Persona p = malloc(sizeof(struct PersonaE));
    char aux[40];
    printf("Ingrese el nombre: ");
    fflush(stdin);
    gets(aux);
    strcpy(p->nombre, aux);

    printf("Ingrese la altura: ");
    scanf("%f",&p->altura);

    printf("Ingrese el peso: ");
    scanf("%f",&p->peso);

    p->imc = ((p->peso) / ((p->altura) * (p->peso))     );


    return p;
}
Persona cargarPersona(float a, float pe, char n[40])
{
    Persona p = malloc(sizeof(struct PersonaE));

    p->altura = a;
    p->peso = pe;
    strcpy(p->nombre, n);

    p->imc = ((pe) / ((a) * (a)));

    return p;
}


//MOSTAR
void mostrarPersona(Persona p)
{
    printf("\n--------PERSONA---------\n");
    printf("--->NOMBRE: %s\n", p->nombre);
    printf("--->PESO: %.2f\n", p->peso);
    printf("--->ALTURA: %.2f\n", p->altura);
    printf("--->IMC: %.2f\n",p->imc);
}

//DESTRUCTOR


//GET


//SET


