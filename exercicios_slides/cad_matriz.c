#include <stdio.h>

int main()
{
    int infoUsuarios[10][4];

    for (int i = 0; i < 10; i++)
    {
        printf("[%d] usuario: \n", i + 1);
        printf("Seu ID:");
        scanf("%d", &infoUsuarios[i][0]);
        printf("Sua idade:");
        scanf("%d", &infoUsuarios[i][1]);
        printf("Numero de dependentes:");
        scanf("%d", &infoUsuarios[i][2]);
        printf("Digite sua renda mensal:");
        scanf("%d", &infoUsuarios[i][3]);
    }

    int id_busca;

    printf("Digite o ID do usuario: ");
    scanf("%d", id_busca);

    for (int i = 0; i < 10; i++)
    {
        if (infoUsuarios[i][0] == id_busca)
        {
            printf("Usuário[%d] encontrado:", id_busca);
            printf("ID: %d\nIdade: %d\nDependentes: %d\nRenda: %d\n", infoUsuarios[i][0], infoUsuarios[i][1], infoUsuarios[i][2], infoUsuarios[i][3]);
            break;
        }

        else
        {
            printf("Usuário não encontrado");
        }
    }

    return 0;
}