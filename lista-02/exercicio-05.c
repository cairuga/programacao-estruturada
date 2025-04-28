#include <stdio.h>

float menor(float valor1, float valor2) {
    if (valor1 < valor2) {
        return valor1;
    } else {
        return valor2;
    }
}

int main() {
    float valor1, valor2;
    printf("Digite o valor 1: ");
    scanf("%f", &valor1);
    printf("Digite o valor 2: ");
    scanf("%f", &valor2);
    printf("O menor valor é %f.", menor(valor1, valor2));
    return 0;
}
