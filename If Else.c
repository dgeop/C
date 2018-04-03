#include <stdio.h>

void main()
{
    int a, b;
    a = 15;

    printf("Digite o valor: ");
    scanf("%d", &b);
    if(b != a)
        printf("\nO valor eh diferente de 15\n");
    else
        printf("\nO valor eh igual a 15\n");
}
