//Radicación mediante restas sucesivas

//Librerias
#include <stdio.h>

//Declaracion de la funcion
int raiz_cuadrada(int n);

//Implementacion del procedimiento
void resultado();

int main(int argc, char const *argv[])
{
    resultado();
    return 0;
}

//Funcion
int raiz_cuadrada(int n){
    int suma = 0;
    int impar = 1;
    int raiz = 0;

    while (suma + impar <= n){
    suma += impar;
    impar += 2;
    raiz++;
    }
    return raiz;
}

//Procedimiento
void resultado(){
    int n;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    int respuesta = raiz_cuadrada(n);

    printf("La raiz cuadrada de %d es; %d\n", n, respuesta);
}

