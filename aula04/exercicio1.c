#include <stdio.h>
#include <math.h>

int main() {

    float numA;
    float numB;
    float numC;

    printf("Informe o valor de A:\n");
    scanf("%f", &numA);

    printf("Informe o valor de B:\n");
    scanf("%f", &numB);

    printf("Informe o valor de C:\n");
    scanf("%f", &numC);

    float bask = numB * numB - 4 * numA * numC;

    printf("O valor de bask: %f\n", bask);

    float equaP = (-numB + sqrt(bask)) / (2 * numA);
    float equaN = (-numB - sqrt(bask)) / (2 * numA);

    printf("A raiz positiva e: %f\n", equaP);
    printf("A raiz negativa e: %f\n", equaN);

    return 0;
}
