//Producto de una serie geometrica

//Librerias
#include <stdio.h>

//Declaracion de funcion
void serie_geometrica(int elementos, int razon);

//Implementacion de procedimientos
void serie();

int main(int argc, char const *argv[]){
    serie();
    return 0;
}

//Funcion
void serie_geometrica(int elementos, int razon){
    int termino = 1;

    printf("La serie geometrica es: ");
    for (int i = 0; i < elementos; i++){
        if (i == elementos - 1){
            printf("%d\n", termino);
        }else{
            printf("%d, ", termino);
        }
        termino *= razon;
    }
}

//Procedimiento
void serie(){
    int elementos;
    int razon;

    printf("Ingrese la cantidad de elementos para la serie: ");
    scanf("%d", &elementos);
    printf("Ingrese la razon para producir la serie: ");
    scanf("%d", &razon);

    serie_geometrica(elementos, razon);
}
