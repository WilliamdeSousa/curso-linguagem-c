#include <stdio.h>

int main(void)
{
	int dia;
	do
	{
		printf("Digite um número entre 1 e 7: ");
		scanf("%d", &dia);
		switch (dia)
		{
		case 1:
			printf("Domingo\n");
			break;
		case 2:
			printf("Segunda\n");
			break;
		case 3:
			printf("Terça\n");
			break;
		case 4:
			printf("Quarta\n");
			break;
		case 5:
			printf("Quinta\n");
			break;
		case 6:
			printf("Sexta\n");
			break;
		case 7:
			printf("Sábado\n");
			break;
		default:
			printf("Valor inválido! ");
			break;
		}
	} while (dia < 1 || dia > 7);
}
