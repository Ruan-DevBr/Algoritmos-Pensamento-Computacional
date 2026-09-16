#include <stdio.h>
#include <math.h>

int main() {

    setlocale(LC_CTYPE, "");

    float nt1, nt2;

    printf("Digite a primeira nota: \n");
    scanf("%f", &nt1);

    printf("Digite a segunda nota:\n");
    scanf("%f", &nt2);

    float media = (n1 * n2) /2;

    if(media >= 6){
        printf("Parabéns! Você foi aprovado com média %.2f\n", media);
    } else if(media >= 3.0){
        printf("Você está de exame de recuperação")
    } else{
        printf("Você foi reprovado com %.2f", media);
    }

    return 0;
}
