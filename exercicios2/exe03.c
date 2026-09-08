#include <stdio.h>

int main()
{
    int n = 0;

    printf("Digite o número de medições: ");
    scanf("%d", &n);

    float soma = 0, media = 0, maior = 0, menor = 0, temp;
    int contador_validas = 0, febre = 0;

    for (int i = 0; i <= n; i++)
    {
        printf("Digite a temperatura: ");
        scanf("%f", &temp);

        if (temp < 30.0 || temp > 45.0)
        {
            printf("Temperatura invalida! Ignorando.\n");
            continue;
        }

        contador_validas++;
        soma += temp;

        if (contador_validas == 1)
        {
            maior = temp;
            menor = temp;
        }

        else
        {
            if (temp > maior)
                maior = temp;
            else if (temp < menor)
                menor = temp;
        }

        if (temp >= 37.5)
            febre++;

        // se chegamos na última medição e nenhuma foi válida ainda
        if (i == n - 1 && contador_validas == 0)
        {
            printf("Nenhuma medição válida.\n");
            break;
        }
    }

    if (contador_validas > 0)
    {
        float media = soma / contador_validas;

        printf("Média: %.1f\n", media);
        printf("Maior: %.1f\n", maior);
        printf("Menor: %.1f\n", menor);
        printf("Pacientes com febre: %d\n", febre);

        // Desafio: classificação
        if (media >= 37.5)
            printf("Alerta de febre generalizada\n");
        else if (media >= 36.0 && media <= 37.4)
            printf("Temperaturas normais\n");
        else
            printf("Possível hipotermia\n");
    }

    return 0;
}
