#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

//Axiomas
struct estructura {

    char nombre[20];
    int dias;
    float sueldoDiario;
    float sueldoTotal;
};

typedef struct estructura * Empleado;


//pre y post condicoones
Empleado crearEmpleado();
void destruirEmpleado(Empleado e);
void mostrar(Empleado e);

char *getNombre(Empleado e);
int getDias(Empleado e);
float getSueldoDiario(Empleado e);
float getSueldoTotal(Empleado e);

void setNombre(Empleado e, char nuevo[20]);
void setDias(Empleado e, int nuevo);
void setSueldoDiario(Empleado e, float nuevo);
//void setSueldoTotal(......); Este no se hace porque es una variable autocalculable




#endif // EMPLEADO_H_INCLUDED
