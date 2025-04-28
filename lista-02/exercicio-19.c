#include <stdio.h>

void ler_aluno(float dados[3]) {
    printf("Informe a nota 1: ");
    scanf("%f", &dados[0]);
    printf("Informe a nota 2: ");
    scanf("%f", &dados[1]);
    printf("Informe a frequencia: ");
    scanf("%f", &dados[2]);
}

int resultado(float dados[3]) {
    float media = (dados[0] + dados[1]) / 2;
    if (media >= 6 && dados[2] >= 75) {
        return 1;
    } else {
        return 0;
    }
}

void relatorio(float dados[][3], int alunos) {
    int aprovados = 0, reprovados = 0;
    for (int i = 0; i < alunos; i++) {
        printf("O aluno %d foi ", i + 1);
        if (resultado(dados[i]) == 1) {
            printf("aprovado.\n");
            aprovados++;
        } else { 
            printf("reprovado.\n"); 
            reprovados++;
        }
    }
    printf("Aprovados: %d.\n", aprovados);
    printf("Reprovados: %d.\n", reprovados);
} 

int main() {
    int alunos;
    printf("Informe a quantidade de alunos: ");
    scanf("%d", &alunos);
    float dados[alunos][3];
    for (int i = 0; i < alunos; i++) {
        ler_aluno(dados[i]);
    }
    relatorio(dados, alunos);
    return 0;
}
