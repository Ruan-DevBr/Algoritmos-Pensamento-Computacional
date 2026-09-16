#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float peso, altura, imc;

    printf("Qual e o peso da pessoa em kg? ");
    scanf("%f", &peso);

    printf("Qual e a altura da pessoa em metros? ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("O Indice de Massa Corporal e: %.2f\n", imc);

}
