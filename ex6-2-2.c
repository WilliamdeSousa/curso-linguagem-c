#include <stdio.h>

void clean_stdin(void) 
{
    int c;
    do 
    {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

int main(void) {
    
    char s[11];

    printf("Digite algo (sintaxe fgets):\n");
    fgets(s, 11, stdin);
    clean_stdin();

    printf("Resultado: %s\n\n", s);

    printf("Digite algo (sintaxe fgets):\n");
    fgets(s, 11, stdin);
    clean_stdin();

    printf("Resultado: %s\n\n", s);

}
