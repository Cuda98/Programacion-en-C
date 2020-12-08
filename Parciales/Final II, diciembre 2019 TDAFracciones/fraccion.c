#include <stdio.h>
#include <stdlib.h>
#include "fraccion.h"

struct FraccionStruct
{
    float numerador;
    float denominador;
    float valorEnDecimal;
};


//CONSTRUCTOR
Fraccion crearFraccion(float n, float d)
{
    Fraccion f = malloc(sizeof(struct FraccionStruct));

    f->numerador = n;
    f->denominador = d;

    f->valorEnDecimal = n / d;

    return f;
}


Fraccion crearFraccionPorTeclado()
{
    Fraccion f = malloc(sizeof(struct FraccionStruct));

    printf("Ingrese el numerador: ");
    scanf("%f",&f->numerador);
    printf("Ingrese el denominador: ");
    scanf("%f",&f->denominador);

    f->valorEnDecimal = ((f->numerador) / (f->denominador));


    return f;
}


//DESTRUCTOR
void destruirFraccion(Fraccion f);


//MOSTRAR
void mostrarFraccion(Fraccion f)
{
    printf("NUMERADOR: %.2f\n",f->numerador);
    printf("DENOMINADOR: %.2f\n",f->denominador);
    printf("VALOR EN DECIMAL: %.2f\n",f->valorEnDecimal);
}

// SUMAR

Fraccion calcularSuma(Fraccion f, Fraccion f2)
{
    int numerador = f->numerador * f2->denominador + f->denominador * f2->numerador;
    int denominador = f->denominador * f2->denominador;
    return crearFraccion(numerador, denominador);
}

int relacionar(Fraccion f, Fraccion f2)
{
    return f->numerador * f2->denominador > f->denominador * f2->numerador;
}

int maximoComunDenominador(int mayor, int menor) {
    if (menor == 0) {
        return mayor;
    }
    if (menor > mayor) {
        return maximoComunDenominador(menor, mayor);
    }
    int resto = mayor % menor;
    return maximoComunDenominador(menor, resto);
}

Fraccion simplificar(Fraccion f) {
    int mcd = maximoComunDenominador(f->numerador, f->denominador);
    int numerador = f->numerador / mcd;
    int denominador = f->denominador / mcd;
    return crearFraccion(numerador, denominador);
}



/*
Fraccion restar(Fraccion x, Fraccion y) {
    int numerador = x->numerador * y->denominador - x->denominador * y->numerador;
    int denominador = x->denominador * y->denominador;
    return crear(numerador, denominador);
}

Fraccion multiplicar(Fraccion x, Fraccion y) {
    int numerador = x->numerador * y->numerador;
    int denominador = x->denominador * y->denominador;
    return crear(numerador, denominador);
}

Fraccion dividir(Fraccion x, Fraccion y) {
    int numerador = x->numerador * y->denominador;
    int denominador = x->denominador * y->numerador;
    return crear(numerador, denominador);
}

*/







