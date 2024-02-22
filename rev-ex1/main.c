#include <stdio.h>

int main()
{
    int a, b, c, d, e, soma;
    printf("Digite um numero: ");
    scanf("%i", &a);
    printf("Digite um numero: ");
    scanf("%i", &b);
    printf("Digite um numero: ");
    scanf("%i", &c);
    printf("Digite um numero: ");
    scanf("%i", &d);
    printf("Digite um numero: ");
    scanf("%i", &e);

    soma = a+b+c+d+e;
    printf("A soma dos numeros vale: %i", soma);

    return 0;
}
