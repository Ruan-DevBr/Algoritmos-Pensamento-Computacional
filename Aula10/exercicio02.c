#include <stdio.h>
int main()
{
    int n, i;
    char dia[20];
    float consumo;
    FILE *arquivo;
    printf("Quantidade de registros: ");
    scanf("%d", &n);
    arquivo = fopen("consumo.txt", "a");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    for (i = 0; i < n; i++)
    {
        printf("Dia: ");
        scanf("%19s", dia);
        printf("Consumo: ");
        scanf("%f", &consumo);
        fprintf(arquivo, "%s %.2f\n", dia, consumo);
    }
    fclose(arquivo);
    return 0;
}