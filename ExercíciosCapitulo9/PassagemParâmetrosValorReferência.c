#include <stdio.h>

//--Primeira Atividade--//
void dobrarPorValor(int x) {
    x = x * 2;
}

void dobrarPorReferencia(int *x) {
    *x = (*x) * 2;
}

int main() {
	
    int num = 10;

    printf("Valor inicial: %d\n", num);

    dobrarPorValor(num);
    printf("Ap�s dobrar por valor: %d\n", num);

    dobrarPorReferencia(&num);
    printf("Ap�s dobrar por refer�ncia: %d\n", num);

    return 0;
}


//--Segunda Atividade--//
/* Diferen�a observada: Na vers�o por valor, 
a vari�vel original n�o muda; na vers�o 
por refer�ncia, ela � alterada.

Por que s� altera na refer�ncia: Porque a fun��o 
recebe o endere�o da vari�vel, permitindo modificar o valor original.

Rela��o com passagem de par�metros: Por valor cria uma c�pia; 
por refer�ncia altera diretamente o dado original. */



