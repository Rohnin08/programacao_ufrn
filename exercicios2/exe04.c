#include <stdio.h>

int main()
{
    int altura = 0, opcao;

    printf("Digite a altura da piramide: ");
    scanf("%d", &altura);

    if (altura < 1 || altura > 20)
    {
        printf("Altura invalida\n");
        return 1;
    }

    for (int i = 0; i <= altura; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    do
    {
        printf("Deseja desenhar novamente? (1-sim, 0-nao): ");
        scanf("%d", &opcao);

        if (opcao != 0 && opcao != 1)
        {
            printf("Opcao invalida! Digite 1 ou 0.\n");
            continue; // volta ao início do do...while interno, pede de novo
        }

        break; // opção válida, sai do laço interno
    } while (1);

    while (opcao == 1)
        ;

    return 0;
}