#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float potencia, horas_dia, consumo;

    printf("Potencia do equipamento (W)? ");
    scanf("%f", &potencia);

    printf("Horas de uso por dia? ");
    scanf("%f", &horas_dia);

    consumo = (potencia * horas_dia * 30) / 1000;

    printf("Consumo mensal: %.2f kWh\n", consumo);
}
