#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_CTYPE, "");
    while(1){
        printf("Digite um número par para sair");
        scanf("%d", &num);
        if(num%2 ==0){
            break;
        }
            soma += num;
    }
    printf("soma = %d\n", soma);
    return 0;
}
