#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Opera��es matem�ticas");
    system("color 03");
    printf("Opera��es matem�ticas\n\n");

    int num1, num2;
    num1 = 15;
    num2 = 20;

    int soma = num1 + num2;
    printf("O resultado da soma �: %i\n", soma);
    int subtracao = num2 - num1;
    printf("o resultado da subtra��o �: %i\n", subtracao);
    int multi = num1 * num2;
    printf ("o resultado da multiplica��o �: %i\n", multi);
    int div = num2 / 3;
    printf("o resultado da divis�o �: %i\n", div);    //Aqui o sistema arredondou o n�.

    return 0;
}
