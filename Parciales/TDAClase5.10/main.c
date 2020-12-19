#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "persona.h"
#include "empresa.h"

int main()
{
  // Persona p1 = cargarPersonaPorTeclado();
   // mostrarPersona(p1);

    //Persona p2 = cargarPersona(1.80, 76, "Joaquin");
    //mostrarPersona(p2);
//  ARRAY DE TDA

   Empresa e1 = cargarEmpresa("UNLa");
   mostrarEmpresa(e1);



    return 0;
}
