//Factorial de un numero

//Librerias
#include <stdio.h>

//Declaracion de la funcion
int factorial_numero(int numero);

//Implementacion de procedimiento
void factorial();

int main(int argc, char const *argv[]){
    factorial();
    return 0;
}

//Funcion
int factorial_numero(int numero){
    int resultado = 1;

    for (int i = 1; i <= numero; i++){
        resultado *= i;
    }
    return resultado;
}

//Procedimiento
void factorial(){
    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    int resultado = factorial_numero(numero);
    printf("El factorial de %d es: %d\n", numero, resultado);
}
