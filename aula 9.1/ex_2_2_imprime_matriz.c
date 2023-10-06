#include <stdio.h>

void imprime(int mat[][4], int tam) {
    for (int i=0; i<tam; i++) {
        for (int j=0; j<4; j++) {
            printf("%i ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 0, 1, 2}
    };
    imprime(mat, 3);
}