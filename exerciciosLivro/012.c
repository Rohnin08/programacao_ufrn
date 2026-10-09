#include <stdio.h>

int main()
{

    float I = 780000.00;

    float valor1, valor2, valor3;

    valor1 = (I * 46) / 100;
    valor2 = (I * 32) / 100;
    valor3 = (I * 22) / 100;

    printf("Os ganhadores receberam:\nGanhador1: R$%.2f\nGanhador2: R$%.2f\nGanhador3: R$%.2f", valor1, valor2, valor3);

    return 0;
}