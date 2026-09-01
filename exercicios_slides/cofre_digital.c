#include <stdio.h>

int main() {
    
    char senha[4] = "";
    #define true 1;

    
    while (contador = 1) {

        printf("Digite sua senha: ");
        scanf("%d", &senha);

        if (senha == "9999") {
            printf("CODIGO DE EMERGENCIA!!!");
            break;
        }
        
    }

    printf("Limite excedido, por favor tente novamente mais tarde.")
}