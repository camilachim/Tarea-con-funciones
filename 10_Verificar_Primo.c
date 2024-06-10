//Verificar si un numero es primo

//Librerias
#include <stdio.h>

//Declaracion de la funcion
int verificar_primo(int numero);

//Implementacion del procedimiento
void primo();

int main(int argc, char const *argv[]){
    primo();
    return 0;
}

//Funcion
int verificar_primo(int numero){
    if (numero <= 1){
        return 0;
    }

    for (int i = 2; i * i <= numero; i++){
        if (numero % i == 0){
            return 0;
        }
    }
    return 1;
}

//Procedimiento
void primo(){
    int numero;

    printf("Ingrese el numero a verificar: ");
    scanf("%d", &numero);

    if (verificar_primo(numero)){
        printf("%d es un numero primo.\n", numero);
    }else{
        printf("%d no es un numero primo.\n", numero);
    }
    
    


}