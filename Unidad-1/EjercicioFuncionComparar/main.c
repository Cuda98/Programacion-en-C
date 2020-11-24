#include <stdio.h>
#include <stdlib.h>

//Se  piden dos  n�meros,  desarrollar  una  funci�n  que  compare dichos n�meros y devuelva el mayor de ellos.


int main()
{
    int a,b; // Definimos dos variables para poder calcular la edad actual

    printf("Ingrese su anio de nacimiento: \n");
    scanf("%d",&a);
    printf("Ingrese el anio actual: \n");
    scanf("%d",&b);

    system("PAUSE");

    printf("\nSu edad actual es de: %d\n",calcularEdad(a,b));

    int c;

    c = calcularEdad(a,b);

    if(c>18)  // Si la linea 20 y 22 no existen, entonces podr�a ser if(calcularEdad>18)
    {
        printf("Sos mayor\n");
    }
    else
    {
        printf("Sos menor\n");
    }

    return 0;

}


int calcularEdad (int nacimiento, int anio_actual)
{
    int edad = 0; // creamos una variable en la cual se va a alojar el resultado

    edad = anio_actual - nacimiento; // edad va a ser el resultado de parametro 1 - el parametro 2

    return edad; // la funci�n devuelve el valor almacenado en la variable edad.
}



/*                      Main con c�lculo b�sico, se procede a complejisar un como m�s el c�digo
int main()
{
    printf("Su edad es: %d",calcularEdad(1998,2020));
    return 0;
}
*/
