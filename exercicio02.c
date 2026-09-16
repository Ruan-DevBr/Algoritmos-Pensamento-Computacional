#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    int hora, minutos, minutosTotais;

    printf("Hora?");
    scanf("%d", &hora);

    printf("Minutos?");
    scanf("%d", &minutos);



    minutosTotais = hora * 60 + minutos;

    printf("%Já se passaram %d ", minutosTotais, " Desde o inicio do dia");

}
