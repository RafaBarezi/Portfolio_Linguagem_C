#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Instru��o if else");
    system("color 03");
    printf("Aula - Instru��o if else\n\n");

    int i=10;
    printf("Digite um valor != 5\n\n>> ");
    scanf("%i", &i);

    if(i==5)
    {
        printf("\nA Expressao � :");
        printf("False\n");
    }
    else
    {
        printf("\nA Expressao �: ");
        printf("True\n");
    }

    return 0;
}
