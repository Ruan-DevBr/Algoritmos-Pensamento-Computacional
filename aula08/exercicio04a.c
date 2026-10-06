#include<stdio.h>
#include<locale.h>
#define LIN 3
#define COL 4

int main()
{
    setlocale(LC_CTYPE, "");
    const char *dias_semana[] = {"qua", "qui", "sex", "sab"};
    const char *produtos[] = {"café", "bolo", "coxinha"};
    int i, j;
    int valores[LIN][COL], total_produtos, total_geral=0;

    for(i=0; i<LIN; i++){
        for(j=0; j<COL; j++){
            printf("Digite a qte do produto %d no dia %d: ", produtos[i], dias_semana[j]);
            scanf("%d", valores[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<LIN; i++){
        total_produtos = 0;
        for(j=0; j<COL; j++){
            total_produtos += valores[i][j];
        }
        total_geral += total_produtos;
        printf("Produto %d: %d unidades.\n", (i+1), total_produtos);
    }

    printf("Total Geral: %d unidades.\n", total_geral);
    return 0;
}
