 #include <stdio.h>

int main() {
    float temperaturas[7];
    float soma = 0.0;
    float media = 0.0;
    float maior_temp;
    float menor_temp;
    int acima_da_media = 0;

    for (int i = 0; i < 7; i++) {
        printf("Digite a temperatura do %d° dia: ", i + 1);
        scanf("%f", &temperaturas[i]);
        soma += temperaturas[i];

        if (i == 0) {
            maior_temp = temperaturas[i];
            menor_temp = temperaturas[i];
        } else {
            if (temperaturas[i] > maior_temp) {
                maior_temp = temperaturas[i];
            }
            if (temperaturas[i] < menor_temp) {
                menor_temp = temperaturas[i];
            }
        }
    }

    media = soma / 7.0;

    for (int i = 0; i < 7; i++) {
        if (temperaturas[i] > media) {
            acima_da_media++;
        }
    }

    printf("\nMedia semanal: %.2f\n", media);
    printf("Maior temperatura: %.2f\n", maior_temp);
    printf("Menor temperatura: %.2f\n", menor_temp);
    printf("Dias acima da media: %d\n", acima_da_media);

    return 0;
}
