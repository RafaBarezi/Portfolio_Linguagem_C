#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title encadeamento e aninhamento de ifs - switch case");
    system("color 03");
    printf("Bônus - encadeamento e aninhamento de ifs - switch case\n\n");

    int opcao;
    printf("Digite a opção 1 para adicionar ou 2 para excluir >>> ");
    scanf("i", &opcao);

    switch(opcao)
    {
    case 1:
        printf("\nNúmero 1\n");
        break;
    case 2:
        printf("\nNúmero 2\n");
        break;
    default:
        printf("opção inválida\n");
        printf("final do programa\n");
        return 0;
    }

}
