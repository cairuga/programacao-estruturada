#include <stdio.h>

void transposta(int matriz[3][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    transposta(matriz);
    return 0;
}
