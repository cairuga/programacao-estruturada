#include <stdio.h>

void trocar(float* x, float* y) {
    float auxiliar = *x;
    *x = *y;
    *y = auxiliar;
}

int main() {
    float valor1, valor2;
    
    printf("Informe o valor 1: ");
    scanf("%f", &valor1);
    
    printf("Informe o valor 2: ");
    scanf("%f", &valor2);
    
    printf("valor1 e valor2 valem %.2f e %.2f\n", valor1, valor2);
    trocar(&valor1, &valor2);
    printf("valor1 e valor2 valem %.2f e %.2f\n", valor1, valor2);
    
    return 0;
}
