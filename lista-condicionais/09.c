// 09. Escreva um programa em C que verifica se uma pessoa é maior de idade.
#include <stdio.h>

int main() {
    int idade = 0;
    printf("Informe a idade: ");
    scanf("%d", &idade);
    if (idade >= 18) {
        printf("Você é \033[32;1mmaior\033[m de idade!\n");
    } else {
        printf("Você é \033[31;1mmenor\033[m de idade!\n");
    }
}