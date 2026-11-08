#include <stdio.h>

int main()
{
    int dias;
    float valor_tvendas;
    float total_vendas = 0;
    printf("Digite a quantidade de dias: ");
    scanf("%d", &dias);
    for (int i = 0; i < dias; i++)
    {
        printf("Digite o valor das vendas do dia %d: ", i + 1);
        scanf("%f", &valor_tvendas);
        total_vendas += valor_tvendas;
    }
    printf("O valor total das vendas e: %.2f\n", total_vendas);
    return 0;
}