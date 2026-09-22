#include<stdio.h>
#include<locale.h>
int main()
{
    int i, cpf;
    float preco = 1, total_compra = 0;

    printf("Digite o CPF do cliente: ");
    scanf("%d", &cpf);

    for(i = 0; i <= 5; i++){
        printf("Preço: R$ ");
        scanf("%f", &preco);

        total_compra = total_compra + preco;
    }
    printf("CPF: %d", cpf);
    printf("Total da compra R$ %.2f", total_compra);
    return 0;
}
