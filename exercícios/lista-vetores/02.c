// 02. Escreva um programa que leia 10 números inteiros do usuário e armazene-os em um vetor. Em seguida, o programa deve encontrar e imprimir o maior e o menor número do vetor.
#include <stdio.h>

int main(void)
{
    // criando e preenchendo o vetor
    int vetor[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Informe o %2dº número: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    int maior = vetor[0], menor = vetor[0];
    for (int i = 1; i < 10; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        else if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }
    printf("\nO menor número digitado foi %d.\n", menor);
    printf("O maior número digitado foi %d.\n", maior);
}