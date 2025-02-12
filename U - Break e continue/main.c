#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Break e continue");
    system("color 03");
    printf("Aula - Break e continue\n\n");

    int x;

    for(x=0; x<=100; ++x)
    {

        if(x==2)
        {
            printf("-\n\n", x);
            continue;
        }

        if(x==8)
        {
            printf("-\n\n", x);
            break;
        }
        printf("%i\n", x);
    }


    return 0;
}
