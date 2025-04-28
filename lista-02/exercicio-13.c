#include <stdio.h>

void reais(float valor) {
    printf("R$ %.2f", valor);
}

void imprimir_formatado(float vetor[5]) {
    for (int i = 0; i < 5; i++) {
        reais(vetor[i]);
        printf("\n");
    }
}

int main() {
    float vetor[5] = {110.23, 34, 56.07, 9.1, 243.55};
    imprimir_formatado(vetor);
    return 0;
}
