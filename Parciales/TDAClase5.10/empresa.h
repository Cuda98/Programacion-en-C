#ifndef EMPRESA_H_INCLUDED
#define EMPRESA_H_INCLUDED

struct EmpresaE;

typedef struct EmpresaE * Empresa;

Empresa cargarEmpresa(char nE[40]);

void mostrarEmpresa(Empresa e);



#endif // EMPRESA_H_INCLUDED
