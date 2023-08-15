// 06. Escreva um programa em C que verifica se uma letra digitada é uma vogal ou uma consoante.
#include <stdio.h>

int main() {
    // ler uma letra
    char letra=' ';
    printf("Escreva uma letra: ");
    scanf("%c", &letra);
    
    // converte para letra minúscula caso seja maiúscula
    if (letra >= 65 && letra <= 90) {
        letra += 32;
    }

    // checa se é não uma letra, depois se é vogal, se não é consoante.
    if (letra < 97 || letra > 122) {
        printf("Você não digitou uma letra!\n");
    } else if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        printf("A letra informada é uma vogal!\n");
    } else {
        printf("A letra informada é uma consoante!\n");
    }
}