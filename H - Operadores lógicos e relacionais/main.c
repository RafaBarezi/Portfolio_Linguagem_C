#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Operadores lógicos e relacionais");
    system("color 03");
    printf("Aula - Operadores lógicos e relacionais\n\n");

    int i = 40;
    int condicao = (i>20)&&(i<100);
    printf("%i\n", condicao);
    printf("%i\n", !condicao);

    int x =10;
    int cond = 0;

    // x é = A 10? SIM /// x menor que 1: NÃO! então v ou f =  V!:
    // Temos também o conectivo  ||(ou), basta uma condição ser verdadeira as outras serem verdadeiras

    cond = (x=10)||(x<1);
    printf("%i\n", cond);
    cond = (x=0)||(x!=1000);
    printf("%i\n", cond);
    cond = (x=10)||(x!=0);
    printf("%i\n", cond);
    cond = (x!=10)||(x==0);
    printf("%i\n", cond);

    return 0;
}
