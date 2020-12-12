#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alumno.h"

struct EstructuraAlumno{

   char nombre[20];
   int  dni;
   float nota1, nota2, nota3;
   float promedioFinal;//<<<<calculable entre las 3 notas

};
Alumno cargarAlumnoporteclado(){

    Alumno n = malloc(sizeof(struct EstructuraAlumno));

    char auxN[20] = " ";

    printf("Nombre dsadasdel Alumno=");
    fflush(stdin);
    gets (auxN);
    strcpy (n->nombre, auxN);

    printf("DNI =");
    scanf("%d",&n->dni);

    printf("Ingrese las notas 3 notas del Alumno = ");
    scanf("%f",&n->nota1);
    scanf("%f",&n->nota2);
    scanf("%f",&n->nota3);

    n->promedioFinal = ((n->nota1)+(n->nota2)+(n->nota3))/3;

    return n;
}

void mostrarAlumno(Alumno n){
    printf("---- Notas de los alumno ----\n");
        printf("Alumno ---- %s  ",n->nombre);
        printf("DNI =%d ",n->dni);
        printf("Notas ---- = %.2f, %.2f, %.2f\n",n->nota1 ,n->nota2, n->nota3);
        printf("\n");
        printf("El promedio del alumno es %.2f\n",n->promedioFinal);


}
