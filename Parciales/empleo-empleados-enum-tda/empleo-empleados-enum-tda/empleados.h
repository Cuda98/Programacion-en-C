#ifndef EMPLEADOS_H_INCLUDED
#define EMPLEADOS_H_INCLUDED
//DECLARO
struct empleadoE;
typedef struct empleadoE * empleado;
//LLENO
empleado crearEmpleado(char nombre[]);
empleado crearEmpleadoPorTeclado();
//GET
char* getNombreEmpleado(empleado e);
//SETT
void setNombreEmpleado(empleado e,char nombre[]);
//MUESTRO
void mostrarEmpleado(empleado e);

#endif // EMPLEADOS_H_INCLUDED
