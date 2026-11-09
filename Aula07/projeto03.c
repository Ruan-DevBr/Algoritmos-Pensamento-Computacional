#include <stdio.h>
int main()
{
    int codigo_cadete;
    int etapa;
    int pontuacao;
    int pontuacao_total;
    float media;
    int continuar;
    do
    {
        printf("\n========= MISSAO ORBITAL =========\n");
        printf("Digite o codigo do cadete: ");
        scanf("%d", &codigo_cadete);
        pontuacao_total = 0;
        for (etapa = 1; etapa <= 3; etapa++)
        {
            do
            {
                printf("Digite a pontuacao da etapa %d (0 a 100): ", etapa);
                scanf("%d", &pontuacao);
                if (pontuacao < 0 || pontuacao > 100)
                {
                    printf("Pontuacao invalida! Digite um valor entre 0 e 100.\n");
                }
            } while (pontuacao < 0 || pontuacao > 100);
            pontuacao_total += pontuacao;
        }
        media = pontuacao_total / 3.0;
        printf("\n=== RESULTADO ===\n");
        printf("Cadete: %d\n", codigo_cadete);
        printf("Pontuacao total: %d pontos\n", pontuacao_total);
        printf("Media: %.2f\n", media);
        if (media >= 85.0)
        {
            printf("Resultado: Comandante da missao\n");
            printf("Treinamento concluido com excelencia.\n");
        }
        else if (media >= 70.0)
        {
            printf("Resultado: Piloto aprovado\n");
            printf("Cadete autorizado para a missao.\n");
        }
        else if (media >= 50.0)
        {
            printf("Resultado: Cadete em recuperacao\n");
            printf("Novo treinamento recomendado.\n");
        }
        else
        {
            printf("Resultado: Treinamento reiniciado\n");
            printf("Cadete ainda nao autorizado.\n");
        }
        if (pontuacao_total == 300)
        {
            printf("PONTUACAO MAXIMA!\n");
        }
        printf("\nDeseja avaliar outro cadete? (1-Sim / 0-Nao): ");
        scanf("%d", &continuar);
    } while (continuar == 1);
    printf("\nSistema encerrado.\n");
    return 0;
}