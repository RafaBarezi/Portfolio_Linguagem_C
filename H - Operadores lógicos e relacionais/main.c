#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Operadores l�gicos e relacionais");
    system("color 03");
    printf("Aula - Operadores l�gicos e relacionais\n\n");

    int i = 40;
    int condicao = (i>20)&&(i<100);
    printf("%i\n", condicao);
    printf("%i\n", !condicao);

    int x =10;
    int cond = 0;

    // x � = A 10? SIM /// x menor que 1: N�O! ent�o v ou f =  V!:
    // Temos tamb�m o conectivo  ||(ou), basta uma condi��o ser verdadeira as outras serem verdadeiras

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
