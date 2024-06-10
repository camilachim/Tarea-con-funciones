//Produnco de fracciones

//Librerias
#include <stdio.h>

//Declaracion de funciones
double producto_fracciones(int elementos);

//Implementacion de Procedimiento
void respuesta();

int main(int argc, char const *argv[]){
    respuesta();
    return 0;
}

//Funcion
double producto_fracciones(int elementos){
    double producto = 1.0;

    for (int i = 1; i <= elementos; i++){
        producto *= 1.0 / i;
    }
    return producto;
}

//Procedimiento
void respuesta(){
    int elementos;
    double resultado;

    printf("Ingrese los elementos para sacar el producto: ");
    scanf("%d", &elementos);

    resultado = producto_fracciones(elementos);

    printf("El producto de las facciones ingresadas es: %.6f\n", resultado);
}

