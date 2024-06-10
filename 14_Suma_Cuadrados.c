//Suma de los cuadrados de los primeros numeros

//Libreria
#include <stdio.h>

//Declaracion de la funcion
int suma_cuadrados(int elementos);

//Implementacion de procedimientos
void resultado();

int main(int argc, char const *argv[]){
    resultado();
    return 0;
}

//Funcion
int suma_cuadrados(int elementos){
    int suma = 0;
    for (int i = 1; i <= elementos; i++){
        suma += i * i;
    }
    return suma;
}

//Procedimiento
void resultado(){
    int elementos;
    int respuesta;

    printf("Ingrese la cantidad de numeros a sumar: ");
    scanf("%d", &elementos);

    respuesta = suma_cuadrados(elementos);

    printf("El resultado de la suma es: %d\n", respuesta);
}