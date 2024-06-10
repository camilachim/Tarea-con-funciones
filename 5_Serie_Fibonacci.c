//Serie fibonacci

//Librerias
#include <stdio.h>

//Declaracion de la funcion
void fibonacci(int n);

//Implementacion de procedimiento
void serie();

int main(int argc, char const *argv[]){
    serie();
    return 0;
}

//Funcion
void fibonacci(int n){
    printf("Serie fibonacci hasta %d:\n", n);

    if (n >= 1){
        printf("0");
    }

    if (n >= 2){
        printf(", 1");
    }
    
    int a = 0 , b = 1;

    for (int i = 3; i <= n; i++){
        int siguiente = a + b;
        printf(", %d", siguiente);
        a = b;
        b = siguiente;
    }
    printf("\n");
}

//Procedimiento
void serie(){
    int elementos;

    printf("Ingrese el numero de elementos para la serie: ");
    scanf("%d", &elementos);   

    if (elementos <= 0){
        printf("Numero positivo: ");
    }else{
        fibonacci(elementos);
    }
}