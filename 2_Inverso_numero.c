// Inverso de un numero

//Librerias
#include <stdio.h>

//Declaracion de funcion
int inverso_numero(int numero);

//Implemetacion del procedimiento
void inverso();

int main(int argc, char const *argv[]){
    inverso();
    return 0;
}

//Funcion
int inverso_numero(int numero){
    int ninvertido = 0;

    while (numero > 0){
        ninvertido = ninvertido *10 + numero %10;
        numero /=10;
    }
     return ninvertido;
}

// Procedimiento
void inverso(){

    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    int resultado = inverso_numero(numero);

    printf("El inverso del numero ingresaddo es: %d\n", resultado);
}