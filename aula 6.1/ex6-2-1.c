#include <stdio.h>

void clean_stdin(void);

int main(void) {
    
    char s[11];

    printf("Digite algo (sintaxe convencional):\n");
    scanf("%s", s);
    clean_stdin();

    printf("Resultado: %s\n\n", s);

    printf("Digite algo (sintaxe aprimorada):\n");
    scanf("%10[^\n]s", s);
    clean_stdin();

    printf("Resultado: %s\n\n", s);

}

void clean_stdin(void) 
{
    int c;
    do 
    {
        c = getchar();
    } while (c != '\n' && c != EOF);
}