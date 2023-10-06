#include <stdio.h>
#include "poligonos.h"
#include "func.h"

int main() {
    float a, b;
    scanf("%f %f", &a, &b);
    float area = area_retangulo(a, b);
    printf("%.2f\n", area);
    float s = soma(a, b);
    printf("%.2f\n", s);
}