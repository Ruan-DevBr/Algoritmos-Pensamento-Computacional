#include <stdio.h>

int main()
{
    FILE *arquivo;
    char linha[200];
    arquivo = fopen("tabuada.txt", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    while (fgets(linha, sizeof(linha), arquivo) != NULL)
    {
        printf("%s", linha);
    }
    fclose(arquivo);
    return 0;
}