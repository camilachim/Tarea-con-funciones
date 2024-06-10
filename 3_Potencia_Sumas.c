// Potenciación mediante sumas sucesivas

//Librerias
#include <stdio.h>

//Declaracion de la funcion para la multiplicacion
int multiplicacion(int multiplicando, int multiplicador);

//Declaracion de la funcion para potencia
int potencia(int base, int exponente);

//Implementacion de procedimiento
void resultado();

int main(int argc, char const *argv[]){
    resultado();
    return 0;
}

//Funcion multiplicacion
int multiplicacion(int multiplicando, int multiplicador){
    int producto = 0;

    for (int i = 0; i < multiplicador; i++){
        producto += multiplicando;
    }
    return producto;
}

//Funcion Potencia
int potencia(int base, int exponente){
    int respuesta = 1;

    for (int i = 0; i < exponente; i++){
        respuesta = multiplicacion(respuesta, base);
    }
    return respuesta;
}

//Procedimiento
void resultado(){
    int base;
    int exponente;

    printf("Ingrese la base: ");
    scanf("%d", &base);

    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    int resultado = potencia(base, exponente);

    printf("%d elevado a %d es: %d\n", base, exponente, resultado);
}