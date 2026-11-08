#include <stdio.h>
#define MAX 10
typedef struct
{
    int rgm;
    float nota1;
    float nota2;
    float media;
} Aluno;
void calcular_media(Aluno *aluno)
{
    aluno->media = (aluno->nota1 + aluno->nota2) / 2;
}
void cadastrar_aluno(Aluno alunos[], int *quantidade)
{
    if (*quantidade >= MAX)
    {
        printf("\nLimite de 10 alunos atingido!\n");
        return;
    }
    printf("\nDigite o RGM: ");
    scanf("%d", &alunos[*quantidade].rgm);
    printf("Digite a primeira nota: ");
    scanf("%f", &alunos[*quantidade].nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &alunos[*quantidade].nota2);
    calcular_media(&alunos[*quantidade]);
    (*quantidade)++;
    printf("\nAluno cadastrado com sucesso!\n");
}
void consultar_aluno(Aluno alunos[], int quantidade)
{
    int rgm, i;
    printf("\nDigite o RGM para consulta: ");
    scanf("%d", &rgm);
    for (i = 0; i < quantidade; i++)
    {
        if (alunos[i].rgm == rgm)
        {
            printf("\nRGM: %d\n", alunos[i].rgm);
            printf("Nota 1: %.2f\n", alunos[i].nota1);
            printf("Nota 2: %.2f\n", alunos[i].nota2);
            printf("Media: %.2f\n", alunos[i].media);
            return;
        }
    }
    printf("\nAluno nao encontrado!\n");
}
void listar_alunos(Aluno alunos[], int quantidade)
{
    int i;
    if (quantidade == 0)
    {
        printf("\nNenhum aluno cadastrado.\n");
        return;
    }
    printf("\n===== LISTA DE ALUNOS =====\n");
    for (i = 0; i < quantidade; i++)
    {
        printf("\nRGM: %d\n", alunos[i].rgm);
        printf("Nota 1: %.2f\n", alunos[i].nota1);
        printf("Nota 2: %.2f\n", alunos[i].nota2);
        printf("Media: %.2f\n", alunos[i].media);
    }
}
int main()
{
    Aluno alunos[MAX];
    int quantidade = 0;
    int opcao;
    do
    {
        printf("\n===== SISTEMA ACADEMICO =====\n");
        printf("1 - Cadastrar aluno\n");
        printf("2 - Consultar aluno por RGM\n");
        printf("3 - Listar alunos\n");
        printf("4 - Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            cadastrar_aluno(alunos, &quantidade);
            break;
        case 2:
            consultar_aluno(alunos, quantidade);
            break;
        case 3:
            listar_alunos(alunos, quantidade);
            break;
        case 4:
            printf("\nEncerrando o sistema...\n");
            break;
        default:
            printf("\nOpcao invalida! Tente novamente.\n");
        }
    } while (opcao != 4);
    return 0;
}