#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Instru��o if");
    system("color 03");
    printf("Aula - Instru��o if\n\n");

    char c;
    printf("Por favor, digite um caractere em letra mai�scula:\n\n>>> ");
    scanf( "%c", &c );
    printf("\nVoc� digitou:\n\n>>> %c\n", c);

    if( c>= 'a' )
    {
        printf("\nVoc� digitou em letra min�scula. Deveria ter digitado a letra mai�scula: <%c> \n", toupper(c));
    }

    return 0;
}

