#include <stdio.h>

int status(float nota, int faltas) {
    if (nota >= 6 && faltas <= 4) {
        return 1;
    } else {
        return 0;
    }
}

void ficha(char nome[20], float nota, int faltas) {
    printf("Nome: %s\n", nome);
    printf("Nota: %.1f\n", nota);
    printf("Faltas: %d\n", faltas);
    printf("Status: ");
    if (status(nota, faltas) == 0) printf("Reprovado.");
    else printf("Aprovado.");   
}

int main() {
    char nome[20];
    float nota;
    int faltas;
    printf("Informe o nome: ");
    scanf("%s", nome);
    printf("Informe a nota: ");
    scanf("%f", &nota);
    printf("Informe as faltas: ");
    scanf("%d", &faltas);
    ficha(nome, nota, faltas);
    return 0;
}
