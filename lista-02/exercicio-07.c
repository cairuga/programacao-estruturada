#include <stdio.h>

float ponderada(float valor1, float valor2, int peso1, int peso2) {
    return (valor1 * peso1 + valor2 * peso2) / (peso1 + peso2);
}

int main() {
    float valor1, valor2;
    int peso1, peso2;
    printf("Digite o valor 1: ");
    scanf("%f", &valor1);
    printf("Digite o valor 2: ");
    scanf("%f", &valor2);
    printf("Digite o peso 1: ");
    scanf("%d", &peso1);
    printf("Digite o peso 2: ");
    scanf("%d", &peso2);
    printf("A média ponderada é: %.2f", ponderada(valor1, valor2, peso1, peso2));
    return 0;
}
