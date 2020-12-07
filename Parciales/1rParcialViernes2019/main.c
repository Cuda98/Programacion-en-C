#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//EJ 2
void cargarMatriz(int matriz[2][3]); // DONE

void mostrarMatriz(int matriz[2][3]); // DONE

void calcularPromKioscos(int matriz[2][3], float promKioscos[2]); // DONE

void calcularPromMes(int matriz[2][3], float promMes[3]); // DONE

void mostrarPromKioscos(float promKioscos[2]); // DONE

void mostrarPromMes(float promMes[3]); // DONE

int maximoMatriz(int matriz[2][3]); // DONE
//2 kioscos, 3 meses
//EJ 2 FIN

//////////////////////////////////////////////////////////////////////////////////////////////

//EJ 3
struct Usuario
{
    int dni;
    char nombre[20];
    char contrasenia[20];
};

void cargarUsuarios(struct Usuario usuarios[], int tam);
void mostrarUsuarios(struct Usuario usuarios[], int tam);
void ordenarUsuarios(struct Usuario usuarios[], int tam);
int cantidadUsuariosIncorrectos(struct Usuario usuarios[], int tam);
//EJ 3



/////////////////////////////////////////////////////////// EJ 1, DIBUJAR
void imprimirTriangulo(int tamanio, char caracter);


int main()
{


    printf("\n----EJERCICIO 2----\n"); // EJ 2
    //Cargar matriz y mostrarla
    int m[2][3];
    cargarMatriz(m);
    mostrarMatriz(m);
    //Calcular promedios por kiosco y mes
    float promK[2];
    float promM[3];
    calcularPromKioscos(m,promK);
    calcularPromMes(m,promM);

    //mostrar promedios
    printf("\n----PROMEDIOS POR MES Y KIOSKO----\n");
    mostrarPromKioscos(promK);
    mostrarPromMes(promM);
    //maximo matriz
    printf("\n----NUMERO MAXIMO EN LA MATRIZ----\n");
    printf("El numero maximo en la matriz es: %d\n",maximoMatriz(m));

    printf("\n----EJERCICIO 2----\n"); // EJ 3

    int cantidad = 3;
    struct Usuario usuarios[cantidad];

    cargarUsuarios(usuarios, cantidad);
    mostrarUsuarios(usuarios, cantidad);
    printf("\nLa cantidad de contrasenias invalidas es de: %d", cantidadUsuariosIncorrectos(usuarios,cantidad));

    ////////////////////// EJ 1

    printf("\n\nEJERCICIO 1\n\n");

    imprimirTriangulo(-4, 'c');


    return 0;
}

//EJ 2

void cargarMatriz(int matriz[2][3])
{
    int i=0;
    int j=0;

    for(i = 0; i < 2; i++)
    { // Inicio de for que recorre los kioscos
        for(j = 0; j < 3; j++)
        {
            printf("--->POS[%d, %d] Ingrese el valor deseado: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
}

void mostrarMatriz(int matriz[2][3])
{
    printf("\n\nMATRIZ");
    printf("\n----------\n\n");

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
}

void calcularPromKioscos(int matriz[2][3], float promKioscos[2])
{
    float suma = 0;

    for(int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            suma = suma + matriz[i][j];
        }
        promKioscos[i]=suma/3;
        suma = 0; // Reiniciar suma para que no acumule.
    }
}

void calcularPromMes(int matriz[2][3], float promMes[3])
{
    float suma = 0;
    int j = 0;
    int i = 0;

    for(int j = 0; j < 3; j++)
    {
        for(int i = 0; i < 2; i++)
        {
            suma = suma + matriz[i][j];
        }
        promMes[j] = suma/2;
        suma = 0; // Reiniciar suma para que no acumule.
    }
}

void mostrarPromKioscos(float promKioscos[2])
{
    for(int i = 0; i < 2; i ++)
    {
        printf("Promedio del kiosko %d = %.2f\n",i,promKioscos[i]);
    }
}

void mostrarPromMes(float promMes[3]){

int i = 0;
    for (i=0; i<3; i++){

        printf("Prom del mes : %d es: %f\n", i, promMes[i]);
    }
}

int maximoMatriz(int matriz[2][3])
{
    int i = 0;
    int j = 0;
    int max = -9999;

    for(i = 0; i< 2; i++)
    {
        for(j = 0; j< 3; j++)
        {
            if(matriz[i][j] > max)
            {
                max = matriz[i][j];
            }
        }
    }
    return max;
}

///////////////////////////////////////////////////////////////////////////// EJ 2


void cargarUsuarios(struct Usuario usuarios[], int tam)
{
    int i = 0;
    char nombreAux[20];
    char contraseniaAux[20];

    for ( i = 0; i < tam; i++)
    {
        printf("Ingrese el DNI del usuario %d: ",i);
        scanf("%d",&usuarios[i].dni);

        printf("Ingrese el nombre del usuario %d: ",i);
        fflush(stdin);
        gets(nombreAux);
        strcpy(usuarios[i].nombre, nombreAux);

        printf("Ingrese la contrasenia del usuario %d: ",i);
        fflush(stdin);
        gets(contraseniaAux);
        strcpy(usuarios[i].contrasenia, contraseniaAux);
        }
}

void mostrarUsuarios(struct Usuario usuarios[], int tam)
{
    int i = 0;
    printf("\n\nUSUARIOS:\n");
    for(i = 0; i < tam; i++)
    {
        printf("DNI ==> %d --- NOMBRE ==> %s --- CONTRASENIA ==> %s\n",usuarios[i].dni,usuarios[i].nombre,usuarios[i].contrasenia);
    }

}

int cantidadUsuariosIncorrectos(struct Usuario usuarios[], int tam)
{
    int cant = 0;
    int userMal = 0;
    int i = 0;
    int j = 0;

    for(i = 0; i<tam; i++)
    {
        for(j = 0; j<20 ; j++) // tamaño de pw
        {
            if(usuarios[i].contrasenia[j] == 'a' || usuarios[i].contrasenia[j] =='e' || usuarios[i].contrasenia[j] =='i' || usuarios[i].contrasenia[j] =='o' || usuarios[i].contrasenia[j] =='u')
            {
                cant ++;
            }
        }

        if(cant>2)
        {
            userMal ++;
        }
        cant = 0;

    }

    return userMal;
}

////////////// EJ 1

void imprimirTriangulo(int tamanio, char caracter)
{
    if(tamanio == 0)
    {
        printf("No podes hacer una forma de tamanio 0....\n");
    }

    if(tamanio > 0)
    {
        for(int i = 0; i <= tamanio; i++)
        {
            for(int j = 0; j < tamanio-i; j++)
            {
                printf("%c",caracter);
            }
            printf("\n");
        }

    }

    if(tamanio < 0)
    {
        for(int i = 0; i <=tamanio*(-1); i++) // Convertimos el tamaño negativo a un numero positivo
        {
            for(int j = 0; j <i; j++)
            {
                printf("%c",caracter);
            }
            printf("\n");
        }

    }
}
