// 10. Escreva um programa que solicite ao usuário uma quantidade indefinida de números inteiros até que ele digite 0. Em seguida, o programa deve calcular e imprimir a soma e a média dos números digitados, excluindo o zero, usando um loop do-while.
#include <stdio.h>

int main(void)
{
    int soma = 0, quant = -1, num = 0;
    do
    {
        scanf("%d", &num);
        soma+= num;
        quant++;
    } while (num != 0);
    printf("%d %.2f\n", soma, ((float) soma) / quant);
}