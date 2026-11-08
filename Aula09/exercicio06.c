#include <stdio.h>

int main()
{
    int opcao;
    do
    {
        printf("\n===== MENU =====\n");
        printf("1 - Cadastrar consumo\n");
        printf("2 - Exibir relatorio\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Cadastrar consumo selecionado.\n");
            break;
        case 2:
            printf("Exibir relatorio selecionado.\n");
            break;
        case 3:
            printf("Encerrando o programa...\n");
            break;
        default:
            printf("Opcao invalida!\n");
        }
    } while (opcao != 3);
    return 0;
}