#include <stdio.h>

void reais(float valor) {
    printf("R$ %.2f", valor);
}

int main() {
    float valor;
    printf("Digite um valor: ");
    scanf("%f", &valor);
    reais(valor);
    return 0;
}
