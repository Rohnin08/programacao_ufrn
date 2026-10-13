#include <stdio.h>
#include <string.h>

// Separa os campos de uma linha CSV utilizando o ponto e vírgula
void parsearLinhaCSV(char linha[])
{
    char *campo;

    campo = strtok(linha, ";");
    printf("Nome: %s\n", campo);

    campo = strtok(NULL, ";");
    printf("Idade: %s\n", campo);

    campo = strtok(NULL, ";");
    printf("Salario: %s\n", campo);

    campo = strtok(NULL, ";");
    printf("Cargo: %s\n", campo);
}

int main(void)
{
    char linha[] = "Carlos Eduardo;34;9500.00;Desenvolvedor";

    printf("Linha bruta recebida: %s\n\n", linha);

    parsearLinhaCSV(linha);

    return 0;
}