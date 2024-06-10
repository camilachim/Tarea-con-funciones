//Suma de los facoriales

//Librerias
#include <stdio.h>

//Declaracion de funciones
int suma_factoriales(int numeros);

//Implementacion de Procedimientos
void suma();

int main(int argc, char const *argv[]){
    suma();
    return 0;
}

//Funcion
int suma_factoriales(int numeros){
    int suma = 0;
    int factorial = 1;
    for (int i = 1; i <= numeros; i++){
        factorial *= i;
        suma += factorial;
    }
    return suma;
}

//Procedimiento
void suma(){
    int numeros;
    int respuesta;

    printf("Ingrese un numero: ");
    scanf("%d", &numeros);

    respuesta = suma_factoriales(numeros);

    printf("La suma de factoriales es: %d\n", respuesta);

}
