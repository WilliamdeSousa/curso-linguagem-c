// 04. Escreva um programa que leia 10 números inteiros do usuário e armazene-os em um vetor. Em seguida, o programa deve verificar se existe algum número repetido no vetor e imprimir uma mensagem indicando isso.
#include <stdio.h>

#define false 0
#define true 1

typedef int bool;

int main(void)
{
    int vetor[10];
    bool tests[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    for (int rep, i = 0; i < 9; i++)
    {
        if (tests[i] == 1) 
        {
            continue;
        }
        else
        {
            tests[i] = 1;
        }
        rep = 1;
        for (int j = i + 1; j < 10; j++)
        {
            if (vetor[i] == vetor[j])
            {
                rep++;
                tests[j] = 1;
            }
        }
        if (rep != 1)
        {
            printf("O número %d repetiu %d vezes!\n", vetor[i], rep);
        }
    }
}