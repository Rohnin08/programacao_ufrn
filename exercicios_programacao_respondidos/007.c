
#include <stdio.h>

typedef int (*MiddlewareHandler)(int requestId);

int autenticar(int requestId) {
    printf("Autenticando requisicao %d...\n", requestId);
    return 1;
}

int logar(int requestId) {
    printf("Registrando requisicao %d no log...\n", requestId);
    return 1;
}

int main(void) {
    int requestId = 101;
    int resultado = 1;

    MiddlewareHandler middlewares[2] = {
        autenticar,
        logar
    };

    printf("ID da requisicao: %d\n\n", requestId);

    for (int i = 0; i < 2; i++) {
        if (middlewares[i](requestId) == 0) {
            resultado = 0;
            break;
        }
    }

    if (resultado == 1) {
        printf("\nCadeia de middlewares executada com sucesso!\n");
    } else {
        printf("\nFalha na execucao da cadeia de middlewares.\n");
    }

    return 0;
}