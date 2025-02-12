#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Instrução if");
    system("color 03");
    printf("Aula - Instrução if\n\n");

    char c;
    printf("Por favor, digite um caractere em letra maiúscula:\n\n>>> ");
    scanf( "%c", &c );
    printf("\nVocê digitou:\n\n>>> %c\n", c);

    if( c>= 'a' )
    {
        printf("\nVocê digitou em letra minúscula. Deveria ter digitado a letra maiúscula: <%c> \n", toupper(c));
    }

    return 0;
}

