#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float vel_inicial, ang_lanca, alc_horizontal, radianos;
    const double g = 9.81;

    printf("Qual é a velocidade inicial (m/s): ");
    scanf("%f", &vel_inicial);

    printf("Qual o ângulo de lançamento em graus: ");
    scanf("%f", &ang_lanca);

    radianos = ang_lanca * M_PI / 180.0;
    alc_horizontal = (vel_inicial * vel_inicial * sin(2 * radianos)) / g;

    printf("O alcance horizontal estimado é %2.f metros.\n", alc_horizontal);
}
