// 05. Escreva um programa em C que verifica se um número é divisível por 3 e 5.
#include <stdio.h>

int main() {
    int num = 0;
    printf("Informe um número: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {
        printf("O número é divisível por 3 e 5!\n");
    } else {
        printf("O número não é divísivel por 3 e 5!\n");
    }
}