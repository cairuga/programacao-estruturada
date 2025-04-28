#include <stdio.h>

int dobro(int valor) {
    return valor * 2;
}

int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    printf("O dobro de %d é %d.", numero, dobro(numero));
    return 0;
}
