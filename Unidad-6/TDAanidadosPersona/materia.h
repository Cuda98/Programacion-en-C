#ifndef MATERIA_H_INCLUDED
#define MATERIA_H_INCLUDED

struct MateriaE;

typedef struct MateriaE * Materia;

Materia crearMateria(char n[40]);

void mostrarMateria(Materia m);


#endif // MATERIA_H_INCLUDED
