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
/* Eu acredito que a melhor op��o para 
esse c�digo seja utilizar a vers�o do FOR, 
isso porque n�s j� sabemos a quantidade 
de repeti��es que o c�digo deve realizar,
otimizando a utiliza��o do c�digo. */



