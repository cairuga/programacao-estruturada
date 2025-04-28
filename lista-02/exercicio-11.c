#include <stdio.h>

void imprimir_invertido(int vetor[], int tamanho) {
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
}

int main() {
    int quantidade;
    printf("Quantos números você deseja informar? ");
    scanf("%d", &quantidade);
    int numeros[quantidade];
    for (int i = 0; i < quantidade; i++) {
        printf("Informe o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    printf("Os números informados em ordem inversa são: ");
    imprimir_invertido(numeros, quantidade);
    return 0;
}
