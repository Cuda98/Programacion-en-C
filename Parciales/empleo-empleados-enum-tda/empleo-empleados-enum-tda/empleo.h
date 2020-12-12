#ifndef EMPLEO_H_INCLUDED
#define EMPLEO_H_INCLUDED
#include "empleados.h"
//DECLARO
struct empleoE;
typedef struct empleoE * empleo;
//LLENO
empleo crearEmpleo(char nombre[],char telefono[],char direccion[]);
empleo crearEmpleoPorTeclado();
//GET
char * getNombreEmpleo(empleo e);
char * getTelefonoEmpleo(empleo e);
char * getDireccionEmpleo(empleo e);
empleo * getEmpleadosEmpleo(empleo e);
//SETT
void setNombreEmpleo(empleo e,char nombre[]);
void setTelefonoEmpleo(empleo e,char telefono[]);
void setDireccionEmpleo(empleo e,char direccion[]);
void setEmpleado(empleo e,empleado emp);
//MUESTRO
void mostrarEmpleo(empleo e);

#endif // EMPLEO_H_INCLUDED
