#include <stdio.h>

int main()
{
    int idade, anoAtual = 2026;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    int anoNascimento = anoAtual - idade;

    printf("O ano que voce nasceu e: %d", anoNascimento);

    return 0;
}