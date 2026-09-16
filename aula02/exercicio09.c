#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, distancia;

    printf("Digite a coordenada x do 1º ponto: ");
    scanf("%lf", &x1);

    printf("Digite a coordenada y do 1º ponto: ");
    scanf("%lf", &y1);

    printf("Digite a coordenada x do 2º ponto: ");
    scanf("%lf", &x2);

    printf("Digite a coordenada y do 2º ponto: ");
    scanf("%lf", &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distância entre os pontos é %.2f\n", distancia);
}
