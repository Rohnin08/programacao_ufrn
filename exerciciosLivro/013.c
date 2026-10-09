#include <stdio.h>

float latencias[5] = {120.5, 340.0, 85.2, 200.1};

float analisarLatencias(float latencias[]) {
    for (int i  = 0; i <= 5; i++) {
        printf("%f",latencias[i]);
    }

}

int main() {
    analisarLatencias(latencias);

    return 0;
}
