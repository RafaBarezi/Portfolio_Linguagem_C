#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Depuração");
    system("color 03");
    printf("Aula - Depuração\n\n");

    printf("Por favor, digite o número 1 >>> ");
    char c;
    c = getchar();

    if(c == '1')
    {
        printf("\nO caractere digitado está correto.\n");
    }
    else
    {
        printf("\nO caractere digitado é invalido.\n");
        printf("\nVocê digitou o caractere %c.\n", c);
    }
    return 0;
}
