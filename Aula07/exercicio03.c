#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    int aluno, aprovado = 0, negativo = 0, i;
    float nota;
    for (i = 1; i <= 10; i++)
    {
        printf("Digite a nota do %dº aluno: ", i);
        scanf("%f", &nota);
        if (nota >= 6.0)
        {
            aprovado++;
        }
    }
    printf("Alunos aprovados: %d", aprovado);
}