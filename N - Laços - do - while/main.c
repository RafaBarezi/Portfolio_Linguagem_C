#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title La�os Condicionais I - do - while");
    system("color 03");
    printf("Aula - La�os Condicionais I - do - while\n\n");

    int contador, c;
    contador = c = 0;

    do
    {
        contador += 1;
        printf("Por favor, digite 0 para sair do looping >>> ");
        scanf("%i", &c);
        printf("\n\nEsta � a sua %i� tentativa\n\n", contador);
    }

    while("%i" != 0, c);

    return 0;
}
