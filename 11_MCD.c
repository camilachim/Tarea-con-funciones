//Encontrar el Maximo Comun Divisor (MCD)

//Librerias 
#include <stdio.h>

//Declarar la Funcion
int maximo_comun_divisor(int numero1, int numero2);

//Implementar el Procedimiento
void m_c_d();

int main(int argc, char const *argv[]){
    m_c_d();
    return 0;
}

//Funcion
int maximo_comun_divisor(int numero1, int numero2){
    while(numero2 != 0){
        int respuesta = numero1 % numero2;
        numero1 = numero2;
        numero2 = respuesta;
    }
    return numero1;
}

//Procedimiento
void m_c_d() {
    int numero1;
    int numero2;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numero1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numero2);

    int mcd = maximo_comun_divisor(numero1, numero2);

    printf("El MCD de los numeros ingresados es: %d\n", mcd);
}
