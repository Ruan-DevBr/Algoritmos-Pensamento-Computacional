#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_CTYPE, "");

    float peso, altura;

    printf("Digite o seu Peso: \n");
    scanf("%f", &media_aln);

    printf("Digite a sua Altura \n");
    scanf("%f", &frequncia_aln);

    imc = peso * (altura*altura);

    if(imc < 20.0){
        printf("Você está abaixo do peso\n");
    } else if(imc >= 20.0 && imc < 25.0) {
        printf("Você está no peso normal");
    } else if(imc >= 25.0 && imc < 30.0){
        printf("Você está com sobre peso");
    } else if(imc >= 30.0 && imc < 40.0) {
        printf("Você está obeso");
    } else {
        printf("Você tem obesidade morbida.")
    }

    return 0;
}
