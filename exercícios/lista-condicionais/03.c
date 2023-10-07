// 03. Escreva um programa em C que verifica se um ano é bissexto.
#include <stdio.h>

int main() {
    int ano = 0;
    printf("Informe um ano: ");
    scanf("%d", &ano);

    if (((ano % 4 == 0) && !(ano % 100 == 0)) || (ano % 400 == 0)) {
        printf("O ano informado \033[32;1mé bissexto!\033[m\n");
    } else {
        printf("O ano informado \033[31;1mnão é bissexto!\033[m\n");
    }
}