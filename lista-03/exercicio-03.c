#include <stdio.h>

int maior(int* x, int* y) {
    if (*x >= *y) return *x;
    else return *y;
}

int main() {
    int valor1, valor2, maior_valor;
    
    printf("Informe o valor 1: ");
    scanf("%d", &valor1);
    
    printf("Informe o valor 2: ");
    scanf("%d", &valor2);
    
    maior_valor = maior(&valor1, &valor2);
    printf("O maior valor é %d.", maior_valor);
    
    return 0;
}
