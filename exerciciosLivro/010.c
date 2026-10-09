#include <stdio.h>

int main()
{
    float C, F;

    printf("Valor em cecius: ");
    scanf("%f", &C);

    F = C * (9.0 / 5.0) + 32.0;

    printf("Valor em Fahrenheit: %.2f", F);

    return 0;
}