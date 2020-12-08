#ifndef FRACCION_H_INCLUDED
#define FRACCION_H_INCLUDED

struct FraccionStruct;

typedef struct FraccionStruct * Fraccion;
//CONSTRUCTOR
Fraccion crearFraccion(float n, float d);
Fraccion crearFraccionPorTeclado();
//DESTRUCTOR
void destruirFraccion(Fraccion f);
//MOSTRAR
void mostrarFraccion(Fraccion f);

//GETTER
int getNumerador(Fraccion f);
int getDenominador(Fraccion f);
//SETTER
void setNumerador(Fraccion f, float nuevoNumerador);
void setDenominador(Fraccion f, float nuevoDenominador);

// SUMAR
Fraccion calcularSuma(Fraccion f, Fraccion f2);

//RELACIONAR
int relacionar(Fraccion f, Fraccion f2);

//MCM PARA SIMPLIFICAR
int maximoComunDenominador(int mayor, int menor);
Fraccion simplificar(Fraccion f);


#endif // FRACCION_H_INCLUDED
