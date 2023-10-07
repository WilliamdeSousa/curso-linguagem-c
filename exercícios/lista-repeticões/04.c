// 04. Escreva um programa que solicite ao usuário um número inteiro positivo e calcule o fatorial desse número usando um loop for.
#include <stdio.h>

int main() {
    long int num;
    do {
        printf("Informe um número positivo: ");
        scanf("%li", &num);
    } while (num < 1);
    long int res = 1;
    for (int i = 1; i <= num; i++) {
        res *= i;
    }
    printf("O fatorial do número %li é %li!\n", num, res);
}