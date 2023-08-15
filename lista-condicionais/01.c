// 01. Escreva um programa em C que verifica se um número é positivo, negativo ou zero.
#include <stdio.h>

int main() {
	int num = 0;
	printf("Escreva um número: ");
	scanf("%d", &num);

	if (num < 0) {
		printf("O número digitado é negativo!\n");
	} else if (num > 0) {
		printf("O número digitado é positivo!\n");
	} else {
		printf("O número digitado é nulo!\n");
	}
}
