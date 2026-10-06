#include<stdio.h>
#include<locale.h>
#define TAM 8

int main()
{
    setlocale(LC_CTYPE, "");

    int i;
    int valores[TAM];
    int acima_media=0;
    float soma=0, media;

    for(i=0; i<TAM; i++){
        printf("Digite o %d° valor: ", (i+1));
        scanf("%d", &valores[i]);
        soma += valores[i];
    }

    media = soma/TAM;

    for(i=0; i<TAM; i++){
        if(valores[i] > media){
            acima_media++;
        }
    }

    printf("Média: %.2f", media);
    printf("\nValores acima da média: %d", acima_media);
    return 0;
}
