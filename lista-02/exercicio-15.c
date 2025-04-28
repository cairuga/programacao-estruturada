#include <stdio.h>

int status(float nota, int faltas) {
    if (nota >= 6 && faltas <= 4) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    float nota;
    int faltas;
    printf("Informe a nota: ");
    scanf("%f", &nota);
    printf("Informe o número de faltas: ");
    scanf("%d", &faltas);
    if (status(nota, faltas) == 1) printf("Aprovado!");
    else printf("Reprovado!");
  
    return 0;
}
