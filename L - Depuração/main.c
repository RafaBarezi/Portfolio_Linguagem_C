#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Depura��o");
    system("color 03");
    printf("Aula - Depura��o\n\n");

    printf("Por favor, digite o n�mero 1 >>> ");
    char c;
    c = getchar();

    if(c == '1')
    {
        printf("\nO caractere digitado est� correto.\n");
    }
    else
    {
        printf("\nO caractere digitado � invalido.\n");
        printf("\nVoc� digitou o caractere %c.\n", c);
    }
    return 0;
}
