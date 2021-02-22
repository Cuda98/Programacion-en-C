#ifndef MATERIA_H_INCLUDED
#define MATERIA_H_INCLUDED

struct MateriaE; // Definimos la estructura

typedef struct MateriaE * Materia; // Definimos un tipo de dato que apunta a la estructura MateriaE

//CONSTRUCTOR
Materia crearMateria(int cargaHoraria, char profesor[],int cantidadInscriptos);
//DESTRUCTOR
void destruirMateria(Materia m);

//GETTER
int getcargaHoraria(Materia m);
int getcantidadInscriptos(Materia m);
char *getprofesor(Materia m);


//SETTER
void setcargaHoraria(Materia m, int nuevacargaHoraria);
void setcantidadInscriptos(Materia m, int nuevacantidadInscriptos);
void setprofesor(Materia m, char nuevoprofesor[40]);

//toString
void mostrarMateria(Materia m);

//Ordenar una Materia
void ordenar(Materia m[]);

#endif // MATERIA_H_INCLUDED


// Te debo los pre y post
