#include <stdio.h>

int main()
{

    float velocidadeKmH, velocidadeMs;

    printf("Digite uma velocidade em Km/h: \n");
    scanf("%f", &velocidadeKmH);

    velocidadeMs = velocidadeKmH / 36;

    printf("A velocidade em M/s é: %f", velocidadeMs);

    return 0;
}