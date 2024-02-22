#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero(1 ate 7): ");
    scanf("%i", &num);
    printf("O dia da semana correspondente: \n");
    switch (num)
    {
    case 1:
        printf("Domingo!");
        break;
    case 2:
        printf("Segunda-feira!");
        break;
    case 3:
        printf("Terça-feira!");
        break;
    case 4:
        printf("Quarta-feira!");
        break;
    case 5:
        printf("Quinta-feira!");
        break;
    case 6:
        printf("Sexta-feira!");
        break;
    case 7:
        printf("Sabado!");
        break;
    default:
        printf("Digite um numero de 1 ate 7...");
        break;
    }
    return 0;
}