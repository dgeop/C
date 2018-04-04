#include <stdio.h>

void main()
{
    float a, b;
    printf("Digite o primeiro valor: ");
    scanf("%f", &a);

    while (a < 0) {
        printf("Valor invalido, tente novamente!\n");
        printf("Digite o primeiro valor: ");
        scanf("%f", &a);
    }

    printf("Digite o segundo valor: ");
    scanf("%f", &b);

    while (b < 0) {
        printf("Valor invalido, tente novamente!\n");
        printf("Digite o segundo valor: ");
        scanf("%f", &b);
    }

    printf("Valores digitados: a = %f b = %f\n", a, b);
    printf("\nO resultado eh %f", a + b);
}
