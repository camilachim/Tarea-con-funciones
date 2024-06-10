//Numeros de digitos en una cifra

//Librerias
#include <stdio.h>

//Declaracion de funcion
int numero_digitos(int cifra);

//Implementacion de procedimiento
void digitos();

int main(int argc, char const *argv[]){
    digitos ();
    return 0;
}

//Funcion
int numero_digitos (int cifra){
    int contador = 0;

    if (cifra == 0){
        return 1;
    }
    
    while (cifra != 0){
        cifra /= 10;
        contador++;
    }
    return contador;
}

//Procedimiento
void digitos(){
    int cifra;

    printf("Ingrase una cifra: ");
    scanf("%d", &cifra);

    int digitos = numero_digitos(cifra);

    printf("El numero de digitos de la cifra ingresada es: %d\n", digitos);
}
