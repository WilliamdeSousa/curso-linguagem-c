// 07. Escreva um programa que leia uma sequência de números inteiros do usuário e encontre o maior e o menor número usando um loop for.
#include <stdio.h>

int main() {
    int ma, me;
    for (int num = 0, i = 0; i < 5; i++) {
        printf("Número %i: ", i + 1);
        scanf("%d", &num);
        if (i == 0) {
            ma = num;
            me = num;
        } else if (num > ma) {
            ma = num;
        } else if (num < me) {
            me = num;
        }
    }
    printf("Maior: %d\n", ma);
    printf("Menor: %d\n", me);

}