#include <stdio.h>

int main()
{
    float valorReais, cotacaoDolar = 6.00;

    printf("Digite um valor em reais: ");
    scanf("%f", &valorReais);

    printf("Valor em dolares: %.2f", valorReais * cotacaoDolar);
}