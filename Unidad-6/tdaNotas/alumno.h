#ifndef ALUMNOS_H_INCLUDED
#define ALUMNOS_H_INCLUDED

typedef struct EstructuraAlumno * Alumno;

Alumno cargarAlumnoporteclado();//<<<<< Constructor x teclado

void mostrarAlumno(Alumno n);//<<<<< Muestro

/*Gets*/
char* getNombre(Alumno n);
int getDni   (Alumno n);
int getnota1 (Alumno n);
int getnota2 (Alumno n);
int getNota3 (Alumno n);
float promedioFinal(Alumno n);


//Sets
void setNombre(Alumno n, char nombreNUE[20]);
void setDni   (Alumno n, int dniN);
void setnota1 (Alumno n, int notaMod1);
void setnota2 (Alumno n,int notaMod2);
void setNota3 (Alumno n,int notaMod3);


void destruirAlumno(Alumno n);//<<<<<<< Destructor

#endif // ALUMNOS_H_INCLUDED
