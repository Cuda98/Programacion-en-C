#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

struct PersonaE;

typedef struct PersonaE * Persona;

//CONSTRUCTOR
Persona cargarPersonaPorTeclado();
Persona cargarPersona(float a, float pe, char n[40]);


//MOSTAR
void mostrarPersona(Persona p);

//DESTRUCTOR


//GET


//SET


#endif // PERSONA_H_INCLUDED
