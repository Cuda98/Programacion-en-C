#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=5; i>0; i--) // Bucle 1
    {
        for(int j=0; j<i; j++) // Bucle 2
        {
            printf("-");
        }
    printf("+\n");
    }

return 0;
}

/*
Bucle 1, i=5
Ingresa al bucle 2, inicializa j en 0 y pregunta, "0(j) es menor que 5(i)?
Sí, entonces imprime un - y j++
Ahora j vale 1, vuelve a preguntar, "1(j) es menor que 5(i)?
Si, entonces imprime un - y j++
Ahora j vale 2, vuelve a preguntar, "2(j) es menor que 5(i)?
Si, entonces imprime un - y j++
Ahora j vale 3, vuelve a preguntar, "3(j) es menor que 5(i)?
Si, entonces imprime un - y j++
Ahora j vale 3, vuelve a preguntar, "4(j) es menor que 5(i)?
Si, entonces imprime un - y j++
Ahora j vale 5, vuelve a preguntar, "5(j) es menor que 5(i)?
NO. Entonces sale del bucle 2 e imprime la siguiente instrucción "printf("+\n"); y decrementa I (ahora i vale 4)

Repite lo mismo, pero ahora i vale 4

Ingresa de vuelta al bucle 2 pero con i valiendo 4
j(0)<i(4)? si ==> imprime un "-", j++
j(1)<i(4)? si ==> imprime un "-", j++
j(2)<i(4)? si ==> imprime un "-", j++
j(3)<i(4)? si ==> imprime un "-", j++
j(4)<i(4)? NO ==> sale del bucle 2, imprime un + \n e i--

Vuelve al bucle 2

j(0)<i(3)? ..........
............
............





*/
