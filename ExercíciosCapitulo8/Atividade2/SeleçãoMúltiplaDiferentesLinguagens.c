#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//--Primeira Atividade--//
main() {
	setlocale(LC_ALL, "Portuguese");
	
	int valor, opcao, calc, cont;
	
	printf("1 - Calcular o quadrado de um número\n");
	printf("2 - Calcular o fatorial de um número\n");
	printf("3 - Sair do programa\n");
	printf("Escolha: ");
	scanf("%d", &opcao);
	
	switch(opcao) {
		case 1:
			printf("\nDigite o número para calcular o quadrado dele: ");
			scanf("%d", &valor);
			
			calc = valor * valor;
			printf("\nO quadrado de %d é %d", valor, calc);
		break;
		
		case 2:
			printf("\nDigite o número para calcular o fatorial dele: ");
			scanf("%d", &valor);
			
			calc = 1;
            cont = valor;
            
            while(cont > 0) {
                calc *= cont;
                cont--;
            }
            
			printf("\nO fatorial de %d é %d", valor, calc);
		break;
		
		case 3:
			printf("\nSaindo do Programa...");
		break;
	}
	
}


//--Segunda Atividade--//
print("1 - Calcular o quadrado de um número")
print("2 - Calcular o fatorial de um número")
print("3 - Sair do programa")
opcao = int(input("Escolha: "))

if opcao == 1:
    valor = int(input("Digite o número para calcular o quadrado dele: "))
    calc = valor * valor
    print(f"O quadrado de {valor} é {calc}")

elif opcao == 2:
    valor = int(input("Digite o número para calcular o fatorial dele: "))
    calc = 1
    cont = valor
    while cont > 0:
        calc *= cont
        cont -= 1
    print(f"O fatorial de {valor} é {calc}")

elif opcao == 3:
    print("Saindo do Programa...")

else:
    print("Opção inválida!")


//--Terceira Atividade--//
/* Para mim foi mais simples a implementação em C, 
isso porque eu já sabia programar nessa linguagem, 
além de que o código é bem mais legivel com a 
utilização do Switch. */



