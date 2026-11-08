#include <stdio.h>
int main()
{
    char municipio[50];
    float temperatura;
    float soma = 0;
    float media;
    int abaixo_de_10 = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome do municipio %d: ", i + 1);
        scanf("%49s", municipio);
        printf("Digite a temperatura media: ");
        scanf("%f", &temperatura);
        soma += temperatura;
        if (temperatura < 10)
        {
            abaixo_de_10++;
        }
    }
    media = soma / 5;
    printf("\nTemperatura media da regiao: %.2f C\n", media);
    printf("Quantidade de municipios abaixo de 10 C: %d\n", abaixo_de_10);
    return 0;
}