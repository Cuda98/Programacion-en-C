#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

struct PersonaEstructura;

typedef struct PersonaEstructura * Persona; // De ahora en más, la estructura no va a tener el nombre "interesante", vamos a crear un puntero que apunte a la estructura
                                   // y el nombre del puntero, si va a ser el nombre "interesante", ya que no vamos a llamar más a las estructuras con el Struct

//Persona pasa a ser una variable

void mostrarPersona(Persona p);

//--------CONSTRUCTOR--------
Persona cargarPersonaPorTeclado(); // Esta carga por teclado
Persona crearPersonaPorParametro(int d, char n[]); // Esta es por parámetros
//--------DESTRUCTOR--------
void destruirPersona(Persona p);

//--------GETTERS--------
//Permiten acceder a datos encapsulados
int getDni(Persona p);
char *getNombre(Persona p);

//--------SETTERS---------
//Permiten modificar datos de la estructura
void setDni(Persona p, int nuevoDni);
void setNombre(Persona p, char nuevoNombre[40]);


#endif // PERSONA_H_INCLUDED
