//Saber cuantos numeros primos ay en n elementos

//Librerias
#include <stdio.h>

//Declaracion de funciones
int numeross_primos(int numeros);

//Implementacion de procedimientos
void primos();

int main(int argc, char const *argv[]){
    primos();
    return 0;
}

//Funcion
int numeros_primos(int numeros){
    int contador = 0;
    for (int numero = 2; numero <= numeros; numero++){
        int primo = 1;
        for (int i = 2; i * i<= numero; i++){
            if (numero % i == 0){
                primo = 0;
            }
        }
        if (primo){
            contador++;
        }
    }
    return contador;
}

//Procedimiento
void primos(){
    int numeros;
    int resultado;

    printf("Ingrese la cantidad de numeros a  verfificar: ");
    scanf("%d", &numeros);

    resultado = numeros_primos(numeros);

    printf("Los numeros primos encontrados es: %d\n", resultado);
}