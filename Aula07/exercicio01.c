#include <stdio.h>

int main()
{
    int negativos = 0, positivos = 0;
    int quantidade = 0;
    int maior_numero = 0;
    printf("quantos valores serao analizados?");
    scanf("%d", &quantidade);
    for (int i = 0; i <= quantidade; i++)
    {
        int valor;
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valor);
        if (valor > maior_numero)
        {
            maior_numero = valor;
        }
        if (valor > 0)
        {
            positivos++;
        }
        else if (valor < 0)
        {
            negativos++;
        }
    }
    printf("\nQuantidade de positivos: %d\n", positivos);
    printf("Quantidade de negativos: %d\n", negativos);
    printf("Maior numero: %d\n", maior_numero);
    return 0;
}