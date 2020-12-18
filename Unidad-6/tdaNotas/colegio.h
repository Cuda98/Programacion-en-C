#ifndef COLEGIO_H_INCLUDED
#define COLEGIO_H_INCLUDED

typedef struct EstructuraColegio * Colegio;

Colegio cargarColegio(char nombre[20],int direccion);

void mostrarColegio(Colegio c);


#endif // COLEGIO_H_INCLUDED
