#include <stdio.h>

int verificarPerfilCompleto(int matriz[][4], int perfil)
{
    for (int i = 0; i < 4; i++)
    {
        if (matriz[perfil][i] == 0)
        {
            return 0;
        }

        else
        {
            return 1;
        }
    }
}

int main()
{

    int permissoes[3][4] = {
        {1, 0, 0, 1},
        {1, 1, 1, 1},
        {1, 0, 0, 1}};

    int perfil = verificarPerfilCompleto(permissoes, 0);

    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        printf("-----------------------------------------\n");
        printf("Perfil %-2d", i);

        for (int j = 0; j < 4; j++)
        {
            printf("%8d", permissoes[i][j]);
        }
    }

    perfil = verificarPerfilCompleto(permissoes, 1);

    if (perfil == 0)
    {
        printf("\nPerfil com acesso total");
    }

    else
    {
        printf("\nPerfil sem acesso total");
    }

    return 0;
}