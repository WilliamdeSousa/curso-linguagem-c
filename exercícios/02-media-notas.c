#include <stdio.h>

int main(void) {
    float n1, n2, n3, media;

    printf("Informe três notas, em sequência:\n");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3;
    
    printf("A média das notas é: %.1f\n", media);
}