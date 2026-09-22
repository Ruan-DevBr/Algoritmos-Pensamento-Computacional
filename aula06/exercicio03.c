#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_CTYPE, "");
    int i, num, soma_impares = 0;

    do {
        printf("Digite um número: ");
        scanf("%d", &num);
        if(num % 2 != 0){
            soma_impares += num;
        }
    } while(num>0);
    printf("\nSoma dos Números Impoares: %d", soma_impares);

    return 0;
}
