#include <stdio.h>

int main() {

    int idade;
    float peso;

    printf("Informe a idade do atleta: ");
    scanf("%d", &idade);

    printf("Informe o peso do atleta: ");
    scanf("%f", &peso);

    if (idade < 12) {
        if (peso < 40) printf("Infantil Leve");
        else printf("Infantil Pesado");
    } else if (idade < 18) {
        if (peso < 60) printf("Juvenil Leve");
        else printf("Juvenil Pesado");
    } else {
        if (peso < 75) printf("Adulto Leve");
        else if (peso < 90) printf("Adulto Médio");
        else printf("Adulto Pesado");
    }

    return 0;
}
