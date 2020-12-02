#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
//PRE:
//POST:
void mostrarVectorAleatorio(int v[], int tam);
//PRE:
//POST:
void cargarVectorAleatorio(int v[], int tam);
int posMin(int v[], int tam);
void sumaVectores(int v[], int v2[], int v3[], int tam);
void mostrarVector(int v[], int tam);
void bubbleSort(int v[], int tam);
void selectionSort(int v[], int tam);
void insertionSort(int v[], int tam);
//PRE: Tener un vector cargado, defino el dato a buscar
//POST: Devuelve la posición del valor buscado, en caso de no encontrarlo, devuelve un -1
int buscarEnVector(int v[], int tam, int busco);
//PRE: Tener un vector cargado y ordenado
//POST: Devuelve la posición del valor buscado
int busquedaBinaria(int v[], int tam, int num);


#endif // FUNCIONES_H_INCLUDED
