//Suma de los numeros pares 

//Librerias
#include <stdio.h>

//Declaracion de funcion
int suma_pares(int elementos);

//Implementacion de Procedimientos
void suma();

int main(int argc, char const *argv[]){
    suma();
    return 0;
}

//Funcion
int suma_pares(int elementos){
    int suma = 0;
    for (int i = 2; i <= elementos; i+=2){
        suma += i;
        printf("%d", i);
        if (i + 2 <= elementos){
            printf(" + ");
        } 
    }
    printf(" = ");
    return suma;
}

//Procedimientos
void suma(){
    int elementos;
    int resultado;

    printf("Ingrese los elementos para realizar la suma: ");
    scanf("%d", &elementos);

    resultado = suma_pares(elementos);

    printf("%d\n", resultado);
}