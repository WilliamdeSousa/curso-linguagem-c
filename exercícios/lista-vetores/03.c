// 03. Escreva um programa que leia 5 números inteiros do usuário e armazene-os em um vetor. Em seguida, o programa deve calcular e imprimir a média dos números do vetor.
#include <stdio.h>

int main(void)
{
    int vetor[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int s = 0;
    for (int i = 0; i < 5; i++)
    {
        s += vetor[i];
    }
    printf("Média: %.2f\n", s / 5.0);
}