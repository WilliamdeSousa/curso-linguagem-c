#include <stdio.h>

float maior(float a, float b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    float n1, n2, m;

    printf("Número 1:\n");
    scanf("%f", &n1);
    printf("Número 2:\n");
    scanf("%f", &n2);
    
    m = maior(n1, n2);
    printf("O maior número digitado é %.2f\n", m);
}