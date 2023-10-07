// 06. Escreva um programa que leia 10 números inteiros do usuário e armazene-os em um vetor. Em seguida, o programa deve ordenar os números em ordem crescente e imprimir o vetor ordenado.
#include <stdio.h>

int main(void) {
    // lendo o vetor
    int nums[10];
    for (int i = 0; i < 10; i++) {
        // printf("Digite um número:\n");
        scanf("%i", &nums[i]);
    }
    
    // ordenando o vetor
    int ordenados[10];
    for (int i = 0; i < 10; i++) {
        ordenados[i] = nums[i];
        printf("ordenados[%i] = %i\n", i, ordenados[i]);
        for (int j = i + 1; j < 10; j++) {
            if (ordenados[i] > nums[j]) {
                printf("ordenados[%i] (%i) > nums[%i] (%i)\n", i, ordenados[i], j, nums[j]);
                ordenados[i] = nums[j];
            }
        }
    }

    // vetor digitado
    for (int i=0; i < 10; i++) {
        printf("%i ", nums[i]);
    }
    printf("\n");
    
    // vetor ordenado
    for (int i=0; i < 10; i++) {
        printf("%i ", ordenados[i]);
    }
    printf("\n");
}