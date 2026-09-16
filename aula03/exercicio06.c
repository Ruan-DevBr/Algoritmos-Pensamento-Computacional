#include <stdio.h>
#include <locale.h>

int  main()
{
    setlocale(LC_CTYPE, "");

    float largura, comprimento, valorCaixa, areaTotal, quantCaixas, custCompra;

    printf("Qual é alargura da área (em metros)? ");
    scanf("%f", &largura);

    printf("Qual é o comprimento da área (em metros)? ");
    scanf("%f", &comprimento);

    printf("Qual é o valor de cada caixa? ");
    scanf("%f", &valorCaixa);

    areaTotal = largura * comprimento;
    quantCaixas = ceil(areaTotal / 2.5);
    custCompra = quantCaixas * valorCaixa;

    printf("Área total a ser revestida: %.2f\n", areaTotal);
    printf("A quantidade de caixas é: %0.f\n", quantCaixas);
    printf("Custo total da compra: R$ %.2f\n", custCompra);
}
