// 02. Escreva um programa em C que verifica se um número é par ou ímpar.
#include <stdio.h>

int main() {
    int num = 0;
    printf("Digite um número: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("O número digitado é par!\n");
    } else {
        printf("O número digitado é ímpar!\n");
    }
}