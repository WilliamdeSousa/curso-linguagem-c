// 07. Escreva um programa em C que verifica se um número é primo.
#include <stdio.h>

int main() {
    int num = 0;
    printf("Escreva um número: ");
    scanf("%d", &num);
    int c = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            c++;
        }
    }
    if (c == 2) {
        printf("O número digitado é primo!\n");
    } else {
        printf("O número digitado não é primo!\n");
    }
}