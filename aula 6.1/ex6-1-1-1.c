#include <stdio.h>

int main(void) {
    // definindo o vetor
    int vetor[5];

    // preenchendo o vetor
    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;

    // calculando a média
    int media = (vetor[0] + vetor[1] + vetor[2] + vetor[3] + vetor[4]) / 5;

    // mostrando a soma dividida por 5, ou seja, a média
    printf("A média vale %d\n", media);
}