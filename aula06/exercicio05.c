#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_CTYPE, "");
    int conta = 12345, senha = 123;
    int user, pass, tentativas = 3;

    while(1){
        printf("\n\nDigite o usúario: ");
        scanf("%d", &user);
        printf("Digite a senha: ");
        scanf("%d", &pass);
        if(user == conta && pass == senha){
            printf("Logado");
            break;
        } else if(tentativas > 0) {
            tentativas--;
            printf("\nDados incorretos");
            printf("\nVocê ainda tem %d tentativas", tentativas);
        } else {
            printf("Usuário bloqueado");
            break;
        }
    }

}
