
#include <stdio.h>

void formatarTamanho(long tamanhoBytes) {
    double tamanhoMB = (double) tamanhoBytes / (1024 * 1024);

    printf("Tamanho formatado: %.2f MB\n", tamanhoMB);
}

int main(void) {
    long tamanhoBytes = 5242880;

    printf("Tamanho bruto: %ld bytes\n", tamanhoBytes);

    formatarTamanho(tamanhoBytes);

    return 0;
}