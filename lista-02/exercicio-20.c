#include <stdio.h>

// Com o que vimos até agora, não conseguir escrever uma função que retorne um vetor. 
// Por enquanto, vamos criar um procedimento cujo terceiro parâmetro é um vetor de 10 posições
// que receberá o resultado da concatenação.

void concatenar(int vetor1[5], int vetor2[5], int resultado[10]) {
  for (int i = 0; i < 5; i++) {
      resultado[i] = vetor1[i];
  }
  for (int i = 0; i < 5; i++) {
      resultado[i + 5] = vetor2[i];
  }
}

int main() {
  int vetor1[5] = {1, 2, 3, 4, 5};
  int vetor2[5] = {6, 7, 8, 9, 10};
  int vetor3[10]; 
  
  concatenar(vetor1, vetor2, vetor3);

  printf("Vetor resultado da concatenação:\n");
  for (int i = 0; i < 10; i++) {
      printf("%d ", vetor3[i]);
  }
  return 0;
}
