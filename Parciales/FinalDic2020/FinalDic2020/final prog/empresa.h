#ifndef EMPRESA_H_INCLUDED
#define EMPRESA_H_INCLUDED

struct empresaE;
typedef struct empresaE * empresa;
//CONTRUCTOR
empresa crearEmpresa(char direccion[40],int telefono,char rubro[30]);
//DESTRUCTOR
void borrarEmpresa(empresa e);
//GET
char* getDireccion(empresa e);
char* getRubro(empresa e);
int getTelefono(empresa e);
//ABM
void agregarEmpleado(empresa e,char nombre[30],char apellido[30],int edad);
void modificarEmpleado(empresa e,char nombre[30]);
void eliminarEmpleado(empresa e,char nombre[30]);
//IMPRIMIR
void mostrarEmpresa(empresa e);

#endif // EMPRESA_H_INCLUDED
