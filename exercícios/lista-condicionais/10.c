// 10. Escreva um programa em C que verifica se um número é um quadrado perfeito.
#include <stdio.h>
#include <math.h>

int main() {
    double numero = 0;
    printf("Informe um número: ");
    scanf("%lf", &numero);
    numero = pow(numero, 0.5);
    if (numero - ((int) numero) == 0.0) {
        printf("true\n");
    } else {
        printf("false\n");
    }
}