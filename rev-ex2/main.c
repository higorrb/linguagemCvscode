#include <stdio.h>

int main()
{
    int a, b, c, d, e, soma, maior;
    printf("Digite um numero: ");
    scanf("%i", &a);
    maior = a;
    printf("Digite um numero: ");
    scanf("%i", &b);
    if(b>maior){
        maior = b;
    }
    printf("Digite um numero: ");
    scanf("%i", &c);
    if(c>maior){
        maior = c;
    }
    printf("Digite um numero: ");
    scanf("%i", &d);
    if(d>maior){
        maior = d;
    }
    printf("Digite um numero: ");
    scanf("%i", &e);
    if(e>maior){
        maior = e;
    }

    soma = a+b+c+d+e;
    printf("A soma dos numeros vale: %i \n", soma);
    printf("A media dos numeros vale: %i \n", soma/5);
    printf("O maior numero vale: %i", maior);

    return 0;
}
