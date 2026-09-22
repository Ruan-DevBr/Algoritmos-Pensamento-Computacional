#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_CTYPE, "");
    int i, num;

    printf("Digite um número");
    scanf("%d", &num);

    printf("Tabuada do Número %d", num);

    for(i = 0; i <= 20; i+=2) {
        printf("\n%d x %d = %d", num, i, (num*i));
    }

    return 0;
}
