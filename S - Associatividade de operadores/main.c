#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Associatividade de operadores");
    system("color 03");
    printf("Aula - Associatividade de operadores\n\n");

     int a, b, c;

    a = (b = (c = 1));
    printf("%i\n", a);
    printf("%i\n", b);
    printf("%i\n", c);

    return 0;
}
