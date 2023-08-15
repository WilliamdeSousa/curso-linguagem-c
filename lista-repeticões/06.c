// 06. Escreva um programa que imprima a sequência de Fibonacci até o décimo termo usando um loop while.
#include <stdio.h>

int main() {
    for (int i = 0, anterior = 0, atual = 1, proximo = 1; i < 10; i++) {
        printf("%d\n", anterior);
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }
}