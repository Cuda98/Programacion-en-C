#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//EJ 1
void imprimirPiramide(int tamanio, char caracter);
//FIN EJ 1

//EJ 2
void cargarMatriz(int matriz[2][3]);
void mostrarMatriz(int matriz[2][3]);
void calcularTotalEmpresas(int matriz[2][3], int totalEmpresas[2]);
void calcularTotalBimestre(int matriz[2][3], int totalBimestre[3]);
void mostrarTotalEmpresas(int totalEmpresas[2]);
void mostrarTotalBimestre(int totalBimestre[3]);
int maximoMatriz(int matriz[2][3]);
//FIN EJ 2

//EJ 3
struct Libro
{
    int anio;
    char nombre[40];
    int precio;
};

void cargarLibro(struct Libro lib[], int tam);
void mostrarLibro(struct Libro lib[], int tam);
void ordenarPorAnio(struct Libro lib[],int tam);

int main()
{
    printf("----EJERCICIO 1----\n");
    imprimirPiramide(10, 'c');
    printf("\n\n");

    printf("----EJERCICIO 2----\n");
    int m[2][3];
    int tEmpresas[2];
    int tBimestre[3];

    cargarMatriz(m);
    mostrarMatriz(m);
    calcularTotalEmpresas(m,tEmpresas);
    calcularTotalBimestre(m,tBimestre);
    mostrarTotalEmpresas(tEmpresas);
    mostrarTotalBimestre(tBimestre);
    printf("\nEl maximo es: %d",maximoMatriz(m));

    printf("\n\n----EJERCICIO 3----\n");

    int size = 3;
    struct Libro libros[size];

    cargarLibro(libros, size);
    mostrarLibro(libros, size);

    ordenarPorAnio(libros, size);
    printf("\n\n Ordenados por anio: \n");
    mostrarLibro(libros, size);

    ordenarPorNombre(libros,size);
    printf("\n\n Ordenados por nombre: \n");
    mostrarLibro(libros, size);




    return 0;
}

//EJ 1

void imprimirPiramide(int tamanio, char caracter)
{
    int i,j;

    for(i = 1; i <= tamanio; i++)
    {
        for(j = 0; j<tamanio-i; j++)
        {
            printf(" ");
        }

        for(j=0; j<2*i-1; j++)
        {
            printf("%c",caracter);
        }
        printf("\n");
    }
}

//FIN EJ 1

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

void calcularTotalEmpresas(int matriz[2][3], int totalEmpresas[2])
{
    int suma = 0;

    for(int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            suma= suma + matriz[i][j];
        }
        totalEmpresas[i] = suma;
        suma = 0;
    }
}

void calcularTotalBimestre(int matriz[2][3], int totalBimestre[3])
{
    int suma = 0;
    for(int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 2; i++)
        {
            suma = suma + matriz[i][j];
        }
        totalBimestre[j] = suma;
        suma = 0;
    }

}

void mostrarTotalEmpresas(int totalEmpresas[2])
{
    for(int i = 0; i < 2; i ++)
    {
        printf("Total anual por empresa: %d\n",totalEmpresas[i]);
    }


}

void mostrarTotalBimestre(int totalBimestre[3])
{
    int i = 0;
    for (i=0; i<3; i++)
    {
        printf("Total por bimestre: %d \n", totalBimestre[i]);
    }
}

int maximoMatriz(int matriz[2][3]){

int i, j;
int max = -9999;
    for (i = 0; i<2; i++){

        for(j=0; j<3; j++){

            if(max<matriz[i][j]){
                max = matriz[i][j];
            }
        }
    }

return max;
}


// EJ 3

//void cargarLibro(struct Libro lib[], int tam)


void mostrarLibro(struct Libro lib[], int tam) // año nombre precio
{
    int i = 0;
    for(i=0; i<tam; i++)
    {
        printf("El año del libro %d es: %d\n",i,lib[i].anio);
        printf("El nombre del libro %d es: %s\n",i,lib[i].nombre);
        printf("El precio del libro %d es: %d\n",i,lib[i].precio);
        printf("\n\n");
    }
}

void cargarLibro(struct Libro lib[], int tam)
{
    char aux[40] = " ";
    for(int i = 0; i< tam; i++)
    {
        printf("Ingrese el anio del libro %d: ",i);
        scanf("%d",&lib[i].anio);
        printf("Ingrese el nombre del libro %d: ",i);
        fflush(stdin);
        gets(aux);
        strcpy(lib[i].nombre, aux);
        printf("Ingrese el precio del libro %d: ",i);
        scanf("%d",&lib[i].precio);
    }
}

void ordenarPorAnio(struct Libro lib[],int tam)
{
    struct Libro aux; // Para ordenar estructuras, no tenemos que contener un numero en aux
                        // Ahora vamos a contener una estructura para poder ordenarlas
    int x,y;


    for(x = 0; x < tam; x++)
    {
        for(y = 0; y < tam-1; y++)
        {
            if(lib[y].anio > lib[y+1].anio) // si edad en la posición y es mayor a edad a su derecha
            {
                aux=lib[y];
                lib[y] = lib[y+1];
                lib[y+1] = aux; // swap
            }
        }
    }
}

void ordenarPorNombre(struct Libro lib[], int tam)
{
    int x, y;
    struct Libro aux;

    for(x = 0; x< tam; x++)
    {
        for(y = 0; y< tam - 1; y++)
        {
            if(strcmp(lib[y].nombre, lib[y+1].nombre) == 1 )
            {
                aux = lib[y];
                lib[y] = lib[y+1];
                lib[y+1] = aux;
            }
        }
    }

}


