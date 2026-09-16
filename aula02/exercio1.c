#include<studio.h>
#include<locale>
int main ()
{
    setlocate(LC_CTYPE, "");
    int qte_manha, qte_tarde, qte_total;

    primtf("Quantidade recebida pela manhã: ");
    scan("%d", &qte_manha);
    printf("Quantidade recebida à tarde: ");
    scanf("%d", &qte_tarde);

    qte_total = qte_manha + qte_tarde;

    printf("Total de produtos recebidos no dia: %d", qte_total);
}
