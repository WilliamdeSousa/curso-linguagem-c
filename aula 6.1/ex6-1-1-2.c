#include <stdio.h>

int main(void) {
    // definindo as variáveis
    int vetor[5] = {10, 20, 30, 40, 50};
    int soma = 0;

    // percorrendo o vetor e somando a variável soma
    for (int i = 0; i < 5; i++) {
        soma += vetor[i];
    }

    // mostrando a soma dividida por 5, ou seja, a média
    printf("A média vale %d\n", (soma / 5));
}