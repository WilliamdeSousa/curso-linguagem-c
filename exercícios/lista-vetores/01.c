// 01. Escreva um programa que leia 5 números inteiros do usuário e armazene-os em um vetor. Em seguida, o programa deve imprimir os números na ordem inversa em que foram digitados.
#include <stdio.h>

int main() 
{
    int vetor[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nNa ordem inversa:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", vetor[4-i]);
    }
    printf("\n");
}