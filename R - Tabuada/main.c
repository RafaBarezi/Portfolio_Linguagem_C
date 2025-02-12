#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Tabuada");
    system("color 03");
    printf("Aula - Tabuada\n\n");

    int tabuada = 0;
    printf("Por favor, digite a tabuada desejada >>>   ");
    scanf("%i", &tabuada);

    for(int x = 1; x<=100; ++x)

    {
        printf("\n\n>>>  %i x %i = %i\n", x, tabuada, x * tabuada);
    }

    return 0;
}
