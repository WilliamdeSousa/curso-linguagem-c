// 04. Escreva um programa em C que calcula a média de três números e verifica se a média é maior que 7.
#include <stdio.h>

float media(int tam, float vetor[tam]);

int main() {
    // criando e preenchendo o vetor com as notas
    float nota[3] = {0, 0, 0};
    for (int i = 0; i < 3; i++) {
        printf("Nota %d: ", i+1);
        scanf("%f", &nota[i]);
    }
    
    // calculando e mostrando a média
    float med = media(3, nota);
    printf("A média das notas vale %.2f\n", med);
    return (0);
}

float media(int tam, float *vetor) {
    
    float soma = 0;
    for (int i = 0; i < tam; i++) {
        soma += vetor[i];
    }
    return (soma / tam);
}