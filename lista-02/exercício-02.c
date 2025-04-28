#include <stdio.h>

float dobro_float(float valor) {
    return valor * 2;
}

int main() {
    float numero;
    printf("Digite um número: ");
    scanf("%f", &numero);
    printf("O dobro de %f é %f.", numero, dobro_float(numero));
    return 0;
}
