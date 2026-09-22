#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_CTYPE, "");
    int i;
    float nota, soma = 0, media, maior = 0;

    for(i = 0; i < 5; i++){
        printf("Digite a nota do %dº estudante: ", (i + 1));
        scanf("%f", &nota);
        soma += nota;
        if(nota > maior) {
        maior = nota;
    }
    }

    media = soma / i;
    printf("\nMedia da Turma: %.2f", media);
    printf("\nMaior nota da Turma: %.2f", maior);
    return 0;
}
