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
    printf("Após dobrar por valor: %d\n", num);

    dobrarPorReferencia(&num);
    printf("Após dobrar por referência: %d\n", num);

    return 0;
}


//--Segunda Atividade--//
/* Diferença observada: Na versão por valor, 
a variável original não muda; na versão 
por referência, ela é alterada.

Por que só altera na referência: Porque a função 
recebe o endereço da variável, permitindo modificar o valor original.

Relação com passagem de parâmetros: Por valor cria uma cópia; 
por referência altera diretamente o dado original. */



