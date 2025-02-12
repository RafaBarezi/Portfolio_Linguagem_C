#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Operadores de incremento e decremento");
    system("color 03");
    printf("Aula - Operadores de incremento e decremento\n\n");

    int i = 1;
    printf("%i\n", i);
    printf("%i\n", ++i);
    i++;
    printf("%i\n\n\n", i);

    int i2 =5;
    printf("%i\n", i2);
    printf("%i\n", --i2);
    i2--;
    printf("%i\n", i2);

    return 0;
}
