#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, delta, x1, x2;

    printf("Calculando uma equacao de 2 grau: \n");
    printf("Digite o valor de A: ");
    scanf("%i", &a);
    printf("Digite o valor de B: ");
    scanf("%i", &b);
    printf("Digite o valor de C: ");
    scanf("%i", &c);
    
    delta = (pow(b,2)) - 4*a*c;
    x1 = (-b + sqrt(delta)) / 2*a;
    x2 = (-b - sqrt(delta)) / 2*a;

    if(delta>0)
    printf("As raizes dessa equacao sao: x1=%i e x2=%i", x1,x2);
    else
    printf("Nao existe raizes reais");
    return 0;
}