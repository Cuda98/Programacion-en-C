#ifndef PROFESOR_H_INCLUDED
#define PROFESOR_H_INCLUDED

struct ProfesorE;

typedef struct ProfesorE * Profesor;

Profesor cargarProfesor();

void mostrarProfesor(Profesor p);

char * getNombreProfesor(Profesor p);
int  getAntiguedadProfesor(Profesor p);
int  getSueldo(Profesor p);

void setNombreProfesor(Profesor p, char nombreN[]);
void setAntiguedadProfesor(Profesor p, int antiguedadN);
void setSueldo(Profesor p, int sueldoN);




#endif // PROFESOR_H_INCLUDED
