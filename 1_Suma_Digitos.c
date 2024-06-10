
//Suma de dígitos de un número

//Librerias
#include <stdio.h>

//Declaracion de la funcion 
int suma_digitos(int cifra);

//implementacion de procedimiento
void procedimiento();

int main(int argc, char const *argv[]){
    procedimiento();
    return 0;
}

//Funcion
int suma_digitos(int cifra){
    int suma = 0;

    while (cifra > 0){
        
        suma += cifra %10;
        cifra /=10;
    }
    return suma;
}

//Procedimiento
void procedimiento(){
    
    int cifra;

    printf("Ingrese la cifra a sumar: ");
    scanf("%d", &cifra);

    int respuesta = suma_digitos(cifra);

    printf("La suma de la cifra ingresada es: %d\n", respuesta);
}
