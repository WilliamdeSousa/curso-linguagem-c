// 08. Escreva um programa em C que verifica se um número é positivo e múltiplo de 5.
#include <stdio.h>

int main() {
    int num = 0;
    printf("Informe um número: ");
    scanf("%d", &num);

    if (num <= 0 && num % 5 != 0) {
        printf("O número não é nem positivo, nem múltiplo de 5!\n");
    } else if (num <= 0) {
        printf("O número não é positivo!\n");
    } else if (num % 5 != 0) {
        printf("O número não é múltiplo de 5!\n");
    } else {
        printf("O número é um múltiplo positivo de 5!\n");
    }
}