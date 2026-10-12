#include <stdio.h>

#define TAM 5

/*Função que calcula a média e identifica o pico de latência*/
void analisarLatencias(float vetor[], int tamanho, float *media, float *pico)
{
    float soma = 0; // Incialização da variavel soma
    *pico = vetor[0]; 

    for (int i = 0; i < tamanho; i++)
    {
        soma += vetor[i];
        if (vetor[i] > *pico)
        {
            *pico = vetor[i];
        }
    }

    *media = soma / tamanho; 
}

int main()
{
    float latencias[TAM] = {120.5, 340.0, 85.2, 510.8, 200.1}; /*array que armazena as latencias de valor fixo TAM 5 */
    float media, pico; 

    printf("=== Tempos de resposta registrados ===\n");
    for (int i = 0; i < TAM; i++)
    {
        printf("Requisicao %d: %.1f ms\n", i + 1, latencias[i]);
    }

    analisarLatencias(latencias, TAM, &media, &pico);

    printf("\n=== Resultado ===\n");
    printf("Lantencia media: %.1f ms\n", media);
    printf("Pico de latencia: %.1f ms\n", pico);

    return 0;
}