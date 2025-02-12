#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Média de notas escolares");
    system("color 03");
    printf("Aula - Média de notas escolares\n\n");

    float nota1, nota2, nota3, nota4, media;
    nota1 = nota2 = nota3 = nota4 = media = 0;

    printf("\nMedia Escolar 1.0\n");
    printf("\nPor favor, digite a sua primeira nota bimestral\n\n>>> ");
    scanf("%f", &nota1);
    printf("\nDigite a sua segunda nota bimestral\n\n>>> ");
    scanf("%f", &nota2);
    printf("\nDigite a sua terceira nota bimestral\n\n>>> ");
    scanf("%f", &nota3);
    printf("\nDigite a sua quarta nota bimestral\n\n>>> ");
    scanf("%f", &nota4);

    media=(nota1 + nota2 + nota3 + nota4)/4;
    printf("\nO valor da sua media escolar foi de : %.0f\n", media);


    if(media >= 7)
    {
        printf("\nvocê foi aprovado!\n\n");
    }
    else
    {
        printf("\nvocê foi reprovado!\n\n");
    }

    return 0;
}
