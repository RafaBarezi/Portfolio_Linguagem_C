#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Operadores de atribui��o");
    system("color 03");
    printf("Aula - Operadores de atribui��o\n\n");

    int x = 0;

    // Operadores de atribui��o s�o �teis pra abreviar express�es como:  x = x + 1; mas temos formas melhores de trabalhar. O compilador executa mais r�pido e � mais f�cil de escrever. Podemos dizer que:  x += 1;

    while( x < 11 )
    {
        printf("msg\n");
        x += 1;
    }

    int i = 50;
    printf( "\nsoma >>> %i\n", i += 100);
    printf( "subtra��o >>> %i \n", i -= 50);
    printf( "multiplica��o >>> %i \n", i *= 3);
    printf( "divis�o >>> %i \n", i /= 3);
    printf( "resto divis�o >>> %i \n", i %= 3);

    return 0;
}
