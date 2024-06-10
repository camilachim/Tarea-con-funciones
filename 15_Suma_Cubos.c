//Suma de los cubos de los n elementos

//Librerias
#include <stdio.h>

//Declaracion de Funciones
int suma_cubos(int elementos);

//Implementacion de Procedimientos
void resultado();

int main(int argc, char const *argv[]){
    resultado();
    return 0;
}

//Funcion
int suma_cubos(int elementos){
    int suma = 0;

    for (int i = 1; i < elementos; i++){
        suma += i * i * i;
    }
    return suma;
}

//Procedimiento
void resultado(){
    int elementos;
    int respuesta;

    printf("Ingrese la cantidad de elementos a sumar: ");
    scanf("%d", &elementos);

    respuesta = suma_cubos(elementos);

    printf("El resultado de la suma de cubos es: %d\n", respuesta);
}
