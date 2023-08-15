// 08. Escreva um programa que imprima os primeiros 20 termos da série de Fibonacci usando um loop for.
#include <stdio.h>

int main() {
    for (long int anterior = 0, atual = 1, proximo = 1, i = 0; i < 1000000; i++) {
        printf("%ld: %ld\n", i+1, anterior);
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }
}