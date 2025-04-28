#include <stdio.h>

void imprimir(float vetor[5]) {
    for (int i = 0; i < 5; i++) {
        printf("%f ", vetor[i]);
    }
}

int main() {
    float numeros[5] = {1.75, 2.2, 3.43, 4.27, 5};
    imprimir(numeros);
    return 0;
}
