#include <stdio.h>

int main()
{
    int i, num, maior = 0;
    for(i=1; i<4; i++){
        printf("Digite um numero: ");
        scanf("%i", &num);

        if(num>maior){
            maior = num;
        }
    }
    printf("O maior numero digitado foi: %i", maior);
    return 0;
}