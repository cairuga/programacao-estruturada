#include <stdio.h>

void ler_vetor(int* vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Informe o valor para a posição %d: ", i);
        scanf("%d", vetor+i);
    }
}

int somar(int* vetor, int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += *(vetor+i);
    }
    return soma;
}

int imprimir(int* vetor, int tamanho) {
    printf("Vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", *(vetor+i));
    }
    printf("\n");
}

void ordenar(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - 1 - i; j++) {
            if (*(vetor + j) > *(vetor + j + 1)) {
                int temp = *(vetor + j);
                *(vetor + j) = *(vetor + j + 1);
                *(vetor + j + 1) = temp;
            }
        }
    }
}

int main() {
    // a)
    int tamanho;
    printf("Qual o tamanho? ");
    scanf("%d", &tamanho);
    int valores[tamanho];
    
    // b)
    ler_vetor(valores, tamanho);
    
    // c
    int soma = somar(valores, tamanho);
    printf("Soma dos valores: %d\n", soma);
    
    // d
    imprimir(valores, tamanho);
    
    // e
    ordenar(valores, tamanho);
    imprimir(valores, tamanho);
    
    return 0;
}
