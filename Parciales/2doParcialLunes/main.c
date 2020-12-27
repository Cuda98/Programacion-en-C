#include <stdio.h>
#include <stdlib.h>
#include "empleado.h"

//Funciones y procedimientos ejercicio 1
int elegirOpcion();
int leerTxt();
int pedirNumero();
int pasarABinario(int n);
void guardarNumeroBinario(numeroEnBinario);
enum opcionesEjercicio1 {leer,pedir,binario,guardar,salir};

//Fucniones ejercicio 2
struct Venta{
    int anio;
    int total;
    };
void leerVentas(struct Venta ventas[100]);
void cargarAVentas(struct Venta ventas[100],int contador, char aux[100]);
void mostrarVentas(struct Venta ventas[100]);
int buscarVentas(struct Venta ventas[100], int anio);




int main()
{
    printf("\nBienvenidos al ejercicio 1\n");
    int opcion = elegirOpcion();
    int numeroATransformar = -1;
    int numeroEnBinario = 0;

    while(opcion!=salir){
      switch (opcion){
        case leer: numeroATransformar = leerTxt();opcion = elegirOpcion(); break;
        case pedir: numeroATransformar = pedirNumero();opcion = elegirOpcion();break;
        case binario: numeroEnBinario= pasarABinario(numeroATransformar);opcion = elegirOpcion(); break;
        case guardar: guardarNumeroBinario(numeroEnBinario);opcion = elegirOpcion(); break;

    }

    }
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////
    printf("\nBienvenidos al ejercicio 2\n");

    int cantidadEmpleados = 2;
    Empleado empleados[cantidadEmpleados];

    for (int i = 0 ; i<cantidadEmpleados; i++){

        empleados[i] = crearEmpleado();

    }

     for (int i = 0 ; i<cantidadEmpleados; i++){

        mostrar(empleados[i]);

    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////
    printf("\nBienvenidos al ejercicio 3\n");
    struct Venta ventas[100];//podian leer el archivo y ver cuantas habia, o poner un numero grante
    leerVentas(ventas);
    mostrarVentas(ventas);
    printf("Busco ventas del 2001 ---> Resulado %d\n", buscarVentas(ventas, 2001));
    printf("Busco ventas del 1989 ---> Resulado %d\n", buscarVentas(ventas, 1989));


    /////////////////////////////////////////////////////////////////////////////////////////////////////////////
    printf("\nBienvenidos al ejercicio 4\n");


    int * puntero1, * puntero2;
    int  vector[10];
    int i = -3;
    for (int k= 0; k<10; k++){
    vector[k] = k +2*i;}

    puntero1 = &vector[3];
    puntero2 = &vector[6];

    for (int k = 0; k<10; k++){
        if(*puntero1 < *puntero2){
        puntero1 = &vector[k];
        vector[k] = vector[k]+3;
            }}
    printf("El resultado era:\n----------- %d", *puntero1);
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////

    return 0;
}


int elegirOpcion(){

    int opcion = -9;

    while(opcion!=0&&opcion!=1&&opcion!=2&&opcion!=3&&opcion!=4){
    printf("Por favor ingrese la opcion 0-Leer txt,1-Pedir numero,2-Pasar a binario,3-Guardar Binario  o 4-Salir \n\n");
    scanf("%d",&opcion);
    }
    printf("Usted ha elegido la opcion %d \n\n", opcion);
    return opcion;
}


int leerTxt(){

    int n = 100;


    FILE *archivo;
    archivo = fopen("numero.txt", "r");
    fscanf(archivo, "%d", &n);
    fclose(archivo);
    return n;
}
int pedirNumero(){

    int n = 0;

    while(n<=0){
        printf("Por favor ingresar el numero que quiere transformar a binario >0\n\n");
        scanf("%d", &n);

    }
    return n;
}



int pasarABinario(int n){

     if(n < 2){
        return n;}
        else{
        return (n%2 + (10 * pasarABinario(n/2)));}
}


void guardarNumeroBinario(numeroEnBinario){

    FILE *archivo;
    archivo = fopen("binario.txt", "w");
    fprintf(archivo, "%d", numeroEnBinario);
    fclose(archivo);


}


void leerVentas(struct Venta ventas[100]){

    int contador = 0;
    FILE * archivo;
    archivo = fopen("ventas.txt", "r");

    while(!feof(archivo)){

         if(!feof(archivo)){
        char aux[100]="";
        fgets(aux, 100, archivo) ;


        cargarAVentas(ventas,contador, aux);
        contador = contador+1;
         }




    }

    fclose(archivo);

}

void cargarAVentas(struct Venta ventas[100],int contador, char aux[100]){

         int ubicacionPrimerDelimitador = 0;


        char aux1[100] = "";
        char aux2[100] = "";


        for (int i = 0; i<100; i++){

            if(aux[i]==';'){
                    ubicacionPrimerDelimitador = i;
                    i=100;
            }


        }

         for (int i = 0; i<ubicacionPrimerDelimitador; i++){
            aux1[i] = aux[i];
         }



         int inicioCant = 0;

         for (int i = ubicacionPrimerDelimitador+1; i<100; i++){

         aux2[inicioCant] = aux[i];
         inicioCant++;
         }



         ventas[contador].anio = atoi(aux1);
         ventas[contador].total = atoi(aux2);



}


void mostrarVentas(struct Venta ventas[100]){

    //ojo, ese 3, hay que contarlo del archivo o verificar hasta donde estan cargadas las ventas
    for (int i = 0; i<3; i++){

        printf("%d ---- %d\n", ventas[i].anio, ventas[i].total);
    }

}


int buscarVentas(struct Venta ventas[100], int anio){

    int encontrado = -1;

    for(int i = 0; i<3; i++){

        if(ventas[i].anio == anio){
            encontrado = i;
        }
    }
return encontrado;
}








