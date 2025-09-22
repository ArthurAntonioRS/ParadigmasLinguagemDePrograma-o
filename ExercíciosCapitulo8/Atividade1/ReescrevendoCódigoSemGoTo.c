#include <stdio.h>
#include <stdlib.h>

//--Programa Principal--//
i := 1
goto check

loop:
    print(i)
    i := i + 1

check:
    if (i <= 10) then
        goto loop


//--Primeira Atividade--//
main() {
	
	int i = 0;
	
	while(i <= 10) {
		printf("%d\n", i);
		i++;
	}
	
}


//--Segunda Atividade--//
main() {
	
	int i;
	
	for(i = 0; i <= 10; i++) {
		printf("%d\n", i);
	}
	
}


//--Terceira Atividade--//
/* Eu acredito que a melhor opção para 
esse código seja utilizar a versão do FOR, 
isso porque nós já sabemos a quantidade 
de repetições que o código deve realizar,
otimizando a utilização do código. */



