#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//--Primeira Atividade--//
main() {
	setlocale(LC_ALL, "Portuguese");
	
	int valor, opcao, calc, cont;
	
	printf("1 - Calcular o quadrado de um n�mero\n");
	printf("2 - Calcular o fatorial de um n�mero\n");
	printf("3 - Sair do programa\n");
	printf("Escolha: ");
	scanf("%d", &opcao);
	
	switch(opcao) {
		case 1:
			printf("\nDigite o n�mero para calcular o quadrado dele: ");
			scanf("%d", &valor);
			
			calc = valor * valor;
			printf("\nO quadrado de %d � %d", valor, calc);
		break;
		
		case 2:
			printf("\nDigite o n�mero para calcular o fatorial dele: ");
			scanf("%d", &valor);
			
			calc = 1;
            cont = valor;
            
            while(cont > 0) {
                calc *= cont;
                cont--;
            }
            
			printf("\nO fatorial de %d � %d", valor, calc);
		break;
		
		case 3:
			printf("\nSaindo do Programa...");
		break;
	}
	
}


//--Segunda Atividade--//
print("1 - Calcular o quadrado de um n�mero")
print("2 - Calcular o fatorial de um n�mero")
print("3 - Sair do programa")
opcao = int(input("Escolha: "))

if opcao == 1:
    valor = int(input("Digite o n�mero para calcular o quadrado dele: "))
    calc = valor * valor
    print(f"O quadrado de {valor} � {calc}")

elif opcao == 2:
    valor = int(input("Digite o n�mero para calcular o fatorial dele: "))
    calc = 1
    cont = valor
    while cont > 0:
        calc *= cont
        cont -= 1
    print(f"O fatorial de {valor} � {calc}")

elif opcao == 3:
    print("Saindo do Programa...")

else:
    print("Op��o inv�lida!")


//--Terceira Atividade--//
/* Para mim foi mais simples a implementa��o em C, 
isso porque eu j� sabia programar nessa linguagem, 
al�m de que o c�digo � bem mais legivel com a 
utiliza��o do Switch. */



