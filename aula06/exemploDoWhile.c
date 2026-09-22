#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_CTYPE, "");
    int i, num = 1;

    while(num<=20){
        printf("\nDigite um número inteiro: ");
        scanf("%d", &i);
    }

    for(i = 0; i <= 20; i+=2) {
        printf("\n%d x %d = %d", num, i, (num*i));
    }

    return 0;
}
