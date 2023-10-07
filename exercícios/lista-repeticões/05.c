// 05. Escreva um programa que solicite ao usuário um número inteiro positivo e verifique se é um número primo usando um loop for.
#include <stdio.h>

int main() {
    int numero = 0;
    
    printf("Informe um número: ");
    scanf("%d", &numero);
    
    int n_divs = 0;
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            n_divs++;
        }
    }
    
    if (n_divs == 2) {
        printf("O número informado é primo!\n");
    } else {
        printf("O número informado não é primo!\n");
    }
}