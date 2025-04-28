#include <stdio.h>

void saudacao(char nome[20], char turno) {
    switch (turno) {
        case 'M': case 'm':
            printf("Bom dia, %s!", nome);
            break;
        case 'T': case 't':
            printf("Boa tarde, %s!", nome);
            break;
        case 'N': case 'n':
            printf("Boa noite, %s!", nome);
            break;
        default: 
            printf("Olá, %s!", nome);
    }
}

int main() {
    char nome[20], turno;
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite o turno (m, t ou n): ");
    scanf(" %c", &turno);
    saudacao(nome, turno);
    return 0;
}
