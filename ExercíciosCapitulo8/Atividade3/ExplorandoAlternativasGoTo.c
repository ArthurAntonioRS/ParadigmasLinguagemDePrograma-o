#include <stdio.h>

//--Primeira Atividade--//
int processa_lista(int lista[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (lista[i] == 0) {
            
            break;
        }

        if (lista[i] < 0) {
            
            continue;
        }

        if (lista[i] % 2 == 0) {
            
            return lista[i] * 2;
        }
    }

    
    return -1;
}

int main() {
    int numeros[] = {3, -5, 7, -2, 4, 0, 10};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    int resultado = processa_lista(numeros, tamanho);

    if (resultado != -1) {
        printf("O dobro do primeiro número par encontrado é: %d\n", resultado);
    } else {
        printf("Nenhum número par encontrado antes do zero.\n");
    }

    return 0;
}


//--Segunda Atividade--//
/* Se esse mesmo programa fosse implementado utilizando apenas goto e rótulos,
seria necessário criar pontos de desvio manuais no código e controlar a execução 
saltando de um rótulo para outro. Isso tornaria o código menos legível e mais difícil 
de manter, já que seria preciso acompanhar constantemente para onde o fluxo está sendo direcionado.
Na abordagem moderna, utilizando estruturas como break, continue e return, o código fica mais claro, 
organizado e fácil de compreender, além de reduzir a chance de erros. O uso de goto pode gerar 
o chamado spaghetti code (código desorganizado e confuso), enquanto as estruturas de controle 
modernas fornecem um fluxo de execução muito mais intuitivo.Por isso, a utilização 
de break, continue e return é considerada uma boa prática. */
