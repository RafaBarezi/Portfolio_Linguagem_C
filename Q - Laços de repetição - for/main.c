#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Laços de repetição - for II");
    system("color 03");
    printf("Aula - Laços de repetição - for II\n\n");

    for(int a=1, b=9; a<=9; ++a, --b)
    {
        printf("%i",a);
        printf("   >>>   ");
        printf("%i\n",b);
    }

    return 0;
}
