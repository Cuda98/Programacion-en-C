#include <stdio.h>
#include <stdlib.h>

    //Realizar una funci�n que nos diga cuantos segundos pasaron en un determinado d�a,  dada  la  hora  de  ese  d�a,  la  funci�n  debe  ser: int  calcularSegundos  (int hora, int minutos, int segundos)

int main()
{
    int hs;
    int min;
    int segs;

    printf("Ingrese la hora exacta para saber cuantos segundos transcurrieron en el dia: \n");
    scanf("%d",&hs);
    printf("Ingrese los minutos exactos para saber cuantos segundos transcurrieron en el dia: \n");
    scanf("%d",&min);
    printf("Ingrese los segundos exactos para saber cuantos segundos transcurrieron en el dia: \n");
    scanf("%d",&segs);
    printf("\n\nTranscurrieron %d segundos en el dia\n\n",calcularSegundos(hs,min,segs)); // Imprimimos el valor del resultado de la funci�n
    system("PAUSE");


    return 0;
}

int calcularSegundos(int hora, int minutos, int segundos) // Se le van a pasar como par�metro 3 enteros
{
    hora = hora * 3600; // La hora va a ser igual a la cantidad de horas * los segundos que tiene una hora
    minutos = minutos * 60; // Misma regla ac�
    segundos = segundos * 1;


    int totalSegundos = (hora + minutos + segundos); // Definimos una variable la cual va a sumar las 3 variables recibidas con sus respectivas multiplicaciones


    return totalSegundos; // Devolvemos el valor almacenado de la variable totalSegundos
}
