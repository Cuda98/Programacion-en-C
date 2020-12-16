#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

struct empleadoE;
typedef struct empleadoE * empleado;
//CONSTRUCTOR
empleado crearEmpleado();
void cargarEmpleado(empleado e,char nombre[30],char apellido[30],int edad);
//DESTRUCTOR
void borrarEmpleado(empleado e);
//GETS
char* getNombre(empleado e);
char* getApellido(empleado e);
int getEdad(empleado e);
int getSueldo(empleado e);
//SETS
void setNombre(empleado e,char nNombre[30]);
void setApellido(empleado e,char nApellido[30]);
void setEdad(empleado e,int nEdad);
//IMPRIMIR
void mostrarEmpleado(empleado e);

void copiarEmpleados(empleado e1,empleado e2);

#endif // EMPLEADO_H_INCLUDED
