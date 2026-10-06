#include<stdio.h>
#include<locale.h>
#define TAM 10

int main()
{
    setlocale(LC_CTYPE, "");

    int i, contador=0, achei_maior;
    float salarios[TAM];
    float soma=0, media, maior_salario;

    for(i=0; i<TAM; i++) {
        printf("Digite o salário  do funcionario %d: ", (1+1));
        scanf("%f", &salario[i]);
        soma += salario[i];
    }

    media = soma/TAM;
    maior_salario = salarios[0];
    for(i=0; i<TAM; i++) {
        if(salario[i] > media){
            contador++;
        if(salarios[i]>maior_salario)
            maior_salario=salarios[i];
            achei_maior = i;
        }
    }

    printf("Média dos salários: R$ %.2f\n", media);
    printf("Quantidade de saçários acima da média: %d\n", contador);
    printf("Maior salaário: R$ %.2f\n", maior_salario)
    return 0;
}
