
#include <stdio.h>
#include <string.h>

int buscarFlagConfig(int argc, char **argv) {
    char **ponteiro = argv;

    for (int i = 0; i < argc; i++, ponteiro++) {
        if (strcmp(*ponteiro, "--env=production") == 0) {
            return 1;
        }
    }

    return 0;
}

int main(int argc, char **argv) {
    printf("Total de argumentos recebidos: %d\n", argc);

    int producao = buscarFlagConfig(argc, argv);

    if (producao) {
        printf("Modo Produção\n");
    } else {
        printf("Modo Desenvolvimento\n");
    }

    return 0;
}