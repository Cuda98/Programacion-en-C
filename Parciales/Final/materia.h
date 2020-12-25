#ifndef MATERIA_H_INCLUDED
#define MATERIA_H_INCLUDED

struct MateriaE;

typedef struct MateriaE * Materia;

Materia crearMateria();

void mostrarMateria(Materia m);

char * getNombreMateria(Materia m);
int getCantInscriptos(Materia m);

void setNombreMateria(Materia m, char nombreMat[]);
void setCantInscriptos(Materia m, int CantidadInsc);










#endif // MATERIA_H_INCLUDED
