#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Modificadores de tipo");
    system("color 03");
    printf("Aula - Modificadores de tipo\n\n");

    int i = 10;
    unsigned short int u;
    printf("Tamanho da variavel i >>> %i\n", sizeof(i));
    printf("Tamanho da variavel u >>> %i\n", sizeof(u));

    // A função sizeof mostra o tamanho alocado da variável.
    // A variável i ocupa 4 bytes na memória, a variável u ocupa 2 bytes de memória pois está como short.

    return 0;
}
