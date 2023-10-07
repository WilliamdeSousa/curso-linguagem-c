// 05. Escreva um programa que leia 5 nomes do usuário e armazene-os em um vetor de strings. Em seguida, o programa deve imprimir os nomes em ordem alfabética.
#include <stdio.h>
#include <string.h>

int main()
{
    char nomes[5][20];
    for (int i=0; i<5; i++)
    {
        printf("Nome %i: ", i);
        fgets(nomes[i], 20, stdin);
    }
    for (int i=0; i<5; i++)
    {
        puts(nomes[i]);
    }
}
