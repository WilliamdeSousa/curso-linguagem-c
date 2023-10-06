# include <stdio.h>

void imprime1(int vet[], int tam) {
    for (int i=0; i<tam; i++) {
        printf("%i\n", vet[i]);
    }
}

void imprime2(int vet[5]) {
    for (int i=0; i<5; i++) {
        printf("%i\n", vet[i]);
    }
}

void imprime3(int *vet, int tam) {
    for (int i=0; i<tam; i++) {
        printf("%i\n", vet[i]);
    }
}

int main() {
    int vetor[5] = {1, 2, 3, 4, 5};
    
    imprime1(vetor, 5);
    printf("\n");
    imprime2(vetor);
    printf("\n");
    imprime3(vetor, 5);
}