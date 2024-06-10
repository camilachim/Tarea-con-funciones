// suma de numeros fraccionarios

//librerias
#include <stdio.h>

//Declaracion de Funcion
double suma_fracciones(int elementos);

//Implementacion de Procedimientos
void respuesta();

int main(int argc, char const *argv[]){
    respuesta();
    return 0;
}

//Funcion
double suma_fracciones(int elementos){
    double suma = 0.0;
    for (int i = 1; i <= elementos; i++){
        suma += 1.0 / i;
    }
    return suma;
}

//procedimientos
void respuesta(){
    int elementos;
    double resultado;

    printf("Ingrese la cantidad de numeros a sumar: ");
    scanf("%d", &elementos);

    resultado = suma_fracciones(elementos);

    printf("La suma de elementos ingresados es: %.6f\n", resultado);

}