
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removerEspacos(char *nome)
{
    char *inicio = nome;
    char *fim;

    while (isspace((unsigned char)*inicio))
    {
        inicio++;
    }

    fim = inicio + strlen(inicio);

    while (fim > inicio && isspace((unsigned char)*(fim - 1)))
    {
        fim--;
    }

    *fim = '\0';

    memmove(nome, inicio, (size_t)(fim - inicio + 1));
}

int main(void)
{
    char nomeUsuario[] = " User_Dev ";

    printf("Nome original: \"%s\"\n", nomeUsuario);

    removerEspacos(nomeUsuario);

    printf("Nome sanitizado: \"%s\"\n", nomeUsuario);
    printf("Novo comprimento: %zu\n", strlen(nomeUsuario));

    return 0;
}