#include <stdio.h>

void consolidarTotais(float vendasRegionais[3][4], float totaisAnuais[3])
{
    for (int i = 0; i < 3; i++)
    {
        totaisAnuais[i] = 0;

        for (int j = 0; j < 4; j++)
        {
            totaisAnuais[i] += vendasRegionais[i][j];
        }
    }
}

int main(void)
{
    float vendasRegionais[3][4] = {
        {15000.00, 18000.00, 20000.00, 22000.00},
        {12000.00, 14000.00, 16000.00, 19000.00},
        {25000.00, 23000.00, 27000.00, 30000.00}};

    float totaisAnuais[3];

    printf("=== VENDAS POR REGIAO E TRIMESTRE ===\n\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Regiao %d: ", i + 1);

        for (int j = 0; j < 4; j++)
        {
            printf("R$ %.2f ", vendasRegionais[i][j]);
        }

        printf("\n");
    }

    consolidarTotais(vendasRegionais, totaisAnuais);

    printf("\n=== FATURAMENTO ANUAL POR REGIAO ===\n\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Regiao %d: R$ %.2f\n", i + 1, totaisAnuais[i]);
    }

    return 0;
}