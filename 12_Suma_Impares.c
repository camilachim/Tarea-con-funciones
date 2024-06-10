//Suma de los numeros impares

//Librerias
#include <stdio.h>

//Declaracion de Funcion
int sumar_impares(int elementos);

//Implementacion de Procedimiento
void impares();

int main(int argc, char const *argv[]){
    impares();
    return 0;
}

//Funcion
int sumar_impares(int elementos){
    int suma = 0;
    for (int i = 1; i <= elementos; i+=2){
        suma += i;
    }
    return suma;
}

//Procedimiento
void impares(){
    int elementos;
    int resultado;

    printf("Ingresa el numero de elementos para sumar impares: ");
    scanf("%d", &elementos);

    resultado = sumar_impares(elementos);

    printf("La suma de los numeros impares de los %d elementos ingresados es: %d\n",elementos, resultado);
}