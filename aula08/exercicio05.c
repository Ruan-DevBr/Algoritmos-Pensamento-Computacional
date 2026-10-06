#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");
    float notas[3][4];
    float medias[3] = {0.0, 0.0, 0.0};
    int melhor_estudante = 0;

    for (int i = 0; i < 3; i++) {
        float soma = 0.0;
        for (int j = 0; j < 4; j++) {
            printf("Digite a %d° nota do %d° estudante: ", j + 1, i + 1);
            scanf("%f", &notas[i][j]);
            soma += notas[i][j];
        }
        medias[i] = soma / 4.0;

        if (medias[i] > medias[melhor_estudante]) {
            melhor_estudante = i;
        }
    }

    printf("\nSaida:\n");
    for (int i = 0; i < 3; i++) {
        printf("Media do estudante %d: %.2f\n", i + 1, medias[i]);
    }
    printf("Estudante com a maior media: Estudante %d\n", melhor_estudante + 1);

    return 0;
}
