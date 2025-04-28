#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void adivinhar(int segredo) {
    int numero;
    printf("Adivinhe um número entre 1 e 10: ");
    scanf("%d", &numero);
    if (numero == segredo) {
        printf("Parabéns! Você acertou!\n");
    } else {
        printf("Que pena, você errou! O número era %d.\n", segredo);
    }
}

int main() {
    srand(time(NULL));
    int segredo = rand() % 10 + 1;
    adivinhar(segredo);
    segredo = rand() % 10 + 1;
    adivinhar(segredo);
    segredo = rand() % 10 + 1;
    adivinhar(segredo);
    return 0;
}
