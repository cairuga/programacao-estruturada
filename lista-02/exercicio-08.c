#include <stdio.h>

void ler_numero() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    printf("Você informoou o número: %d\n", numero);
}

int main() {
    int quantidade;
    printf("Quantos números você deseja ler? ");
    scanf("%d", &quantidade);
    for (int i = 0; i < quantidade; i++) {
        ler_numero();  
    }
    return 0;
}
