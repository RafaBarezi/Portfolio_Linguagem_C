#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Opera��o tern�ria");
    system("color 03");
    printf("Aula - Opera��o tern�ria\n\n");

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

    printf("\nO c�digo ASCII da letra digitada �: %i\n", codigo);

    return 0;
}
