// 02. Escreva um programa que solicite ao usuário um número inteiro positivo e imprima todos os números pares de 0 até esse número usando um loop while.
#include <stdio.h>

int main() {
    int num = 0;
    do {
        printf("Informe um número positivo: ");
        scanf("%d", &num);
    } while (num <= 0);
    for (int i = 0; i <= num; i += 2) {
        printf("%d\n", i);
    }
}