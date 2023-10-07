#include <stdio.h>

int main(int argc, char *argv[]) {
    int nums[4], soma = 0;

    printf("Informe quatro números, em sequência:\n");
    scanf("%i %i %i %i", &nums[0], &nums[1], &nums[2], &nums[3]);

    for (int i=0; i<4; i++) {
        soma += nums[i];
    }

    printf("Resultado da soma: %d\n", soma);
}