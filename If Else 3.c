#include <stdio.h>

void main()
{
    float a, b;
entrada1:
    printf("Digite o primeiro valor: ");
    scanf("%f", &a);
    if (a < 0) {
        printf("Numero invalido, tente novamente.\n");
        goto entrada1;
    }
entrada2:
    printf("Digite o segundo valor: ");
    scanf("%f", &b);
    if (b < 0) {
        printf("Numero invalido, tente novamente.\n");
        goto entrada2;
    }

    printf("Valores digitados: a = %f b = %f\n", a, b);
    printf("\nO resultado eh %f", a + b);
}
