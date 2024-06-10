//Suma de una serie aritmetica

//Librerias
#include <stdio.h>

//Declaracion de funcion
int suma_aritmetica(int elementos);

//Implementacion de procedimientos
void suma();

int main(int argc, char const *argv[]){
    suma();
    return 0;
}

//Funcion
int suma_aritmetica(int n){
    int suma = 0;

    for (int i = 1; i <= n; i++){
        suma += i;
    }
    return suma;
}

//Procedimiento
void suma(){
    int elementos;

    printf("Ingrese la cantidad para iniciar la suma: ");
    scanf("%d", &elementos);

    int resultado = suma_aritmetica(elementos);

     for (int i = 1; i <= elementos; i++){
        if(i == elementos){
            printf("%d = ", i);
        }else{
            printf("%d + ", i);
        }
    }
    printf("%d\n", resultado);
}


