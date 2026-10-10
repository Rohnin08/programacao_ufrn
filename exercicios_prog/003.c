#include <stdio.h>

void calcularMediaMovel(float original[5], float suavizado[5])
{
    suavizado[0] = original[0];
    suavizado[4] = original[4];

    for (int i = 1; i < 4; i++)
    {
        suavizado[i] = (original[i - 1] + original[i] + original[i + 1]) / 3;
    }
}

int main()
{

    float faturamento[5] = {1200.0, 1800.0, 1500.0, 3000.0, 2100.0};

    float faturamentoSuavizado[5] = {};

    calcularMediaMovel(faturamento, faturamentoSuavizado);

    printf("=== Faturamento Bruto ===\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%.1f\n", faturamento[i]);
    }

    printf("=== Faturamento Suavizado ===\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%.1f\n", faturamentoSuavizado[i]);
    }
}