#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Laços de repetição (iterador) - while I");
    system("color 03");
    printf("Aula - Laços de repetição (iterador) - while I\n\n");

    int a = 0;

    while(a<10)
    {

        printf( "%i\n", a);

        a = (a + 1);

    }

    return 0;
}
