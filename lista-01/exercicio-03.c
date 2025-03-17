#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int opcao;
    float saldo = 1000, valor;

    do {
        printf("Esolha uma operação:");
        printf("\n1 - Depositar");
        printf("\n2 - Sacar");
        printf("\n3 - Consultar saldo");
        printf("\n4 - Sair");        
        
        printf("\n\nOpção escolhida: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Informe o valor do depósito: ");
                scanf("%f", &valor);
                saldo = saldo + valor;
                break;
            case 2:
                printf("Informe o valor do saque: ");
                scanf("%f", &valor);
                if (valor > saldo) printf("Saldo insuficiente!");
                else saldo = saldo - valor;
                break;
            case 3:
                printf("Saldo em conta: %.2f", saldo);
                break;
            case 4:
            	  //poderíamos deixar apenas um break aqui
            	  //mas vamos utilizar return para encessar a função main
                return 0;
            default:
                printf("Opção inválida!");
        }        

        printf("\n\nPressione ENTER para continuar...");
        setbuf(stdin, 0); // limpa o buffer de entrada
        getchar(); 

	/* Alternativas para continuar com qualquer tecla, e não apenas com o Enter
	a) usando o getch()
	- Precisa da biblioteca conio.h  #include <conio.h>
	- troque o getchar() por getch()
	- só funciona no Windows
		
	b) usando o system("pause") 
	- troque as três linhas (printf, setbuf, getchar) por system("pause");
	- o comando já imprime o texto "Pressione qualquer telca para continuar..."		
	- só funciona no Windows
	*/
                
        system("cls"); // system("clear"); no Linux ou Mac
        
    } while (opcao != 4);
    
    return 0;
}
