#include <stdio.h>
int main()
{
    FILE *arquivo;
    int codigo, quantidade = 0;
    double valor, total = 0.0, maior = 0.0;
    arquivo = fopen("vendas.txt", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo vendas.txt.\n");
        return 1;
    }
    while (fscanf(arquivo, "%d %lf", &codigo, &valor) == 2)
    {
        quantidade++;
        total += valor;
        if (quantidade == 1 || valor > maior)
        {
            maior = valor;
        }
    }
    fclose(arquivo);
    printf("Quantidade de vendas: %d\n", quantidade);
    printf("Total vendido: R$ %.2f\n", total);
    printf("Maior venda: R$ %.2f\n", maior);
    return 0;
}