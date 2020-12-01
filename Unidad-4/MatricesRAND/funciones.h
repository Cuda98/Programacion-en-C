#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#define RENGLONES 3

void cargarMatrizAleatoria(float m[][RENGLONES], int col);
void mostrarMatrizAleatoria(float m[][RENGLONES], int col);
void vectorSumarRenglones(float suma[], int col, float m[][RENGLONES]); // Requiere la matriz para almacenar la suma en vectores
void mostrarSumaRenglones(float suma[], int col);



#endif // FUNCIONES_H_INCLUDED
