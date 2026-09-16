#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_CTYPE, "");

    char tipo_hospe;
    int quant_diarias;

	printf("Hospedagem Anália\n");
	printf("[S] Quarto simples\n");
	printf("[D] Quarto Duplo\n");
	printf("[T] Quarto Triplo\n");
    printf("Digite uma opção: \n");
    scanf(" %c", &tipo_hospe);

    printf("Digite a quantidade de diarias: \n");
    scanf(" %d", &quant_diarias);

    if(tipo_hospe == 's' || tipo_hospe == 'S'){
        printf("Total a pagar R$ %.2f", (quant_diarias*300));
    } else if(tipo_hospe == 'd' || tipo_hospe == 'D' {
        printf("Total a pagar R$ %.2f", (quant_diarias*450));
    } else if(tipo_hospe == 't' || tipo_hospe == 'T'){
        printf("Total a pagar R$ %.2f", (quant_diarias*600));
    } else {
        printf("Opçaõ inválida!!!!!");
    }

    return 0;
}

