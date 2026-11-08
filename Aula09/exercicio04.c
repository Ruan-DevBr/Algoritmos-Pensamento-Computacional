#include <stdio.h>

int main()
{
    FILE *arquivo;
    char matricula[20];
    float nota, soma = 0.0, maior = 0.0, media;
    int estudantes = 0, aprovados = 0;
    arquivo = fopen("notas.txt", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo notas.txt.\n");
        return 1;
    }
    while (fscanf(arquivo, "%19s %f", matricula, &nota) == 2)
    {
        soma += nota;
        estudantes++;
        if (estudantes == 1 || nota > maior)
        {
            maior = nota;
        }
        if (nota >= 6.0)
        {
            aprovados++;
        }
    }
    fclose(arquivo);
    if (estudantes > 0)
    {
        media = soma / estudantes;
        printf("Estudantes: %d\n", estudantes);
        printf("Média da turma: %.2f\n", media);
        printf("Maior nota: %.2f\n", maior);
        printf("Quantidade de alunos aprovados: %d\n", aprovados);
    }
    else
    {
        printf("O arquivo não contém estudantes.\n");
    }
    return 0;
}