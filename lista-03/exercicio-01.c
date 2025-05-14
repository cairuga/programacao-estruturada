#include <stdio.h>

int main() {
    // a)
    int numero = 25;
    int* ptr;
    ptr = &numero;
    
    // b)
    printf("Endereço da variável numero: %p\n", &numero);
    printf("Valor da variável numero: %d\n", numero);
    
    // c)
    printf("Endereço para o qual ptr aponta: %p\n", ptr);
    printf("Endereço em que ptr está alocado: %p\n", &ptr);
    printf("Valor para o qual ptr aponta: %d\n", *ptr);
    
    // d) 
    printf("Informe um novo valor: ");
    scanf("%d", ptr);
    printf("Novo valor de numero: %d\n", numero);
    
    // e)
    *ptr = *ptr + 150;
    printf("Valor final de numero: %d", *ptr);
    
    return 0;
}
