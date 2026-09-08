#include <stdio.h>

int main()
{
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 0)
    {
        goto erro_idade;
    }

    printf("Idade cadastrada com sucesso: %d anos.\n", idade);
    return 0;

erro_idade:
    printf("Erro de validacao: A idade nao pode ser nagativa.\n");
    return 1;
}