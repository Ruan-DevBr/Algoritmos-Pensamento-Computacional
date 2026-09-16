#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    int primeiro_num, segundo_num, soma, subtracao, multiplicacao;

    printf("Digite o primeiro número: ");
    scanf("%d", &primeiro_num);

    printf("Digite o segundo número: ");
    scanf("%d", &segundo_num);

    soma = primeiro_num + segundo_num;
    subtracao = primeiro_num - segundo_num;
    multiplicacao = primeiro_num * segundo_num;

    printf("Soma %d", soma);
    printf("Subtração %d", subtracao);
    printf("Multiplicação %d", multiplicacao);

}
