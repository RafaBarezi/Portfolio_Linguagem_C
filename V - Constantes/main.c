#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Constantes");
    system("color 03");
    printf("Aula - Constantes\n\n");

    const int a=5;
    printf("%i\n", a);
    return 0;
}
