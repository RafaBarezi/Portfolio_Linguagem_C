#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Operador tern�rio");
    system("color 03");
    printf("Aula - Operador tern�rio\n\n");

    int num1, num2;
    printf("Por favor, informe um n�mero >>> ");
    scanf("%i", &num1);

    num2 =  (num1<0) ? 0 : num1;
    printf("\nO valor de num2 � >>> %i\n", num2);

    return 0;
}
