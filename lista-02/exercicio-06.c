#include <stdio.h>

int comparar(int valor1, int valor2) {
    if (valor1 > valor2) {
        return 1;
    } else if (valor1 < valor2) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    int numero1, numero2;
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);
    int resultado = comparar(numero1, numero2);
  
    if (resultado == 1) printf("O primeiro valor é maior do que o segundo.");
    else if (resultado == -1) printf("O primeiro valor é menor do que o segundo.");  
    else printf("Os valores são iguais.");
  
  return 0;
}
