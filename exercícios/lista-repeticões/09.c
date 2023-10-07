// 09. Escreva um programa que leia um número inteiro do usuário e imprima a tabuada desse número de 1 a 10 usando um loop for.
#include <stdio.h>

int main(void) 
{
    int num = 0;
    scanf("%d", &num);
    printf("Tabuada:\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %2d = %d\n", num, i, num * i);
    }
}