#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Entrada de dados");
    system("color 03");
    printf("Aula - Entrada de dados\n\n");

    int num1, num2;

    printf("Por favor, digite um numero >>> ");
    scanf("%i", &num1);
    printf("\nO numero digitado foi:   %i",num1);
    printf("\n\nPor favor, digite um outro numero >>> ");
    scanf("%i", &num2);
    printf("\nO numero digitado foi: %i\n",num2);

    return 0;
}
