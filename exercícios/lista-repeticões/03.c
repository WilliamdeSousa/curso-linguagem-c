// 03. Escreva um programa que calcule e imprima a soma dos números inteiros de 1 a 100 usando um loop do-while.
#include <stdio.h>

int main() {
    int soma = 0;
    for (int i = 1; i <= 100; i++) {
        soma += i;
    }
    printf("%d\n", soma);
}