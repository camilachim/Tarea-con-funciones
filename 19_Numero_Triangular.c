//Calcular el n-esimo numero trianguular

//Librerias
#include <stdio.h>

//Declaracion de funcion
int numero_triangular(int elementos);

//Implementacion de Procedimientos
void termino();

int main(int argc, char const *argv[]){
    termino();
    return 0;
}

//Funcion
int numero_triangular(int elementos){
    int suma = 0;
    for (int i = 1; i <= elementos; i++){
        suma += i;
    }
    return suma;
}

//Procedimiento
void termino(){
    int elementos;
    int respuesta;

    printf("Ingrese la cantidad de numeros a sumar: ");
    scanf("%d", &elementos);

    respuesta = numero_triangular(elementos);

    printf("El resultado de las suma es: %d\n", respuesta);
}
