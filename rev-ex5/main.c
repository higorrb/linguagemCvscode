#include <stdio.h>

int main()
{
    int i, num;

    printf("Digite um numero: ");
    scanf("%i", &num);

    printf("Tabuada do %i, apenas impares\n", num);

    for(i=1; i<11; i++){
        if(i % 2 == 1)
        printf("%i x %i = %i\n", num, i, num*i);
    }

    return 0;
}