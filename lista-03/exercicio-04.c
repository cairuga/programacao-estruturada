#include <stdio.h>

int* menor(int* x, int* y) {
    if (*x <= *y) return x;
    else return y;
}

int main() {
    int valor1, valor2;
    int* menor_valor;
    
    printf("Informe o valor 1: ");
    scanf("%d", &valor1);
    
    printf("Informe o valor 2: ");
    scanf("%d", &valor2);
    
    menor_valor = menor(&valor1, &valor2);
    printf("O menor valor é %d.", *menor_valor);
    
    return 0;
}
