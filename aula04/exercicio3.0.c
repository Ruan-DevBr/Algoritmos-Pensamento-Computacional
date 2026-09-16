#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_CTYPE, "");

    float media_aln, frequncia_aln;

    printf("Qual a média final do aluno? \n");
    scanf("%f", &media_aln);

    printf("Qual o percentual de frequência? \n");
    scanf("%f", &frequncia_aln);

    if(frequncia_aln < 75){
        printf("reprovado por falta!\n");
    } else {
        printf("Aprovado por Frequência");
    }
    if(media < 6){
        printf("Reprovado por nota!");
    } else{
        printf("Aprovado!!!");
    }

    return 0;
}
