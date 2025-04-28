#include <stdio.h>

float media(float valor1, float valor2) {
    return (valor1 + valor2) / 2;
}

int main() {
    float valor1, valor2;
    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);
    printf("A média é %f.", media(valor1, valor2));
    return 0;
}
