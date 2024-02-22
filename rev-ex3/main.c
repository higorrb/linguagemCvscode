#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Digite uma temperatura em Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius*1.8)+32;
    printf("A temperatura digita em Fahrenheit: %.1f", fahrenheit);
    return 0;
}
