#include <stdio.h>

int main()
{
    char *senha = "senha";

    while (senha != "senha")
    {
        printf("Digite a senha: ");
        scanf("%s", senha);
    }

    return 0;
}