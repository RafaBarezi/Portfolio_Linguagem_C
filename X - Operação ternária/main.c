#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Operação ternária");
    system("color 03");
    printf("Aula - Operação ternária\n\n");

    printf("Por favor, digite uma letra entre A e G:   ");
    char caractere = 0;
    scanf("%c", &caractere);
    int codigo = 0;

    codigo = (caractere=='A') ? 65 :
             (caractere=='B') ? 66 :
             (caractere=='C') ? 67 :
             (caractere=='D') ? 68 :
             (caractere=='E') ? 69 :
             (caractere=='F') ? 70 :
             (caractere=='G') ? 71 : -1;

    printf("\nO código ASCII da letra digitada é: %i\n", codigo);

    return 0;
}
