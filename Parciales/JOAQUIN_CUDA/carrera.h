#ifndef CARRERA_H_INCLUDED
#define CARRERA_H_INCLUDED

struct CarreraE; // Definimos una estructura
typedef struct CarreraE * Carrera; // Definimos un tipo de dato

//CONSTRUCTOR
Carrera crearCarrera();
void agregarMateria(Carrera c, Materia m);


//DESTRUCTOR
void eliminarMateria(Carrera c,Materia m);
void eliminarCarrera(Carrera c);


//GETTERS
char *getNombre(Carrera c);
int getDuracion(Carrera c);


//SETTERS
void setNombre(Carrera c ,char nuevoNombre[40]);
void setDuracion(Carrera c, int nuevaDuracion);


//toString
void mostrarCarrera(Carrera c);
//SUMATORIA DE LA CANTIDAD DE ALUMNOS DE UNA CARRERA
int cantidadDeAlumnos(Carrera c);
// ORDENAMIENTO POR BUBBLE SORT DE UNA CARRERA
void ordenarMateriasPorTitular(Carrera c);



#endif // CARRERA_H_INCLUDED


// Te debo los pre y post
