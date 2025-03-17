// Este exemplo assume que não há dois alunos com a mesma idade!
#include <stdio.h>

int main() {

    int qtd_alunos, i;
    float soma = 0, media;
    int idade_mais_novo, idade_mais_velho;
    int pos_mais_velho;
    
    printf("Informe a quantidade de alunos: ");
    scanf("%d", &qtd_alunos);    
    
    int idades[qtd_alunos];
    float notas[qtd_alunos];

    // leitura dos dados
    for (i=0; i<qtd_alunos; i++) {
        printf("\nAluno %d\n", i+1); //i+1 para começar em 1
        printf("Idade: "); 
        scanf("%d", &idades[i]);
        printf("Nota: "); 
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }
    
    //cálculo da média
    media = soma / qtd_alunos;
    printf("\nA nota média da turma é %.1f", media);
    
    // há diversas estratégias para encontrarmos valores
    // máximos e mínimos de um conjunto. Por exemplo, para
    // o aluno mais novo vamos assumir que a menor idade está
    // na posição 0 do vetor (o mesmo vale o aluno mais velho).
    // Então, percorremos o vetor e comparamos cada idade com 
    // a menor até aquele momento e trocamos se for ainda menor!

    idade_mais_novo = idades[0];
    idade_mais_velho = idades[0];
    pos_mais_velho = 0; // vamos precisar para achar a nota dele

    for (i=0; i<qtd_alunos; i++) {
        //buscando o mais novo
        if (idades[i] < idade_mais_novo) {
            idade_mais_novo = idades[i];
        }
        
        //buscando o mais velhor
        if (idades[i] > idade_mais_velho) {
            idade_mais_velho = idades[i];
            pos_mais_velho = i;
        }
    }

    printf("\nIdade do mais novo: %d", idade_mais_novo);
    printf("\nNota do mais velho: %.1f", notas[pos_mais_velho]);

    // Esta é apenas uma estratégia, há outras formas!
    // Desafio 1: implemente sem a variável idade_mais_velho
    // Desafio 2: implemente com um único for

    return 0;
}
